/*
 * XREFs of CmpHashUnicodeComponent @ 0x1408D7A30
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpGetNameControlBlock @ 0x1408CAFF0 (CmpGetNameControlBlock.c)
 *     CmpGetMappingHiveForString @ 0x1408D77A4 (CmpGetMappingHiveForString.c)
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408DA960 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpCheckLeaf @ 0x140A20814 (CmpCheckLeaf.c)
 *     CmpAddStringToMapping @ 0x140AFEF8C (CmpAddStringToMapping.c)
 *     CmpWaitForHiveMount @ 0x140B58CE0 (CmpWaitForHiveMount.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140CF0AAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
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
