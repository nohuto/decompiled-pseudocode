/*
 * XREFs of ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1401CF070
 * Callers:
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAUFONTFILEVIEW@@@Z @ 0x140327550 (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAUFONTFILEVIEW@@@Z.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x1403275E4 (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 * Callees:
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1401CF0B4 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 */

struct PFE *__fastcall ppfeGetPFEFromUFI(struct _UNIVERSAL_FONT_ID *a1, int a2, int a3)
{
  struct PFE *result; // rax

  if ( !a2 )
    return ppfeGetPFEFromUFIInternal(a1, 0, a3);
  result = ppfeGetPFEFromUFIInternal(a1, 1, a3);
  if ( !result )
    return ppfeGetPFEFromUFIInternal(a1, 0, a3);
  return result;
}
