/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x14019FDC0
 * Callers:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  int v1; // r14d
  struct BLTINFO *v2; // r10
  unsigned int v3; // r11d
  __int16 *v4; // rcx
  int v5; // eax
  int v6; // r8d
  unsigned int v7; // edx
  __int64 i; // rdx
  __int16 v9; // ax
  int v10; // r8d
  int v11; // r13d
  unsigned int v12; // r15d
  int v13; // r12d
  char v14; // al
  unsigned int v15; // ebx
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // si
  int v18; // eax
  int v19; // r11d
  __int64 v20; // rdx
  _DWORD *v21; // r9
  int v22; // ecx
  _BYTE *v23; // r8
  __int64 v24; // rax
  BOOL v25; // ecx
  unsigned __int8 v26; // dl
  int v27; // r11d
  __int64 v28; // rax
  _WORD *v29; // rdx
  _BYTE *v30; // r8
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // r14
  _WORD *v34; // rcx
  unsigned __int8 ii; // r9
  unsigned __int64 v36; // rax
  __int64 v37; // r14
  char v38; // r10
  __int64 v39; // r15
  _BYTE *v40; // r14
  unsigned __int8 v41; // al
  unsigned __int64 v42; // rdx
  __int64 v43; // r15
  _BYTE *v44; // rdx
  unsigned int v45; // ecx
  int v46; // r9d
  _BYTE *v47; // r8
  _WORD *v48; // rdx
  char v49; // r10
  __int64 v50; // r15
  __int64 v51; // r12
  unsigned __int8 v52; // r11
  _WORD *k; // rcx
  __int64 v54; // r12
  unsigned __int8 v55; // r11
  _WORD *j; // rcx
  unsigned __int64 v57; // rax
  unsigned __int8 v58; // r9
  _WORD *n; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // r13
  unsigned __int8 v64; // r11
  _WORD *m; // rcx
  unsigned __int64 v66; // rax
  char v67; // [rsp+0h] [rbp-60h]
  int v68; // [rsp+4h] [rbp-5Ch]
  _WORD v69[2]; // [rsp+8h] [rbp-58h]
  int v70; // [rsp+Ch] [rbp-54h]
  int v71; // [rsp+10h] [rbp-50h]
  int v72; // [rsp+14h] [rbp-4Ch]
  unsigned int v73; // [rsp+18h] [rbp-48h]
  int v74; // [rsp+1Ch] [rbp-44h]
  __int64 v75; // [rsp+20h] [rbp-40h]
  __int64 v76; // [rsp+30h] [rbp-30h]
  struct BLTINFO *v77; // [rsp+38h] [rbp-28h]
  _DWORD v78[3]; // [rsp+40h] [rbp-20h]
  unsigned int v79; // [rsp+4Ch] [rbp-14h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v77 = a1;
  v72 = 1;
  v74 = v3 + v1;
  v4 = *(__int16 **)(*(_QWORD *)a1 + 16LL);
  v5 = *((_DWORD *)v4 + 1) << 16;
  v6 = *(_DWORD *)v4 << 16;
  v7 = v6 | *(_DWORD *)v4;
  v79 = v5 | *((_DWORD *)v4 + 1);
  v78[0] = v7;
  v78[1] = v5 | HIWORD(v7);
  v78[2] = v6 | HIWORD(v79);
  for ( i = 0LL; i < 2; ++i )
  {
    v9 = *v4;
    v4 += 2;
    v69[i] = v9;
  }
  v10 = *((_DWORD *)v2 + 12);
  v11 = *((_DWORD *)v2 + 11);
  v12 = v10 & 7;
  v13 = *((_DWORD *)v2 + 10);
  v14 = *((_BYTE *)v2 + 48) & 7;
  v73 = v12;
  v15 = v1 & 7;
  v70 = v11;
  v68 = v13;
  v16 = v14 - v15;
  v17 = v14 - v15 + 8;
  v18 = 8;
  if ( v12 >= v15 )
    v17 = v16;
  LOBYTE(v18) = 8 - v17;
  v71 = v18;
  if ( v74 >> 3 == v1 >> 3 )
  {
    v26 = 0;
    v67 = 0;
    v25 = (int)(v3 + v12) > 8;
  }
  else
  {
    v19 = *((_DWORD *)v2 + 8);
    v67 = 1;
    LODWORD(v20) = (v74 >> 3) - ((v1 + 7) >> 3);
    v21 = (_DWORD *)(*((_QWORD *)v2 + 2) + (int)(2 * ((v1 + 7) & 0xFFFFFFF8)));
    v22 = v11 - 16 * v20;
    v23 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)(int)(v10 + (-v15 & 7)) >> 3));
    LODWORD(v24) = v13 - v20;
    if ( v19 )
    {
      v20 = (int)v20;
      v24 = (int)v24;
      v76 = (int)v20;
      v75 = (int)v24;
      v37 = v22;
      if ( v17 )
      {
        v38 = v71;
        v39 = (int)v24;
        do
        {
          v40 = &v23[v20];
          --v19;
          v41 = *v23 << v17;
          if ( v23 != &v23[v20] )
          {
            do
            {
              v42 = v41 | ((unsigned __int64)(unsigned __int8)*++v23 >> v38);
              *v21 = v78[v42 >> 6];
              v21[1] = v78[(v42 >> 4) & 3];
              v21[2] = v78[(v42 >> 2) & 3];
              v21[3] = v78[v42 & 3];
              v21 += 4;
              v41 = *v23 << v17;
            }
            while ( v23 != v40 );
            v39 = v75;
            v20 = v76;
          }
          v21 = (_DWORD *)((char *)v21 + v22);
          v23 += v39;
        }
        while ( v19 );
        v2 = v77;
        v11 = v70;
      }
      else
      {
        v43 = (int)v20;
        do
        {
          --v19;
          v44 = &v23[v43];
          if ( v23 != &v23[v43] )
          {
            do
            {
              v45 = (unsigned __int8)*v23++;
              *v21 = v78[(unsigned __int64)v45 >> 6];
              v21[1] = v78[(v45 >> 4) & 3];
              v21[2] = v78[(v45 >> 2) & 3];
              v21[3] = v78[v45 & 3];
              v21 += 4;
            }
            while ( v23 != v44 );
            v24 = v75;
          }
          v21 = (_DWORD *)((char *)v21 + v37);
          v23 += v24;
        }
        while ( v19 );
      }
      v12 = v73;
    }
    v25 = v72;
    v26 = 1;
    v3 = 8 - v15;
  }
  if ( v15 | v26 ^ 1 )
  {
    v46 = *((_DWORD *)v2 + 8);
    v47 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v48 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v46 )
    {
      if ( v12 <= v15 )
      {
        v54 = (int)(2 * v3);
        do
        {
          --v46;
          v55 = *v47 << v12;
          for ( j = v48; j != (_WORD *)((char *)v48 + v54); ++j )
          {
            v57 = v55;
            v55 *= 2;
            *j = v69[v57 >> 7];
          }
          v48 = (_WORD *)((char *)v48 + v11);
          v47 += v68;
        }
        while ( v46 );
      }
      else
      {
        if ( v25 )
        {
          v49 = v71;
          v72 = v17;
          v50 = v13;
          v51 = (int)(2 * v3);
          do
          {
            --v46;
            v52 = ((unsigned __int8)(*v47 << v17) | (unsigned __int8)(v47[1] >> v49)) << v15;
            for ( k = v48; k != (_WORD *)((char *)v48 + v51); ++k )
            {
              v61 = v52;
              v52 *= 2;
              *k = v69[v61 >> 7];
            }
            v48 = (_WORD *)((char *)v48 + v11);
            v47 += v50;
          }
          while ( v46 );
          v2 = v77;
        }
        else
        {
          v62 = v70;
          v63 = (int)(2 * v3);
          do
          {
            --v46;
            v64 = *v47 << v17 << v15;
            for ( m = v48; m != (_WORD *)((char *)v48 + v63); ++m )
            {
              v66 = v64;
              v64 *= 2;
              *m = v69[v66 >> 7];
            }
            v48 = (_WORD *)((char *)v48 + v62);
            v47 += v13;
          }
          while ( v46 );
        }
        v11 = v70;
      }
      v13 = v68;
    }
    v26 = v67;
  }
  if ( (v74 & 7) != 0 )
  {
    if ( v26 )
    {
      v27 = *((_DWORD *)v2 + 8);
      v28 = *((int *)v2 + 13);
      v29 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v74 & 0xFFFFFFF8)));
      v30 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v28 - 1) >> 3));
      v31 = ((_BYTE)v28 - 1) & 7;
      v32 = ((_BYTE)v74 - 1) & 7;
      if ( v27 )
      {
        v33 = 2 * v32 + 2;
        if ( v31 >= v32 )
        {
          do
          {
            --v27;
            v58 = *v30 << v17;
            for ( n = v29; n != (_WORD *)((char *)v29 + v33); ++n )
            {
              v60 = v58;
              v58 *= 2;
              *n = v69[v60 >> 7];
            }
            v29 = (_WORD *)((char *)v29 + v11);
            v30 += v13;
          }
          while ( v27 );
        }
        else
        {
          do
          {
            --v27;
            v34 = v29;
            for ( ii = (*v30 >> v71) | (*(v30 - 1) << v17); v34 != (_WORD *)((char *)v29 + v33); ++v34 )
            {
              v36 = ii;
              ii *= 2;
              *v34 = v69[v36 >> 7];
            }
            v29 = (_WORD *)((char *)v29 + v11);
            v30 += v13;
          }
          while ( v27 );
        }
      }
    }
  }
}
