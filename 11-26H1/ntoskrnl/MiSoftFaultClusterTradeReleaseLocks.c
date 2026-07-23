/*
 * XREFs of MiSoftFaultClusterTradeReleaseLocks @ 0x14071747C
 * Callers:
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiIsProtoPoolPfnInNonPagedPool @ 0x14031E250 (MiIsProtoPoolPfnInNonPagedPool.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 */

__int64 __fastcall MiSoftFaultClusterTradeReleaseLocks(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  v6 = a1[1];
  _InterlockedAnd64((volatile signed __int64 *)(a1[2] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
  {
    if ( !MiIsProtoPoolPfnInNonPagedPool(v6) )
    {
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      MiAddLockedPageCharge(v6, 3, v8, v9);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    LOBYTE(v7) = 17;
    MiUnlockProtoPoolPage(v6, v7, v8);
  }
  result = MiReleaseFaultState(v4 + 56, 1u, (__int64)&v11, a4);
  a1[4] = result;
  return result;
}
