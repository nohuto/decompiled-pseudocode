/*
 * XREFs of ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1401558F0
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToEverySessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___ @ 0x1401B7094 (W32AttachToEverySessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___.c)
 *     _lambda_96b8056d46963c03c201fa3bdebf14cf_::_lambda_96b8056d46963c03c201fa3bdebf14cf_ @ 0x1401B7488 (_lambda_96b8056d46963c03c201fa3bdebf14cf_--_lambda_96b8056d46963c03c201fa3bdebf14cf_.c)
 */

void __fastcall W32kTraceLoggingEnableCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  const struct _GUID *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 == 2 )
  {
    v7 = a4;
    v6 = a1;
    v4 = lambda_96b8056d46963c03c201fa3bdebf14cf_::_lambda_96b8056d46963c03c201fa3bdebf14cf_(v5, &v6, &v7);
    W32AttachToEverySessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf_(v4);
  }
}
