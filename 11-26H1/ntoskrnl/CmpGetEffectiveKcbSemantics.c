/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1408BC430
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1409832A4 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B0F764 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKcbSemantics(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ecx

  if ( a2 && *(__int16 *)(a1 + 66) == *(unsigned __int16 *)(a2 + 4) )
  {
    v3 = *(unsigned __int8 *)(a1 + 65);
    result = 2LL;
    if ( (_BYTE)v3 )
      return v3;
  }
  else if ( *(_WORD *)(a1 + 66) )
  {
    return *(unsigned __int8 *)(a1 + 65);
  }
  else
  {
    return 0LL;
  }
  return result;
}
