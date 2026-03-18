/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028D2C8
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14022F420 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     _lambda_db335634cca102d801ed3f8d4f73e9a4_::operator() @ 0x14028D430 (_lambda_db335634cca102d801ed3f8d4f73e9a4_--operator().c)
 */

__int64 W32AttachToEverySessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_()
{
  __int64 CurrentWin32kSessionId; // rsi
  __int64 v1; // rcx
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int MaxSessionCount; // ebp

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId();
  v2 = lambda_db335634cca102d801ed3f8d4f73e9a4_::operator()(v1, 0LL, CurrentWin32kSessionId);
  v3 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_db335634cca102d801ed3f8d4f73e9a4_::operator()(v4, v3++, (unsigned int)CurrentWin32kSessionId);
    while ( v3 < MaxSessionCount );
  }
  return v2;
}
