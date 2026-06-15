/*
 * XREFs of _CAudioStream::InitializeAPOs_::_1_::catch$24 @ 0x180168603
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BCB08 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeAPOs_::_1_::catch_24(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 360),
                           (void *)0x280,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           a4);
  return 0LL;
}
