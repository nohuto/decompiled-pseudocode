/*
 * XREFs of bCvtVts @ 0x14013C958
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x14013C880 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z @ 0x1401F1680 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU2@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1401F17C0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K_N@Z.c)
 * Callees:
 *     bFToL @ 0x140038EBC (bFToL.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall bCvtVts(__int64 a1, int *a2, int *a3, __int64 a4, char a5)
{
  __int64 v5; // rdi
  int *v6; // rbx
  int *v7; // rsi
  signed __int64 v9; // rsi
  unsigned int v10; // r8d
  double v11; // xmm0_8
  double v12; // xmm2_8
  __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  float v18; // xmm1_4
  double v19; // xmm0_8
  double v20; // xmm3_8
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  int v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+24h] [rbp-24h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 && a4 )
    {
      v9 = (char *)a2 - (char *)a3;
      v10 = 6;
      while ( 1 )
      {
        *(_QWORD *)&v11 = COERCE_UNSIGNED_INT((float)*(int *)((char *)v6 + v9));
        *(_QWORD *)&v12 = COERCE_UNSIGNED_INT((float)*(int *)((char *)v6 + v9 + 4));
        *(float *)&v11 = *(float *)&v11 * *(float *)a1;
        *(float *)&v12 = *(float *)&v12 * *(float *)(a1 + 12);
        if ( a5 )
        {
          if ( !(unsigned int)bFToL(v11, v6, v10) || !(unsigned int)bFToL(v12, v6 + 1, v14) )
          {
            v24 = 1LL;
            goto LABEL_9;
          }
        }
        else
        {
          bFToL(v11, v6, v10);
          bFToL(v12, v6 + 1, v16);
        }
        v6 += 2;
        if ( !--v5 )
          return 1LL;
      }
    }
    return 1LL;
  }
  if ( !a4 )
    return 1LL;
  v17 = 6;
  while ( 1 )
  {
    *(_QWORD *)&v20 = COERCE_UNSIGNED_INT((float)v7[1]);
    HIDWORD(v19) = 0;
    v18 = (float)*v7;
    *(float *)&v19 = (float)(*(float *)&v20 * *(float *)(a1 + 8)) + (float)(v18 * *(float *)a1);
    *(float *)&v20 = (float)(*(float *)&v20 * *(float *)(a1 + 12)) + (float)(v18 * *(float *)(a1 + 4));
    if ( a5 )
      break;
    bFToL(v19, v6, v17);
    bFToL(v20, v6 + 1, v22);
LABEL_20:
    v7 += 2;
    v6 += 2;
    if ( !--v5 )
      return 1LL;
  }
  if ( (unsigned int)bFToL(v19, v6, v17) && (unsigned int)bFToL(v20, v6 + 1, v21) )
    goto LABEL_20;
  v24 = 2LL;
LABEL_9:
  v23 = 59177360;
  RtlLogUnexpectedCodepath(&v23, v13);
  return 0LL;
}
