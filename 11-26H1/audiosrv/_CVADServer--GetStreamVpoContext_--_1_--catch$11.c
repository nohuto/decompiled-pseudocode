/*
 * XREFs of _CVADServer::GetStreamVpoContext_::_1_::catch$11 @ 0x18016A980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamVpoContext_::_1_::catch_11(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0xB1F,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                            a4);
  return 0LL;
}
