/*
 * XREFs of PsPicoWalkUserStack @ 0x140B4C1D8
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     PsGetBaseTrapFrame @ 0x140469AD0 (PsGetBaseTrapFrame.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PsPicoWalkUserStack(__int64 a1)
{
  _OWORD *BaseTrapFrame; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r9
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  _BYTE v8[400]; // [rsp+20h] [rbp-1A8h] BYREF

  memset_0(v8, 0, sizeof(v8));
  BaseTrapFrame = (_OWORD *)PsGetBaseTrapFrame((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( PsAltSystemCallRegistrationLock.StateSaveArea )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v5 = 3LL;
    v6 = v8;
    do
    {
      *v6 = *BaseTrapFrame;
      v6[1] = BaseTrapFrame[1];
      v6[2] = BaseTrapFrame[2];
      v6[3] = BaseTrapFrame[3];
      v6[4] = BaseTrapFrame[4];
      v6[5] = BaseTrapFrame[5];
      v6[6] = BaseTrapFrame[6];
      v6 += 8;
      v7 = BaseTrapFrame[7];
      BaseTrapFrame += 8;
      *(v6 - 1) = v7;
      --v5;
    }
    while ( v5 );
    *v6 = *BaseTrapFrame;
    KeLeaveGuardedRegion();
    return guard_dispatch_icall_no_overrides((__int64)v8, a1);
  }
  return result;
}
