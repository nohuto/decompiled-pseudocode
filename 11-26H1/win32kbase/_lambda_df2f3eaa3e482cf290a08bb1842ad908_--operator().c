/*
 * XREFs of _lambda_df2f3eaa3e482cf290a08bb1842ad908_::operator() @ 0x1401DA890
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401532B8 (W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140178390 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401DA4C8 (W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 */

__int64 __fastcall lambda_df2f3eaa3e482cf290a08bb1842ad908_::operator()(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  unsigned int v5; // edi
  unsigned int MaxSessionCount; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(a2, a4);
  v5 = 0;
  if ( PsGetCurrentProcessWin32Process(a1)
    || (MaxSessionCount = W32GetMaxSessionCount(), (unsigned int)W32GetCurrentWin32kSessionId(v7) < MaxSessionCount)
    && W32GetSessionState(v8) )
  {
    W32kEtwEnableCallbackWorker(*(const struct _GUID **)a4, *(_DWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
