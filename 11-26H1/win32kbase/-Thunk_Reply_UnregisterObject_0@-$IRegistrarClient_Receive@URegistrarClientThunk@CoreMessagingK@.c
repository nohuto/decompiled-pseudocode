/*
 * XREFs of ?Thunk_Reply_UnregisterObject_0@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x14019AE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_Reply_UnregisterObject_0(
        __int64 a1,
        int **a2,
        __int64 a3)
{
  int v3; // ebx

  v3 = **a2;
  *(_DWORD *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 32) = v3;
  return 0LL;
}
