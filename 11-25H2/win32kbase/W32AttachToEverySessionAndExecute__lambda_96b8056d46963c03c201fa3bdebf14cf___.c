/*
 * XREFs of W32AttachToEverySessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___ @ 0x1401B7094
 * Callers:
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1401558F0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     _lambda_d0156b0e98582612734d130e43c924a3_::operator() @ 0x1401B76A8 (_lambda_d0156b0e98582612734d130e43c924a3_--operator().c)
 */

__int64 __fastcall W32AttachToEverySessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf_(__int64 a1)
{
  __int64 CurrentWin32kSessionId; // rbp
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int MaxSessionCount; // r14d

  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId();
  v4 = lambda_d0156b0e98582612734d130e43c924a3_::operator()(v3, 0LL, CurrentWin32kSessionId, a1);
  v5 = 1;
  MaxSessionCount = W32GetMaxSessionCount();
  if ( MaxSessionCount > 1 )
  {
    do
      lambda_d0156b0e98582612734d130e43c924a3_::operator()(v6, v5++, (unsigned int)CurrentWin32kSessionId, a1);
    while ( v5 < MaxSessionCount );
  }
  return v4;
}
