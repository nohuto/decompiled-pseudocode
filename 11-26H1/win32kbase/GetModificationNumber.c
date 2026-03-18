/*
 * XREFs of GetModificationNumber @ 0x1400E861C
 * Callers:
 *     VKFromVSC @ 0x14008ABB0 (VKFromVSC.c)
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1401C6C20 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x14021CC70 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModificationNumber(__int64 a1, unsigned __int16 a2)
{
  if ( a2 > *(_WORD *)(a1 + 8) )
    return 15LL;
  else
    return *(unsigned __int8 *)(a2 + a1 + 10);
}
