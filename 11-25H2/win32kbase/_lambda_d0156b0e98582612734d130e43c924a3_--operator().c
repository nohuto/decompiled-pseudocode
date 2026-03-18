/*
 * XREFs of _lambda_d0156b0e98582612734d130e43c924a3_::operator() @ 0x1401B76A8
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___ @ 0x1401B7094 (W32AttachToEverySessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___.c)
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___ @ 0x1401B7418 (W32AttachToSessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___.c)
 *     _lambda_96b8056d46963c03c201fa3bdebf14cf_::operator() @ 0x1401B75B0 (_lambda_96b8056d46963c03c201fa3bdebf14cf_--operator().c)
 */

__int64 __fastcall lambda_d0156b0e98582612734d130e43c924a3_::operator()(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  __int64 v5; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf_(a2, a4);
  if ( PsGetCurrentProcessWin32Process(a1) || W32GetSessionState(v5) )
    return lambda_96b8056d46963c03c201fa3bdebf14cf_::operator()(a4);
  return 3221225485LL;
}
