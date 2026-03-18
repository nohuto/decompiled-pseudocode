/*
 * XREFs of ?vConvertAndSaveBGRATo1@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1401F8670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vConvertAndSaveBGRATo1(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r15d
  _BYTE *v9; // r12
  int v10; // r9d
  unsigned __int64 v11; // r15
  char NearestIndexFromColorref; // al
  char v13; // si
  char v14; // al
  char v15; // r14
  char v16; // al
  char v17; // si
  char v18; // al
  char v19; // r14
  char v20; // al
  char v21; // si
  char v22; // al
  char v23; // r14
  char v24; // al
  char v25; // al
  int v26; // r14d
  int v27; // esi
  unsigned __int8 v28; // r12
  char v29; // al
  int v30; // ecx
  char v31; // r14
  char v32; // r12
  char v33; // si
  _BYTE *v34; // [rsp+60h] [rbp+40h]
  int v35; // [rsp+70h] [rbp+50h]
  unsigned int v36; // [rsp+70h] [rbp+50h]
  unsigned int v37; // [rsp+70h] [rbp+50h]
  unsigned int v38; // [rsp+78h] [rbp+58h]
  unsigned int v39; // [rsp+78h] [rbp+58h]
  unsigned int v40; // [rsp+78h] [rbp+58h]
  unsigned int v41; // [rsp+78h] [rbp+58h]
  unsigned int v42; // [rsp+78h] [rbp+58h]
  unsigned int v43; // [rsp+78h] [rbp+58h]
  unsigned int v44; // [rsp+78h] [rbp+58h]
  unsigned int v45; // [rsp+78h] [rbp+58h]

  v7 = a3;
  v9 = (_BYTE *)(a1 + ((__int64)a4 >> 3));
  v34 = v9;
  v10 = a4 & 7;
  if ( v10 )
  {
    v25 = *v9;
    v26 = 7 - v10;
    v27 = 7 - v10 + 1;
    if ( v27 >= a3 )
      v27 = a3;
    v7 = a3 - v27;
    if ( v27 )
    {
      v28 = *v9;
      do
      {
        v36 = *a2;
        LOBYTE(v36) = BYTE2(*a2);
        BYTE2(v36) = *a2;
        HIBYTE(v36) = 2;
        ++a2;
        v29 = (unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v36, *(_DWORD *)(a6 + 28) != 0) << v26;
        v30 = v28 & ~(1 << v26--);
        v28 = v30 | v29;
        --v27;
      }
      while ( v27 );
      v25 = v30 | v29;
      v9 = v34;
    }
    *v9++ = v25;
    v34 = v9;
  }
  if ( v7 >= 8 )
  {
    v35 = v7 - 8 * ((unsigned int)v7 >> 3);
    v11 = (unsigned __int64)(unsigned int)v7 >> 3;
    do
    {
      v38 = *a2;
      LOBYTE(v38) = BYTE2(*a2);
      BYTE2(v38) = *a2;
      HIBYTE(v38) = 2;
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(a6, a7, v38, *(_DWORD *)(a6 + 28) != 0);
      v39 = a2[1];
      BYTE2(v39) = v39;
      LOBYTE(v39) = BYTE2(a2[1]);
      v13 = NearestIndexFromColorref << 7;
      HIBYTE(v39) = 2;
      v14 = ulGetNearestIndexFromColorref(a6, a7, v39, *(_DWORD *)(a6 + 28) != 0);
      v40 = a2[2];
      BYTE2(v40) = v40;
      LOBYTE(v40) = BYTE2(a2[2]);
      v15 = v13 | (v14 << 6);
      HIBYTE(v40) = 2;
      v16 = ulGetNearestIndexFromColorref(a6, a7, v40, *(_DWORD *)(a6 + 28) != 0);
      v41 = a2[3];
      BYTE2(v41) = v41;
      LOBYTE(v41) = BYTE2(a2[3]);
      v17 = v15 | (32 * v16);
      HIBYTE(v41) = 2;
      v18 = ulGetNearestIndexFromColorref(a6, a7, v41, *(_DWORD *)(a6 + 28) != 0);
      v42 = a2[4];
      BYTE2(v42) = v42;
      v19 = v17 | (16 * v18);
      LOBYTE(v42) = BYTE2(a2[4]);
      HIBYTE(v42) = 2;
      v20 = ulGetNearestIndexFromColorref(a6, a7, v42, *(_DWORD *)(a6 + 28) != 0);
      v43 = a2[5];
      BYTE2(v43) = v43;
      LOBYTE(v43) = BYTE2(a2[5]);
      v21 = v19 | (8 * v20);
      HIBYTE(v43) = 2;
      v22 = ulGetNearestIndexFromColorref(a6, a7, v43, *(_DWORD *)(a6 + 28) != 0);
      v44 = a2[6];
      BYTE2(v44) = v44;
      LOBYTE(v44) = BYTE2(a2[6]);
      v23 = v21 | (4 * v22);
      HIBYTE(v44) = 2;
      v24 = ulGetNearestIndexFromColorref(a6, a7, v44, *(_DWORD *)(a6 + 28) != 0);
      v45 = a2[7];
      BYTE2(v45) = v45;
      LOBYTE(v45) = BYTE2(a2[7]);
      HIBYTE(v45) = 2;
      a2 += 8;
      *v9++ = v23 | (2 * v24) | ulGetNearestIndexFromColorref(a6, a7, v45, *(_DWORD *)(a6 + 28) != 0);
      --v11;
    }
    while ( v11 );
    v7 = v35;
    v34 = v9;
  }
  if ( v7 )
  {
    v31 = *v9;
    v32 = 7;
    do
    {
      v37 = *a2;
      LOBYTE(v37) = BYTE2(*a2);
      BYTE2(v37) = *a2;
      HIBYTE(v37) = 2;
      v33 = v32;
      ++a2;
      --v32;
      v31 = v31 & ~(1 << v33) | ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v37, *(_DWORD *)(a6 + 28) != 0) << v33);
      --v7;
    }
    while ( v7 );
    *v34 = v31;
  }
}
