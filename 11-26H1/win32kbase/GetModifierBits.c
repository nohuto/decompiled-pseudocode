/*
 * XREFs of GetModifierBits @ 0x1400E863C
 * Callers:
 *     VKFromVSC @ 0x14008ABB0 (VKFromVSC.c)
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1401C6C20 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x14021CC70 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModifierBits(char **a1, __int64 a2)
{
  unsigned __int8 *v2; // r8
  unsigned __int16 v3; // r9
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r10

  v2 = (unsigned __int8 *)*a1;
  v3 = 0;
  v4 = **a1;
  if ( v4 )
  {
    v5 = **a1;
    do
    {
      if ( ((unsigned __int8)(1 << (2 * (v4 & 3))) & *(_BYTE *)(((unsigned __int64)v5 >> 2) + a2)) != 0 )
        v3 |= v2[1];
      v2 += 2;
      v4 = *v2;
      v5 = *v2;
    }
    while ( *v2 );
  }
  return v3;
}
