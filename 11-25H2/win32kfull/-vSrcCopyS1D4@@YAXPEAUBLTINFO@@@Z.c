/*
 * XREFs of ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1401BA350
 * Callers:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rbx
  int v2; // r10d
  _QWORD *v3; // r11
  int v4; // r12d
  _QWORD *v5; // rdi
  char *v6; // rdx
  int v7; // r13d
  char v8; // r8
  char v9; // r9
  char v10; // al
  int v11; // r8d
  unsigned int v12; // esi
  char v13; // r14
  char v14; // r9
  int v15; // edx
  __int64 v16; // rdx
  int v17; // eax
  int *v18; // rsi
  int v19; // r10d
  _BYTE *v20; // r9
  int v21; // ecx
  _BYTE *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r15
  _BYTE *v26; // rdx
  unsigned int v27; // ecx
  unsigned __int8 v28; // dl
  __int64 v29; // r13
  _BYTE *v30; // r15
  unsigned __int8 v31; // al
  unsigned __int64 v32; // rdx
  int v33; // r10d
  int *v34; // r8
  int v35; // r11d
  _BYTE *v36; // r9
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  int v40; // ecx
  unsigned __int8 v41; // al
  int v42; // ecx
  int v43; // r10d
  int *v44; // r8
  char *v45; // r9
  int v46; // r11d
  char v47; // al
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdx
  int v50; // ecx
  unsigned __int8 v51; // al
  int v52; // ecx
  unsigned __int64 v53; // rdx
  int v54; // ecx
  int v55; // [rsp+4h] [rbp-54h]
  char v56; // [rsp+8h] [rbp-50h]
  int v57; // [rsp+10h] [rbp-48h]
  unsigned int v58; // [rsp+14h] [rbp-44h]
  unsigned int v59; // [rsp+18h] [rbp-40h]
  int v60; // [rsp+1Ch] [rbp-3Ch]
  int v61; // [rsp+20h] [rbp-38h]
  __int64 v62; // [rsp+38h] [rbp-20h]
  char v64; // [rsp+A8h] [rbp+50h]
  char v65; // [rsp+B0h] [rbp+58h]
  char v66; // [rsp+B1h] [rbp+59h]
  char v67; // [rsp+B2h] [rbp+5Ah]
  char v68; // [rsp+B3h] [rbp+5Bh]
  __int64 v69; // [rsp+B8h] [rbp+60h]

  v1 = a1;
  v61 = *((_DWORD *)a1 + 13);
  v2 = *((_DWORD *)a1 + 12);
  v3 = (_QWORD *)((char *)a1 + 16);
  v4 = *((_DWORD *)a1 + 11);
  v5 = (_QWORD *)((char *)a1 + 8);
  v6 = *(char **)(*(_QWORD *)a1 + 16LL);
  v7 = *((_DWORD *)a1 + 10);
  v57 = v7;
  v8 = *v6;
  v9 = v6[4];
  LOBYTE(v6) = 16 * *v6;
  v65 = v8 | (unsigned __int8)v6;
  v10 = v8 | (16 * v9);
  v66 = v9 | (unsigned __int8)v6;
  v11 = *((_DWORD *)a1 + 14);
  v67 = v10;
  v68 = v9 | (16 * v9);
  v59 = v2 & 7;
  v12 = v11 & 7;
  v58 = v12;
  v13 = (v2 & 7) - v12 + 8;
  if ( v59 >= v12 )
    v13 = (v2 & 7) - v12;
  v56 = 8 - v13;
  v60 = *((_DWORD *)a1 + 7);
  v14 = v11 + v60;
  v15 = (v11 + v60) >> 3;
  v55 = v11 + v60;
  if ( v15 == v11 >> 3 )
  {
    v28 = 0;
    v18 = (int *)((char *)a1 + 32);
    v64 = 0;
  }
  else
  {
    v64 = 1;
    LODWORD(v16) = v15 - ((v11 + 7) >> 3);
    v17 = v2 + (-v12 & 7);
    v18 = (int *)((char *)a1 + 32);
    v19 = *((_DWORD *)a1 + 8);
    v20 = (_BYTE *)(*v3 + (((__int64)(v11 + 7) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v21 = v4 - 4 * v16;
    v22 = (_BYTE *)(*v5 + ((__int64)v17 >> 3));
    LODWORD(v23) = v7 - v16;
    if ( v13 )
    {
      if ( v19 )
      {
        v16 = (int)v16;
        v62 = (int)v16;
        v29 = (int)v23;
        do
        {
          v30 = &v22[v16];
          --v19;
          v31 = *v22 << v13;
          if ( v22 != &v22[v16] )
          {
            do
            {
              v32 = v31 | ((unsigned __int64)(unsigned __int8)*++v22 >> v56);
              *v20 = *(&v65 + (v32 >> 6));
              v20[1] = *(&v65 + ((v32 >> 4) & 3));
              v20[2] = *(&v65 + ((v32 >> 2) & 3));
              v20[3] = *(&v65 + (v32 & 3));
              v20 += 4;
              v31 = *v22 << v13;
            }
            while ( v22 != v30 );
            v16 = v62;
          }
          v20 += v21;
          v22 += v29;
        }
        while ( v19 );
        v1 = a1;
        v7 = v57;
      }
    }
    else if ( v19 )
    {
      v23 = (int)v23;
      v69 = (int)v23;
      v24 = (int)v16;
      v25 = v21;
      do
      {
        --v19;
        v26 = &v22[v24];
        if ( v22 != &v22[v24] )
        {
          do
          {
            v27 = (unsigned __int8)*v22++;
            *v20 = *(&v65 + ((unsigned __int64)v27 >> 6));
            v20[1] = *(&v65 + ((v27 >> 4) & 3));
            v20[2] = *(&v65 + ((v27 >> 2) & 3));
            v20[3] = *(&v65 + (v27 & 3));
            v20 += 4;
          }
          while ( v22 != v26 );
          v23 = v69;
        }
        v20 += v25;
        v22 += v23;
      }
      while ( v19 );
      v1 = a1;
    }
    v28 = 1;
    v14 = v55;
  }
  if ( v58 | v28 ^ 1 )
  {
    v43 = dword_140363B50[v58];
    if ( !v28 )
      v43 &= dword_140363B30[v14 & 7];
    v44 = (int *)(*v3 + (((__int64)*((int *)v1 + 14) >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
    v45 = (char *)(*v5 + ((__int64)*((int *)v1 + 12) >> 3));
    v46 = *v18;
    if ( *v18 )
    {
      if ( v59 < v58 )
      {
        do
        {
          v53 = (unsigned __int64)(unsigned __int8)*v45 >> v56;
          v45 += v7;
          v54 = ~v43 & *v44;
          LOBYTE(v69) = *(&v65 + (v53 >> 6));
          BYTE1(v69) = *(&v65 + ((v53 >> 4) & 3));
          BYTE2(v69) = *(&v65 + ((v53 >> 2) & 3));
          BYTE3(v69) = *(&v65 + (v53 & 3));
          LODWORD(v69) = v43 & v69;
          *v44 = v69 | v54;
          v44 = (int *)((char *)v44 + v4);
          --v46;
        }
        while ( v46 );
      }
      else if ( (int)(v59 + v60) <= 8 )
      {
        do
        {
          v51 = *v45 << v13;
          v45 += v7;
          LOBYTE(v69) = *(&v65 + ((unsigned __int64)v51 >> 6));
          BYTE1(v69) = *(&v65 + (((unsigned __int64)v51 >> 4) & 3));
          BYTE2(v69) = *(&v65 + (((unsigned __int64)v51 >> 2) & 3));
          v52 = *v44;
          BYTE3(v69) = *(&v65 + (v51 & 3));
          LODWORD(v69) = v43 & v69;
          *v44 = v69 | ~v43 & v52;
          v44 = (int *)((char *)v44 + v4);
          --v46;
        }
        while ( v46 );
      }
      else
      {
        do
        {
          v47 = *v45;
          v48 = (unsigned __int8)v45[1];
          v45 += v7;
          v49 = (unsigned __int8)(v47 << v13) | (v48 >> v56);
          v50 = ~v43 & *v44;
          LOBYTE(v69) = *(&v65 + (v49 >> 6));
          BYTE1(v69) = *(&v65 + ((v49 >> 4) & 3));
          BYTE2(v69) = *(&v65 + ((v49 >> 2) & 3));
          BYTE3(v69) = *(&v65 + (v49 & 3));
          LODWORD(v69) = v43 & v69;
          *v44 = v69 | v50;
          v44 = (int *)((char *)v44 + v4);
          --v46;
        }
        while ( v46 );
        v1 = a1;
      }
      v28 = v64;
    }
  }
  if ( (v55 & 7) != 0 )
  {
    if ( v28 )
    {
      v33 = *((_DWORD *)v1 + 8);
      v34 = (int *)(*((_QWORD *)v1 + 2) + (((__int64)v55 >> 1) & 0xFFFFFFFFFFFFFFFCuLL));
      v35 = dword_140363B30[v55 & 7];
      v36 = (_BYTE *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 13) - 1) >> 3));
      if ( v33 )
      {
        if ( (((_BYTE)v61 - 1) & 7u) >= (((_BYTE)v55 - 1) & 7u) )
        {
          do
          {
            v41 = *v36 << v13;
            v36 += v7;
            LOBYTE(v69) = *(&v65 + ((unsigned __int64)v41 >> 6));
            BYTE1(v69) = *(&v65 + (((unsigned __int64)v41 >> 4) & 3));
            BYTE2(v69) = *(&v65 + (((unsigned __int64)v41 >> 2) & 3));
            v42 = *v34;
            BYTE3(v69) = *(&v65 + (v41 & 3));
            LODWORD(v69) = v35 & v69;
            *v34 = v69 | ~v35 & v42;
            v34 = (int *)((char *)v34 + v4);
            --v33;
          }
          while ( v33 );
        }
        else
        {
          do
          {
            v37 = (unsigned __int8)(*(v36 - 1) << v13);
            v38 = (unsigned __int8)*v36;
            v36 += v7;
            v39 = (v38 >> v56) | v37;
            v40 = ~v35 & *v34;
            LOBYTE(v69) = *(&v65 + (v39 >> 6));
            BYTE1(v69) = *(&v65 + ((v39 >> 4) & 3));
            BYTE2(v69) = *(&v65 + ((v39 >> 2) & 3));
            BYTE3(v69) = *(&v65 + (v39 & 3));
            LODWORD(v69) = v35 & v69;
            *v34 = v69 | v40;
            v34 = (int *)((char *)v34 + v4);
            --v33;
          }
          while ( v33 );
        }
      }
    }
  }
}
