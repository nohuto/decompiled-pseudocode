/*
 * XREFs of ?do_narrow@?$ctype@G@std@@MEBADGD@Z @ 0x18005DC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall std::ctype<unsigned short>::do_narrow(__int64 a1, wchar_t a2, char a3)
{
  return std::ctype<wchar_t>::_Donarrow(a1, a2, a3);
}
