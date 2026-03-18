/*
 * XREFs of ?Thunk_Reply_UnregisterPort_20@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x14015C7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_Reply_UnregisterPort_20(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_DWORD *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 32) = 0;
  return 0LL;
}
