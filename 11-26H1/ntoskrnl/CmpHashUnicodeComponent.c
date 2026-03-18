/*
 * XREFs of CmpHashUnicodeComponent @ 0x1408D1470
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1408607FC (CmpPartialPromoteSubkeys.c)
 *     CmpGetNameControlBlock @ 0x1408C4A20 (CmpGetNameControlBlock.c)
 *     CmpGetMappingHiveForString @ 0x1408D11E4 (CmpGetMappingHiveForString.c)
 *     CmpAddToLeaf @ 0x1408D171C (CmpAddToLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408D43A0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140981D5C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpCheckLeaf @ 0x140A0A744 (CmpCheckLeaf.c)
 *     CmpAddStringToMapping @ 0x140AFD41C (CmpAddStringToMapping.c)
 *     CmpWaitForHiveMount @ 0x140B55FE0 (CmpWaitForHiveMount.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140CEA70C (CmpCreateRegistryRoot.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  unsigned __int16 v2; // ax
  unsigned __int16 *v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  struct _LIST_ENTRY *Flink; // rbx

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 >= 2u )
  {
    v4 = (unsigned __int16 *)a1->m128i_i64[1];
    v5 = (unsigned __int64)v2 >> 1;
    do
    {
      LODWORD(v6) = *v4;
      if ( (unsigned int)v6 >= 0x61 )
      {
        if ( (unsigned int)v6 > 0x7A )
        {
          Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( Flink && (unsigned __int16)v6 >= 0xC0u )
            LOWORD(v6) = *((_WORD *)&Flink->Flink
                         + (v6 & 0xF)
                         + *((unsigned __int16 *)&Flink->Flink
                           + ((unsigned __int8)v6 >> 4)
                           + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v6 >> 8))))
                       + v6;
        }
        else
        {
          LOWORD(v6) = v6 - 32;
        }
      }
      ++v4;
      v1 = (unsigned __int16)v6 + 37 * v1;
      --v5;
    }
    while ( v5 );
  }
  return v1;
}
