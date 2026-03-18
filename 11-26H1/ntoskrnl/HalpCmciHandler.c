/*
 * XREFs of HalpCmciHandler @ 0x14052080C
 * Callers:
 *     HalpInterruptDeferredErrorService @ 0x1405943F0 (HalpInterruptDeferredErrorService.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     HalpGetCpuVendor @ 0x140453A00 (HalpGetCpuVendor.c)
 *     HalpCmciResetStateAMD @ 0x14045480C (HalpCmciResetStateAMD.c)
 *     KeIpiGenericCall @ 0x1404AAD60 (KeIpiGenericCall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char HalpCmciHandler()
{
  KPCR *Pcr; // rax
  __int64 i; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v3; // rdx
  LONGLONG v4; // rcx
  unsigned int v5; // eax
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // r8
  __int128 Src; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]

  LOBYTE(Pcr) = HalpMcaWheaReady;
  Src = 0LL;
  v10 = 0LL;
  if ( HalpMcaWheaReady )
  {
    Pcr = KeGetPcr();
    for ( i = *(_QWORD *)&Pcr->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
    {
      if ( *(_QWORD *)(i + 16) && *(_QWORD *)(i + 24) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        ++*(_DWORD *)(i + 124);
        v4 = PerformanceCounter.QuadPart - *(_QWORD *)(i + 112);
        if ( v4 >= HalpCmciThresholdTime )
        {
          *(LARGE_INTEGER *)(i + 112) = PerformanceCounter;
          v5 = 1;
          *(_DWORD *)(i + 120) = 1;
        }
        else
        {
          v5 = *(_DWORD *)(i + 120) + 1;
          *(_DWORD *)(i + 120) = v5;
        }
        if ( v5 > HalpCmciThresholdCount )
        {
          LODWORD(Pcr) = _InterlockedIncrement(&HalpCmciRevertToPolledMode);
          if ( (_DWORD)Pcr == 1 )
          {
            *(_QWORD *)&Src = 0x1674C6857LL;
            *((_QWORD *)&Src + 1) = 0x100000020LL;
            *(_QWORD *)&v10 = 0x80000003204C4148uLL;
            *((_QWORD *)&v10 + 1) = 2LL;
            WheaLogInternalEvent(&Src);
            KeIpiGenericCall(HalpDisableCmciOnProcessor, 0LL);
            LOBYTE(Pcr) = KiInsertQueueDpc(i + 48, 0LL, 0LL, 0LL, 0);
          }
          return (char)Pcr;
        }
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 14 )
          __writecr8(0xEuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v3.LowPart) = 14;
          LOBYTE(v4) = CurrentIrql;
          ((void (__fastcall *)(_QWORD, _QWORD))KiRaiseIrqlProcessIrqlFlags)(v4, (LARGE_INTEGER)v3.QuadPart);
        }
        if ( !*(_BYTE *)(i + 128) )
        {
          if ( HalpGetCpuVendor() == 1 )
            HalpCmciResetStateAMD(v7);
          KiInsertQueueDpc(i + 48, 0LL, 0LL, 0LL, 0);
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        LOBYTE(Pcr) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
  }
  return (char)Pcr;
}
