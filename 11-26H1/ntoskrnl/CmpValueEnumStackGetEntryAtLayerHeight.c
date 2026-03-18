/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x140980D20
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140492C70 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1404DA2A4 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140980C48 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 *     CmpValueEnumStackCleanup @ 0x140981258 (CmpValueEnumStackCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 80) + 32 * (a2 - 2LL);
  else
    return a1 + 32LL * a2 + 16;
}
