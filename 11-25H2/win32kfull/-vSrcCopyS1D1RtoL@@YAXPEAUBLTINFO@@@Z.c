/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x140317920
 * Callers:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r13
  __int64 v2; // r10
  _BYTE *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r15
  unsigned int v6; // edx
  __int64 v7; // r12
  BOOL v8; // esi
  int v9; // r9d
  char v10; // r8
  char v11; // r14
  char v12; // r11
  int v13; // ecx
  int v14; // r9d
  __int64 v15; // r8
  int v16; // r10d
  _BYTE *v17; // r8
  unsigned __int8 *v18; // r9
  unsigned __int8 v19; // dl
  char v20; // di
  char v21; // dl
  unsigned __int8 v22; // al
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // cl
  int v25; // eax
  int v26; // r10d
  __int64 v27; // rcx
  int v28; // r14d
  _BYTE *v29; // rsi
  unsigned __int8 *v30; // rdi
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  size_t v34; // r15
  __int64 v35; // rbp
  __int64 v36; // r12
  __int64 v37; // rax
  char v38; // r15
  char v39; // r8
  unsigned __int8 *v40; // r9
  char v41; // al
  unsigned __int8 v42; // r8
  unsigned int v43; // edx
  char v44; // bp
  int v45; // r9d
  int v46; // eax
  __int64 v47; // r8
  unsigned int v48; // eax
  unsigned __int8 *v49; // r8
  unsigned __int8 v50; // dl
  unsigned __int8 v51; // al
  unsigned __int8 v52; // dl
  char v53; // al
  char v54; // [rsp+20h] [rbp-78h]
  int v55; // [rsp+24h] [rbp-74h]
  int v56; // [rsp+28h] [rbp-70h]
  int v57; // [rsp+2Ch] [rbp-6Ch]
  int v58; // [rsp+30h] [rbp-68h]
  int v59; // [rsp+38h] [rbp-60h]
  __int64 v60; // [rsp+38h] [rbp-60h]
  char v62; // [rsp+A8h] [rbp+10h]
  int v63; // [rsp+B0h] [rbp+18h]
  int v64; // [rsp+B8h] [rbp+20h]

  v1 = a1;
  v2 = *((int *)a1 + 14);
  v59 = *((_DWORD *)a1 + 12);
  v3 = 0LL;
  v4 = v59 & 7;
  v5 = *((int *)a1 + 11);
  v6 = *((_DWORD *)a1 + 14) & 7;
  v7 = *((int *)a1 + 10);
  v58 = *((_DWORD *)a1 + 11);
  v56 = *((_DWORD *)a1 + 10);
  v8 = 1;
  v9 = *((_DWORD *)a1 + 7);
  v10 = (v59 & 7) - v6 + 8;
  if ( v4 >= v6 )
    v10 = (v59 & 7) - v6;
  v11 = 8 - v10;
  v62 = v10;
  v54 = 8 - v10;
  v55 = (int)v2 >> 3;
  v57 = v2 - v9;
  v63 = ((int)v2 - v9) >> 3;
  v12 = -1 << (7 - v6);
  v13 = v63;
  if ( v63 == (int)v2 >> 3 )
  {
    v13 = ((int)v2 - v9) >> 3;
    v12 &= 255 >> ((v57 + 1) & 7);
    if ( v4 < v6 )
      v8 = (int)(v4 - v9) < -1;
  }
  v14 = ((_BYTE)v6 + 1) & 7;
  v64 = v14;
  if ( v14 | (v13 == v55) )
  {
    v15 = v2;
    v16 = *((_DWORD *)v1 + 8);
    v17 = (_BYTE *)(*((_QWORD *)v1 + 2) + (v15 >> 3));
    v18 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((__int64)v59 >> 3));
    if ( v16 )
    {
      if ( v4 <= v6 )
      {
        if ( v4 >= v6 )
        {
          do
          {
            v24 = *v18;
            v18 += v7;
            *v17 = ~v12 & *v17 | v12 & v24;
            v17 += v5;
            --v16;
          }
          while ( v16 );
        }
        else
        {
          v20 = ~v12;
          if ( v8 )
          {
            do
            {
              v21 = *(v18 - 1);
              v22 = *v18;
              v18 += v7;
              *v17 = v20 & *v17 | v12 & ((v22 >> v11) | (v21 << v62));
              v17 += v5;
              --v16;
            }
            while ( v16 );
          }
          else
          {
            do
            {
              v23 = *v18;
              v18 += v7;
              *v17 = v20 & *v17 | v12 & (v23 >> v11);
              v17 += v5;
              --v16;
            }
            while ( v16 );
          }
          v1 = a1;
        }
      }
      else
      {
        do
        {
          v19 = *v18;
          v18 += v7;
          *v17 = ~v12 & *v17 | v12 & (v19 << v62);
          v17 += v5;
          --v16;
        }
        while ( v16 );
      }
    }
    v10 = v62;
    v14 = v64;
  }
  v25 = v55;
  v26 = v63;
  if ( v63 != v55 )
  {
    v27 = *((_QWORD *)v1 + 2);
    v28 = *((_DWORD *)v1 + 8);
    v29 = (_BYTE *)(v27 + ((__int64)(*((_DWORD *)v1 + 14) - 7) >> 3));
    v3 = (_BYTE *)(v27 + ((__int64)v57 >> 3));
    v30 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + ((__int64)(*((_DWORD *)v1 + 12) - v14) >> 3));
    v31 = ((*((_DWORD *)v1 + 14) - 7) >> 3) - (v57 >> 3);
    v32 = v5 + v31;
    v33 = v7 + v31;
    if ( v28 )
    {
      if ( v10 )
      {
        v36 = v31;
        v37 = v33;
        v38 = v10;
        do
        {
          v39 = *v30 >> v54;
          v40 = &v30[-v36];
          --v28;
          if ( v30 != &v30[-v36] )
          {
            do
            {
              v41 = v39 | (*--v30 << v38);
              v42 = *v30;
              *v29-- = v41;
              v39 = v42 >> v54;
            }
            while ( v30 != v40 );
            v37 = v33;
          }
          v29 += v32;
          v30 += v37;
        }
        while ( v28 );
        LODWORD(v5) = v58;
      }
      else
      {
        v60 = v5;
        v34 = v31;
        v35 = v31 - 1;
        do
        {
          memmove(&v29[-v35], &v30[-v35], v34);
          v29 += v60;
          v30 += (int)v7;
          --v28;
        }
        while ( v28 );
        v1 = a1;
        LODWORD(v5) = v60;
      }
      v26 = v63;
      LODWORD(v7) = v56;
    }
    v11 = v54;
    v25 = v55;
  }
  v43 = ((_BYTE)v57 + 1) & 7;
  v44 = -1 << (8 - v43);
  if ( (((_BYTE)v57 + 1) & 7) != 0 && v26 != v25 )
  {
    v45 = *((_DWORD *)v1 + 8);
    v46 = *((_DWORD *)v1 + 13) + 1;
    v47 = v46;
    v48 = v46 & 7;
    v49 = (unsigned __int8 *)(*((_QWORD *)v1 + 1) + (v47 >> 3));
    if ( v45 )
    {
      if ( v48 <= v43 )
      {
        if ( v48 >= v43 )
        {
          do
          {
            v53 = ~v44 & *v49;
            v49 += (int)v7;
            *v3 = v53 | v44 & *v3;
            v3 += (int)v5;
            --v45;
          }
          while ( v45 );
        }
        else
        {
          do
          {
            v52 = *v49;
            v49 += (int)v7;
            *v3 = v44 & *v3 | ~v44 & (v52 >> v11);
            v3 += (int)v5;
            --v45;
          }
          while ( v45 );
        }
      }
      else
      {
        do
        {
          v50 = v49[1];
          v51 = *v49;
          v49 += (int)v7;
          *v3 = v44 & *v3 | ~v44 & ((v51 << v62) | (v50 >> v11));
          v3 += (int)v5;
          --v45;
        }
        while ( v45 );
      }
    }
  }
}
