/*
 * XREFs of CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140A46EF0
 * Callers:
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A46C54 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackCleanup @ 0x140A46D44 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140A46DD8 (CmpSortedValueEnumStackAdvanceInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSortedValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 16;
  else
    return *(_QWORD *)(a1 + 80) + 32 * (a2 - 2LL);
}
