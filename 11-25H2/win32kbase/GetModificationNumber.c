/*
 * XREFs of GetModificationNumber @ 0x14010F83C
 * Callers:
 *     VKFromVSC @ 0x1401174C0 (VKFromVSC.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1401A2760 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x140217E00 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
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
