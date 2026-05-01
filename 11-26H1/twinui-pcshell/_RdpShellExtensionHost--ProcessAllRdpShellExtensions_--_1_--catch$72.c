/*
 * XREFs of _RdpShellExtensionHost::ProcessAllRdpShellExtensions_::_1_::catch$72 @ 0x180705997
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180050D78 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall RdpShellExtensionHost::ProcessAllRdpShellExtensions_::_1_::catch_72(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 472),
                           (void *)0x82,
                           (int)"pcshell\\twinui\\rdpshellextensionhost\\lib\\rdpshellextensionhost.cpp",
                           a4);
  return 0LL;
}
