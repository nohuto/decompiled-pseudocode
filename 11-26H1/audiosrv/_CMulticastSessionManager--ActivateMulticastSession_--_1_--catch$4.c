/*
 * XREFs of _CMulticastSessionManager::ActivateMulticastSession_::_1_::catch$4 @ 0x18016A568
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMulticastSessionManager::ActivateMulticastSession_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x108,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                            a4);
  return 0LL;
}
