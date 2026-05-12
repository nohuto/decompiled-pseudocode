/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x14003A8E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqx_EtwWriteTransfer @ 0x14005D5C0 (McTemplateK0pqqx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  LARGE_INTEGER v4; // rbx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  char v7; // bp
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v11; // r8
  char CurrentProcessorNumber; // al
  int v13; // r8d
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v4.QuadPart = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1094997074 || (*(_BYTE *)(a2 + 107) & 1) == 0 || *(int *)(a2 + 348) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && (byte_140173443 & 8) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  if ( a2 != -376 && (v5 = *(_QWORD *)(a2 + 608)) != 0 && (v6 = *(__int64 (__fastcall **)(__int64))(v5 + 24)) != 0LL )
    v7 = v6(*(_QWORD *)(a2 + 616) + 16LL);
  else
    v7 = 0;
  if ( StorEtwLoggingEnabled && (byte_140173443 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v9.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v9.QuadPart <= 0 || v9.QuadPart >= v4.QuadPart )
      v11 = v9.QuadPart - v4.QuadPart;
    else
      v11 = v9.QuadPart - v4.QuadPart - 1;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v11 )
        v2 = 10000
           * (1000 * (v11 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v11 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 1000 * (v11 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v2 = v11;
    }
    v15 = v2;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_140173443 & 8) != 0 )
      McTemplateK0pqqx_EtwWriteTransfer(
        v15,
        *(_DWORD *)(a2 + 56),
        v13,
        (unsigned int)RaidpAdapterInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v15);
  }
  return v7;
}
