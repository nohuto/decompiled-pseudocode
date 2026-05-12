/*
 * XREFs of RaidpAdapterMSIInterruptRoutine @ 0x140035370
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqx_EtwWriteTransfer @ 0x14005D5C0 (McTemplateK0pqqx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaidpAdapterMSIInterruptRoutine(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  LARGE_INTEGER v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD); // rax
  char v8; // si
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // r8
  char CurrentProcessorNumber; // al
  int v14; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v4 = a3;
  v6.QuadPart = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1094997074 || (*(_BYTE *)(a2 + 107) & 1) == 0 || *(int *)(a2 + 348) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && (byte_140173443 & 8) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v6 = PerformanceCounter;
  }
  if ( *(char *)(a2 + 111) >= 0 || (unsigned int)v4 <= 1 )
  {
    if ( a2 == -376 || (v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 536)) == 0LL )
      v8 = 0;
    else
      v8 = v7(*(_QWORD *)(a2 + 616) + 16LL, (unsigned int)v4);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 6160))(*(_QWORD *)(a2 + 6144), v4);
  }
  if ( StorEtwLoggingEnabled && (byte_140173443 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v11.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v11.QuadPart <= 0 || v11.QuadPart >= v6.QuadPart )
      v12 = v11.QuadPart - v6.QuadPart;
    else
      v12 = v11.QuadPart - v6.QuadPart - 1;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v12 )
        v3 = 10000
           * (1000 * (v12 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v12 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 1000 * (v12 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v3 = v12;
    }
    v16 = v3;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_140173443 & 8) != 0 )
      McTemplateK0pqqx_EtwWriteTransfer(
        v16,
        *(_DWORD *)(a2 + 56),
        v14,
        (unsigned int)RaidpAdapterMSIInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v16);
  }
  return v8;
}
