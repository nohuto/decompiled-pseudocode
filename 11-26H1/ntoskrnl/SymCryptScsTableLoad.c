/*
 * XREFs of SymCryptScsTableLoad @ 0x140574EFC
 * Callers:
 *     SymCryptModExpWindowed @ 0x14057116C (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x140574F24 (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x140575090 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}
