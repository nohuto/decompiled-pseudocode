/*
 * XREFs of HalpUnmaskInterrupt @ 0x140433BC0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14043394C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUnmaskInterrupt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v5; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // ebx
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  v5 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v3) )
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(v3, a2, 0);
    HalpInterruptLastProblem = 19;
    HalpInterruptLastProblemLine = 1820;
    goto LABEL_10;
  }
  LODWORD(v12) = LinesForGsiRange[4];
  HIDWORD(v12) = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController((unsigned int)v12);
  if ( !v6 )
  {
    HalpInterruptLastProblem = 17;
    HalpInterruptLastProblemLine = 1840;
LABEL_10:
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    v10 = -1073741811;
    HalpInterruptLastProblemController = 0LL;
    return v10;
  }
  v7 = (unsigned __int8)HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
  v8 = *((_QWORD *)v5 + 5) + 56LL * (v3 - v5[7]);
  v9 = *(_DWORD *)(v8 + 12) & 0xFFFFFFDF;
  if ( (a2 & 2) == 0 )
    v9 = *(_DWORD *)(v8 + 12) | 0x10;
  *(_DWORD *)(v8 + 12) = v9;
  v10 = HalpInterruptSetLineStateInternal(v6, (__int64)&v12, v8);
  KxReleaseSpinLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  __writecr8(v7);
  return v10;
}
