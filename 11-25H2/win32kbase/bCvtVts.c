/*
 * XREFs of bCvtVts @ 0x140092F90
 * Callers:
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x140091EDC (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x140092EA0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x140093110 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z @ 0x1401C6BE0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z.c)
 * Callees:
 *     bFToL @ 0x1400910A4 (bFToL.c)
 */

__int64 __fastcall bCvtVts(__int64 a1, int *a2, int *a3, __int64 a4)
{
  __int64 v4; // rbx
  int *v5; // rdi
  int *v6; // rsi
  signed __int64 v9; // rsi
  unsigned int v10; // r8d
  double v11; // xmm0_8
  double v12; // xmm1_8
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  double v19; // xmm5_8
  unsigned int v20; // r8d

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 && a4 )
    {
      v9 = (char *)a2 - (char *)a3;
      v10 = 6;
      do
      {
        *(_QWORD *)&v11 = COERCE_UNSIGNED_INT((float)*(int *)((char *)v5 + v9));
        *(_QWORD *)&v12 = COERCE_UNSIGNED_INT((float)*(int *)((char *)v5 + v9 + 4));
        *(float *)&v11 = *(float *)&v11 * *(float *)a1;
        *(float *)&v12 = *(float *)&v12 * *(float *)(a1 + 12);
        bFToL(v11, v5, v10);
        bFToL(v12, v5 + 1, v13);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
  }
  else if ( a4 )
  {
    v14 = 6;
    do
    {
      v15 = (float)*v6;
      v16 = (float)v6[1];
      bFToL(
        COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)(v16 * *(float *)(a1 + 8)) + (float)(v15 * *(float *)a1))),
        v5,
        v14);
      *(float *)&v19 = (float)(v17 * v16) + (float)(v18 * v15);
      bFToL(v19, v5 + 1, v20);
      v6 += 2;
      v5 += 2;
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
