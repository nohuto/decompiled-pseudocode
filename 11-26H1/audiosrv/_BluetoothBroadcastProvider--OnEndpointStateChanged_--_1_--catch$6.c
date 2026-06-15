/*
 * XREFs of _BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::catch$6 @ 0x180169266
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CA448 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x112,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
    a4);
  return 0LL;
}
