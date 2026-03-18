/*
 * XREFs of WmsgpPostMessage @ 0x1402C9DE4
 * Callers:
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ClientI_WMsgkSendMessage @ 0x14014AEC0 (ClientI_WMsgkSendMessage.c)
 *     WMsg_midl_user_allocate @ 0x14014DD90 (WMsg_midl_user_allocate.c)
 */

__int64 __fastcall WmsgpPostMessage(RPC_BINDING_HANDLE SourceBinding, int a2, int a3)
{
  struct _RPC_ASYNC_STATE *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  RPC_BINDING_HANDLE DestinationBinding; // [rsp+78h] [rbp+20h] BYREF

  DestinationBinding = 0LL;
  v6 = (struct _RPC_ASYNC_STATE *)WMsg_midl_user_allocate(88LL);
  v7 = (__int64)v6;
  if ( !v6 )
    return 3221225495LL;
  v8 = RpcAsyncInitializeHandle(v6, 0x58u);
  if ( v8 || (v8 = RpcBindingCopy(SourceBinding, &DestinationBinding)) != 0 )
  {
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v7);
  }
  else
  {
    *(_QWORD *)(v7 + 24) = DestinationBinding;
    *(_DWORD *)(v7 + 44) = 2;
    *(_QWORD *)(v7 + 48) = I_RpcGetCompleteAndFreeRoutine();
    ClientI_WMsgkSendMessage(v7, (__int64)DestinationBinding, a2, a3);
  }
  return v8;
}
