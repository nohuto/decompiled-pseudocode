/*
 * XREFs of _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch$13 @ 0x18004E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180039D38 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 232),
                           (void *)0xC5,
                           (int)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
                           a4);
  return 0LL;
}
