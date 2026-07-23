/*
 * XREFs of MmVerifierTrimMemory @ 0x140C497C8
 * Callers:
 *     ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4 (ViKeIrqlLogAndTrimMemory.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiTrimAllSystemPagableMemory @ 0x14044EF98 (MiTrimAllSystemPagableMemory.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 */

LARGE_INTEGER __fastcall MmVerifierTrimMemory(int a1)
{
  unsigned __int64 v1; // rbx
  ULONG64 v2; // rcx
  __int64 v3; // rdx
  LARGE_INTEGER result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  LARGE_INTEGER v7; // rbx
  __int128 v8; // rtt
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+40h] BYREF
  __int64 v11; // [rsp+70h] [rbp+48h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+78h] [rbp+50h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v11 = 0LL;
  v1 = (unsigned int)(10000000 * a1) / 0x64uLL;
  v2 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  v3 = v2 / 0x989680;
  if ( v2 / 0x989680 != qword_140E36208 || (result.QuadPart = qword_140E36210, qword_140E36210 < v1) )
  {
    result.QuadPart = (unsigned int)dword_140E36224;
    if ( !dword_140E36224 )
    {
      result.QuadPart = (unsigned int)dword_140E36240;
      if ( dword_140E36240 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        result.QuadPart = (unsigned int)_InterlockedCompareExchange(&dword_140E36224, 1, 0);
        if ( result.LowPart )
          goto LABEL_6;
        v2 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
        result.QuadPart = qword_140E36208;
        v3 = v2 / 0x989680;
        if ( v2 / 0x989680 == qword_140E36208 )
        {
          if ( qword_140E36210 >= v1 )
          {
LABEL_25:
            _InterlockedAdd(&dword_140E36224, 0xFFFFFFFF);
LABEL_6:
            if ( CurrentThread->SpecialApcDisable++ == -1 )
            {
              result.QuadPart = (LONGLONG)&CurrentThread->152;
              if ( *(_QWORD *)result.QuadPart != result.QuadPart )
                return (LARGE_INTEGER)KiCheckForKernelApcDelivery(v2, v3);
            }
            return result;
          }
        }
        else
        {
          qword_140E36208 = v2 / 0x989680;
          qword_140E36210 = 0LL;
          dword_140E36220 = 0;
        }
        result.QuadPart = RtlpGetStackLimits((__int64)&PerformanceFrequency, (__int64)&v11);
        if ( LOBYTE(result.LowPart) )
        {
          result.QuadPart = (LONGLONG)&KeGetCurrentStackPointer()[-PerformanceFrequency.QuadPart];
          if ( result.QuadPart > 0x1A30uLL )
          {
            ++dword_140F08A40;
            dword_140E36240 = 0;
            PerformanceFrequency.QuadPart = 0LL;
            v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( PerformanceFrequency.QuadPart != 10000000 )
              v7.QuadPart = 10000000 * v7.QuadPart / PerformanceFrequency.QuadPart;
            result.QuadPart = MiTrimAllSystemPagableMemory(0);
            if ( result.LowPart )
            {
              PerformanceFrequency.QuadPart = 0LL;
              result = KeQueryPerformanceCounter(&PerformanceFrequency);
              if ( PerformanceFrequency.QuadPart != 10000000 )
              {
                v8 = 10000000 * result.QuadPart;
                result.QuadPart = 10000000 * result.QuadPart / PerformanceFrequency.QuadPart;
                v3 = v8 % PerformanceFrequency.QuadPart;
              }
              v9 = v7;
              if ( result.QuadPart >= (unsigned __int64)v7.QuadPart )
                v9 = result;
              ++dword_140E36220;
              v2 = v9.QuadPart - v7.QuadPart;
              qword_140E36210 += v2;
              if ( v2 > qword_140E36218 )
                qword_140E36218 = v2;
              ++dword_140F08A44;
            }
          }
        }
        goto LABEL_25;
      }
    }
  }
  return result;
}
