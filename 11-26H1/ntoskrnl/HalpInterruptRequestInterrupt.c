/*
 * XREFs of HalpInterruptRequestInterrupt @ 0x14057FCC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x1405920B0 (HalpInterruptRequestSecondaryInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptRequestInterrupt(unsigned int a1)
{
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  ULONG_PTR *v5; // rsi
  unsigned __int8 v6; // bp
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v3 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, a1) )
      return (unsigned int)HalpInterruptRequestSecondaryInterrupt(a1);
    HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x1015u);
    return (unsigned int)-1073741811;
  }
  LODWORD(v8) = LinesForGsiRange[4];
  HIDWORD(v8) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v5 = HalpInterruptLookupController(v8);
  if ( !v5 )
  {
    HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x1025u);
    return (unsigned int)-1073741811;
  }
  v6 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
  if ( (*(_DWORD *)(56LL * (a1 - v3[7]) + *((_QWORD *)v3 + 5) + 12) & 0x10) != 0 )
    v4 = guard_dispatch_icall_no_overrides(v5[2], &v8);
  else
    v4 = -1073741811;
  HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v6);
  return v4;
}
