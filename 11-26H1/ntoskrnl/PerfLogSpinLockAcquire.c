/*
 * XREFs of PerfLogSpinLockAcquire @ 0x1404D3B24
 * Callers:
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14029AC70 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402FE108 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14040B640 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140428DE0 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x1404B45A4 (KiTryToAcquireSpinLockInstrumented.c)
 * Callees:
 *     <none>
 */

char __fastcall PerfLogSpinLockAcquire(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *EtwSupport; // r10
  unsigned int v9; // r11d
  __int64 v10; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  EtwSupport = CurrentPrcb->EtwSupport;
  v9 = *((unsigned __int8 *)EtwSupport + 272);
  if ( (unsigned __int8)v9 >= 8u )
  {
    ++EtwSupport[69];
  }
  else
  {
    *((_BYTE *)EtwSupport + 272) = v9 + 1;
    v10 = 8LL * v9;
    EtwSupport[v10 + 10] = a5;
    LOBYTE(CurrentPrcb) = a6;
    LOBYTE(EtwSupport[v10 + 11]) = a6;
    *(_QWORD *)&EtwSupport[v10 + 4] = a2;
    EtwSupport[v10 + 9] = a4;
    *(_QWORD *)&EtwSupport[v10 + 6] = a1;
    EtwSupport[v10 + 8] = a3;
  }
  return (char)CurrentPrcb;
}
