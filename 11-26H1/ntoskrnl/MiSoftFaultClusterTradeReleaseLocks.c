/*
 * XREFs of MiSoftFaultClusterTradeReleaseLocks @ 0x140712784
 * Callers:
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031C220 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 */

__int64 __fastcall MiSoftFaultClusterTradeReleaseLocks(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = a1[1];
  _InterlockedAnd64((volatile signed __int64 *)(a1[2] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v3 )
  {
    if ( !MiIsProtoPoolPfnInNonPagedPool(v3) )
    {
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v7);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      MiAddLockedPageCharge(v3, 3, v4, v5);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiUnlockProtoPoolPage(v3, 0x11u);
  }
  result = MiReleaseFaultState(v1 + 56, 1u, &v7);
  a1[4] = result;
  return result;
}
