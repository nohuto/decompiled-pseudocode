/*
 * XREFs of SymCryptScsTableLoad @ 0x1405773B0
 * Callers:
 *     SymCryptModExpWindowed @ 0x14057034C (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x1405773D8 (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x140577544 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}
