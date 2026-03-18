/*
 * XREFs of ?Thunk_Reply_PrepareConnection_35@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x140149C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_Reply_PrepareConnection_35(
        __int64 a1,
        int **a2,
        __int64 a3)
{
  int *v3; // rdi
  int v4; // ebx
  __int64 UserCoreMessagingSessionState; // rax

  v3 = a2[4];
  v4 = **a2;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = v4;
  *(_QWORD *)(UserCoreMessagingSessionState + 40) = v3;
  return 0LL;
}
