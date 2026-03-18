/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401532B8
 * Callers:
 *     McGenControlCallbackV2 @ 0x140153160 (McGenControlCallbackV2.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     _lambda_df2f3eaa3e482cf290a08bb1842ad908_::operator() @ 0x1401DA890 (_lambda_df2f3eaa3e482cf290a08bb1842ad908_--operator().c)
 */

__int64 __fastcall W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(__int64 a1)
{
  __int64 CurrentWin32kSessionId; // rbp
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int MaxSessionCount; // r14d

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId(a1);
  v4 = lambda_df2f3eaa3e482cf290a08bb1842ad908_::operator()(v3, 0LL, CurrentWin32kSessionId, a1);
  v5 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_df2f3eaa3e482cf290a08bb1842ad908_::operator()(v6, v5++, (unsigned int)CurrentWin32kSessionId, a1);
    while ( v5 < MaxSessionCount );
  }
  return v4;
}
