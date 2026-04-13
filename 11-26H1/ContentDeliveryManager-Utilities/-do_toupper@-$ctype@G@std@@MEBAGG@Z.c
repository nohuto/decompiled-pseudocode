/*
 * XREFs of ?do_toupper@?$ctype@G@std@@MEBAGG@Z @ 0x18005DE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t __fastcall std::ctype<unsigned short>::do_toupper(__int64 a1, wchar_t a2)
{
  return Towupper(a2, (const _Ctypevec *)(a1 + 16));
}
