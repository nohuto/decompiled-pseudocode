/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$10 @ 0x1800E8AA6
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x180091D00 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_10(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 104),
    *(const struct stdext::exception **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152));
  return 0LL;
}
