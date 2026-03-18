/*
 * XREFs of MappingBGRF @ 0x1400EC8F0
 * Callers:
 *     ShrinkDIB_CY @ 0x1400ECFC0 (ShrinkDIB_CY.c)
 *     BltDIB_CY @ 0x1400ED830 (BltDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1400EDBF0 (ShrinkDIB_CY_SrkCX.c)
 *     FastExpAA_CY @ 0x1400EE960 (FastExpAA_CY.c)
 *     GrayShrinkDIB_CY @ 0x1400EFD50 (GrayShrinkDIB_CY.c)
 *     RepDIB_CY @ 0x1400F03A0 (RepDIB_CY.c)
 *     ExpandDIB_CY @ 0x1400F06A0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1401A9BB0 (ExpandDIB_CY_ExpCX.c)
 *     SkipDIB_CY @ 0x1401D78A0 (SkipDIB_CY.c)
 *     GrayExpandDIB_CY @ 0x1402FA150 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1402FA8D0 (GrayExpandDIB_CY_ExpCX.c)
 *     TileDIB_CY @ 0x1402FB4D0 (TileDIB_CY.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MappingBGRF(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v4; // ebx
  unsigned __int8 *v5; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int8 result; // al

  v4 = *a4;
  v5 = a4 + 1;
  do
  {
    v8 = (4 * (BGR555Idx[*a1] - (_WORD)v4)) & 0x7C00 | (unsigned __int64)((((__int64)(BGR555Idx[a1[2]]
                                                                                    - (unsigned __int64)v4) >> 5) | (BGR555Idx[a1[1]] - (_WORD)v4) & 0x1F00) >> 3);
    v9 = a3 + 2 * v8;
    *(_WORD *)a1 = *(_WORD *)(v8 + v9);
    result = *(_BYTE *)(v8 + v9 + 2);
    a1[2] = result;
    v4 = *v5++;
    if ( !v4 )
    {
      v5 -= 66;
      v4 = *v5;
    }
    a1 += 4;
  }
  while ( (unsigned __int64)a1 < a2 );
  return result;
}
