/*
 * XREFs of HalpMaskInterrupt @ 0x140433A70
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

__int64 __fastcall HalpMaskInterrupt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  v5 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v3) )
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(v3, a2, 1);
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblem = 19;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemLine = 1708;
    return (unsigned int)-1073741811;
  }
  LODWORD(v12) = LinesForGsiRange[4];
  HIDWORD(v12) = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController((unsigned int)v12);
  if ( !v6 )
    return (unsigned int)-1073741811;
  v9 = (unsigned __int8)HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
  v10 = *((_QWORD *)v5 + 5) + 56LL * (v3 - v5[7]);
  v11 = *(_DWORD *)(v10 + 12) | 0x20;
  if ( (a2 & 1) == 0 )
    v11 = *(_DWORD *)(v10 + 12) & 0xFFFFFFEF;
  *(_DWORD *)(v10 + 12) = v11;
  v7 = HalpInterruptSetLineStateInternal(v6, (__int64)&v12, v10);
  KxReleaseSpinLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  __writecr8(v9);
  return v7;
}
