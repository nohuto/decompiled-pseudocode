/*
 * XREFs of _raise_excf @ 0x1405004F0
 * Callers:
 *     _handle_errorf @ 0x1404FFD10 (_handle_errorf.c)
 * Callees:
 *     _raise_exc_ex @ 0x1405001D0 (_raise_exc_ex.c)
 */

__int64 __fastcall raise_excf(unsigned __int64 a1, unsigned __int64 *a2, char a3, int a4, _DWORD *a5, _DWORD *a6)
{
  return raise_exc_ex(a1, a2, a3, a4, a5, a6, 1);
}
