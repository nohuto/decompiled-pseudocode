/*
 * XREFs of HalpTimerTestHypervisorTimer @ 0x14058702C
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x140586D60 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpSetTimer @ 0x140208790 (HalpSetTimer.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x1405854D0 (HalpTimerUnmapInterrupt.c)
 *     HalpCreateInterrupt @ 0x140596DA0 (HalpCreateInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140596E80 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerTestHypervisorTimer(__int64 a1, bool *a2, __int64 a3, __int64 a4)
{
  volatile LONG Lock; // ecx
  int v7; // edi
  int v8; // r8d
  int v9; // r9d
  int v10; // esi
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // edi
  __int64 v15; // rdx
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  while ( 1 )
  {
    v21 = 0LL;
    Lock = KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock;
    *((_QWORD *)&v21 + 1) = (unsigned __int16)((unsigned int)KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock >> 6);
    *(_QWORD *)&v21 = 1LL << Lock;
    v7 = HalpTimerConfigureInterrupt(
           a1,
           0xD4u,
           15,
           a4,
           -1LL,
           0,
           (unsigned __int64 *)&v21,
           (__int64)RtlpFunctionOverrideSelfTestSuccess);
    if ( v7 < 0 )
      break;
    LOBYTE(v8) = 15;
    *(_DWORD *)(a1 + 64) = 0;
    HalpInterruptSetIdtEntry(212, (unsigned int)HalpTimerHypervisorInterruptStub, v8, v9, -1LL);
    v10 = 0;
    while ( 1 )
    {
      v7 = HalpSetTimer(a1, 3u, 0x2710uLL, 1, &v22);
      if ( v7 >= 0 )
        break;
      if ( (unsigned int)++v10 >= 0xA )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), v11);
        LOBYTE(v12) = 15;
        HalpCreateInterrupt((unsigned int)RtlpFunctionOverrideSelfTestSuccess, 212, v12, v13, -1LL);
        goto LABEL_15;
      }
    }
    v14 = 0;
    do
    {
      KeStallExecutionProcessor(0x3E8u);
      v16 = *(_DWORD *)(a1 + 64);
      ++v14;
    }
    while ( !v16 && v14 < 0x64 );
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), v15);
    LOBYTE(v17) = 15;
    HalpCreateInterrupt((unsigned int)RtlpFunctionOverrideSelfTestSuccess, 212, v17, v18, -1LL);
    v19 = *(_DWORD *)(a1 + 184) & 0x10;
    if ( v16 )
    {
      v7 = 0;
      *a2 = v19 != 0;
      break;
    }
    if ( !v19 || (*(_DWORD *)(a1 + 224) & 0xB00) == 0 )
    {
      v7 = -1073741823;
      break;
    }
    HalpTimerUnmapInterrupt(a1, 212, 0, 0);
    *(_DWORD *)(a1 + 224) &= ~0x400u;
  }
LABEL_15:
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
    HalpTimerUnmapInterrupt(a1, 212, 0, 0);
  return (unsigned int)v7;
}
