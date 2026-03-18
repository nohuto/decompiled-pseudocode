/*
 * XREFs of HalDisableInterrupt @ 0x1404240E0
 * Callers:
 *     KiDisconnectInterruptInternal @ 0x140423FBC (KiDisconnectInterruptInternal.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140424278 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x14032DC5C (HalpInterruptSetLineStateInternal.c)
 *     HalpDisableSecondaryInterrupt @ 0x140423064 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptApplyOverrides @ 0x140426138 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140426C08 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140426C98 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x14042A15C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalDisableInterrupt(_DWORD *a1)
{
  unsigned int v1; // edi
  int v3; // eax
  unsigned int v5; // esi
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v7; // rbp
  __int64 v8; // rsi
  unsigned __int8 v9; // bl
  __int64 v10; // r8
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+44h] [rbp+Ch]

  v1 = 0;
  if ( *a1 != 1 )
  {
    HalpInterruptLastProblem = 19;
    HalpInterruptLastProblemLine = 371;
LABEL_6:
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblemController = 0LL;
    return (unsigned int)-1073741811;
  }
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 3 )
      return v1;
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 432);
    return (unsigned int)-1073741811;
  }
  v5 = a1[16];
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
  v7 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v5) )
      return (unsigned int)HalpDisableSecondaryInterrupt((__int64)a1);
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemLine = 417;
    goto LABEL_6;
  }
  v11 = LinesForGsiRange[4];
  v12 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
  HalpInterruptApplyOverrides(&v11, 0LL, 0LL);
  v8 = HalpInterruptLookupController(v11);
  if ( !v8 )
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 456);
  v9 = HalpAcquireHighLevelLock(&HalpDeviceBlockUnblockPushLock.Timer.DueTime.QuadPart);
  v10 = *((_QWORD *)v7 + 5) + 56LL * (int)(v12 - v7[5]);
  *(_DWORD *)(v10 + 12) &= ~0x10u;
  v1 = HalpInterruptSetLineStateInternal(v8, (__int64)&v11, v10);
  HalpReleaseHighLevelLock(&HalpDeviceBlockUnblockPushLock.Timer.DueTime.QuadPart, v9);
  return v1;
}
