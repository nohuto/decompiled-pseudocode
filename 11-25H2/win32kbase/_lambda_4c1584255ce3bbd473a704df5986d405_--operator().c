/*
 * XREFs of _lambda_4c1584255ce3bbd473a704df5986d405_::operator() @ 0x1401B74EC
 * Callers:
 *     W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x140113720 (W32AttachToEverySessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 * Callees:
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140140BD8 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x14016CF6C (W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 */

__int64 __fastcall lambda_4c1584255ce3bbd473a704df5986d405_::operator()(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 != a3 )
    return W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(a2);
  v6 = 0;
  if ( PsGetCurrentProcessWin32Process(a1) || W32GetSessionState(v5) )
    W32kEtwEnableCallbackWorker(*(const struct _GUID **)a4, *(_DWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
  else
    return (unsigned int)-1073741811;
  return v6;
}
