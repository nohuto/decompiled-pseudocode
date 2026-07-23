/*
 * XREFs of Xp10ReadAndDecodeHuffmanTables @ 0x140813A6C
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x140812000 (Xp10ExecuteHuffmanDecode.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     Xp10BuildHuffmanDecodeTable @ 0x140811208 (Xp10BuildHuffmanDecodeTable.c)
 *     Xp10ScatteredReadBytes @ 0x1408148E8 (Xp10ScatteredReadBytes.c)
 *     Xp10SortHuffmanSymbols @ 0x14081496C (Xp10SortHuffmanSymbols.c)
 */

__int64 __fastcall Xp10ReadAndDecodeHuffmanTables(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8)
{
  __int64 v8; // rbx
  unsigned int v10; // r12d
  unsigned int v11; // esi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  __int64 v16; // rsi
  int v17; // edi
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // edx
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // edx
  int v34; // eax
  __int64 v35; // rsi
  unsigned int v36; // r13d
  __int64 v37; // rdi
  int v38; // r14d
  unsigned __int64 v39; // rdx
  __int64 v40; // r12
  unsigned int v41; // esi
  int v42; // eax
  int v43; // ecx
  unsigned int v44; // eax
  _QWORD *v45; // r14
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int16 v48; // r8
  unsigned int v49; // esi
  bool v50; // cc
  unsigned int v51; // esi
  int v52; // eax
  int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // edx
  _QWORD *v56; // r12
  unsigned int v57; // eax
  int v58; // eax
  int v59; // ecx
  unsigned int v60; // edx
  int v61; // ecx
  unsigned __int8 v62; // dl
  int v63; // eax
  unsigned int v64; // esi
  unsigned int v65; // eax
  int v66; // eax
  int v67; // ecx
  int v68; // edx
  unsigned __int64 v69; // rcx
  unsigned int v70; // esi
  int i; // edx
  unsigned int v72; // r14d
  unsigned int v73; // eax
  int v74; // eax
  int v75; // ecx
  __int64 v76; // rax
  unsigned int v78; // edx
  unsigned int v79; // ebx
  int v80; // eax
  __int64 v81; // rax
  int v82; // [rsp+38h] [rbp-28h]
  __int64 v83; // [rsp+50h] [rbp-10h]
  __int64 v84; // [rsp+58h] [rbp-8h]
  unsigned int v86; // [rsp+B0h] [rbp+50h]
  unsigned int v87; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = a2;
  v11 = 2;
  v87 = 0;
  if ( *(_QWORD *)a5 )
  {
    if ( *(_QWORD *)a5 < 2uLL )
      v11 = *(_QWORD *)a5;
    v12 = *(_DWORD *)(a5 + 16);
    if ( v12 < v11 )
    {
      v13 = Xp10ScatteredReadBytes(a5 + 24, &v87, 4LL);
      v14 = *(_DWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v14;
      v12 = v14 + 8 * v13;
      if ( v12 < v11 )
        v11 = v12;
    }
    *(_DWORD *)(v8 + 16) = v12 - v11;
    v15 = *(_DWORD *)(v8 + 8) & ((1LL << v11) - 1);
    *(_QWORD *)(v8 + 8) >>= v11;
    *(_QWORD *)v8 -= v11;
    if ( v11 >= 2 )
    {
      v16 = a1 + 24;
      memset_0((void *)(a1 + 24), 0, 0x2C0uLL);
      if ( v15 )
      {
        v17 = v15 - 1;
        if ( !v17 )
          return 3221225474LL;
        if ( v17 == 1 )
        {
          v18 = 4;
          v19 = 0;
          v20 = 4;
          v21 = 4;
          while ( v19 < 0x21 )
          {
            v22 = *(_QWORD *)v8;
            v23 = 1;
            v87 = 0;
            if ( !v22 )
              return 3221226050LL;
            v24 = *(_DWORD *)(v8 + 16);
            if ( !v24 )
            {
              v25 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
              v26 = *(_DWORD *)(v8 + 16);
              *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v26;
              v24 = v26 + 8 * v25;
              v23 = v24 != 0;
            }
            v27 = v24 - v23;
            *(_DWORD *)(v8 + 16) = v27;
            v28 = *(_DWORD *)(v8 + 8) & ((1LL << v23) - 1);
            *(_QWORD *)(v8 + 8) >>= v23;
            *(_QWORD *)v8 -= v23;
            v29 = *(_QWORD *)v8;
            if ( !v23 )
              return 3221226050LL;
            if ( v28 )
            {
              if ( v28 != 1 )
                return 3221226050LL;
              v87 = 0;
              v30 = 3;
              if ( !v29 )
                return 3221226050LL;
              if ( v29 < 3 )
                v30 = v29;
              if ( v27 < v30 )
              {
                v31 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
                v32 = *(_DWORD *)(v8 + 16);
                *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v32;
                v27 = v32 + 8 * v31;
                if ( v27 < v30 )
                  v30 = v27;
              }
              *(_DWORD *)(v8 + 16) = v27 - v30;
              v33 = *(_DWORD *)(v8 + 8) & ((1LL << v30) - 1);
              *(_QWORD *)(v8 + 8) >>= v30;
              *(_QWORD *)v8 -= v30;
              if ( v30 < 3 )
                return 3221226050LL;
              if ( v33 >= v21 && ++v33 > 8 )
                return 3221226050LL;
              v21 = v33;
              *(_BYTE *)(v19 + a1 + 24) = v33;
              if ( v33 && v33 < v18 )
                v18 = v33;
              if ( v33 > v20 )
                v20 = v33;
            }
            else
            {
              *(_BYTE *)(v19 + a1 + 24) = v21;
            }
            ++v19;
          }
          v34 = Xp10SortHuffmanSymbols((int)a1 + 24, (int)a1 + 728, 33, v18, v20);
          if ( v34 )
          {
            v83 = Xp10BuildHuffmanDecodeTable(
                    a1 + 24,
                    a1 + 2136,
                    (_WORD *)(a1 + 728),
                    v34,
                    8u,
                    4,
                    a1 + 37464,
                    v82,
                    a1 + 2136);
            v35 = v83;
            memset_0((void *)(a1 + 24), 0, 0x2C0uLL);
            v10 = a2;
            v36 = 8;
            v86 = 8;
            LODWORD(v37) = 0;
            a7 = 8;
            v38 = 8;
            while ( 1 )
            {
              while ( 1 )
              {
LABEL_38:
                if ( (unsigned int)v37 >= v10 )
                {
LABEL_122:
                  v16 = a1 + 24;
                  goto LABEL_128;
                }
                v39 = *(_QWORD *)v8;
                v40 = v35;
                v84 = v35;
                v41 = 8;
                v87 = 0;
                if ( v39 )
                {
                  if ( v39 < 8 )
                    v41 = v39;
                  if ( *(_DWORD *)(v8 + 16) < v41 )
                  {
                    v42 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
                    v43 = *(_DWORD *)(v8 + 16);
                    *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v43;
                    v44 = v43 + 8 * v42;
                    *(_DWORD *)(v8 + 16) = v44;
                    if ( v44 < v41 )
                      LOBYTE(v41) = v44;
                  }
                  v39 = *(_QWORD *)v8;
                  v45 = (_QWORD *)(v8 + 8);
                  v46 = *(_DWORD *)(v8 + 8) & ((unsigned int)(1LL << v41) - 1);
                }
                else
                {
                  v46 = 0LL;
                  v45 = (_QWORD *)(v8 + 8);
                }
                v47 = v39;
                LODWORD(a5) = 0;
                v48 = *(_WORD *)(v83 + 2 * v46);
                LOWORD(v87) = v48;
                v49 = v48 & 0xF;
                if ( v39 && (v87 & 0xF) != 0 )
                {
                  v50 = (v87 & 0xF) <= v39;
LABEL_61:
                  v56 = v45;
                  if ( !v50 )
                  {
                    v49 = *(_DWORD *)v8;
                    v56 = (_QWORD *)(v8 + 8);
                  }
                  v57 = *(_DWORD *)(v8 + 16);
                  if ( v57 < v49 )
                  {
                    v58 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
                    v59 = *(_DWORD *)(v8 + 16);
                    v48 = v87;
                    *v45 |= (unsigned __int64)(unsigned int)a5 << v59;
                    v57 = v59 + 8 * v58;
                    if ( v57 < v49 )
                    {
                      v45 = v56;
                      v49 = v57;
                    }
                  }
                  v40 = v84;
                  *v45 >>= v49;
                  *(_QWORD *)v8 -= v49;
                  v47 = *(_QWORD *)v8;
                  *(_DWORD *)(v8 + 16) = v57 - v49;
                }
                while ( (v48 & 0x8000u) != 0 )
                {
                  LODWORD(a5) = 0;
                  v51 = 4;
                  if ( v47 )
                  {
                    if ( v47 < 4 )
                      v51 = *(_DWORD *)v8;
                    if ( *(_DWORD *)(v8 + 16) < v51 )
                    {
                      v52 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
                      v53 = *(_DWORD *)(v8 + 16);
                      v48 = v87;
                      *(_QWORD *)(v8 + 8) |= (unsigned __int64)(unsigned int)a5 << v53;
                      v54 = v53 + 8 * v52;
                      *(_DWORD *)(v8 + 16) = v54;
                      if ( v54 < v51 )
                        LOBYTE(v51) = v54;
                    }
                    v45 = (_QWORD *)(v8 + 8);
                    v55 = *(_DWORD *)(v8 + 8) & ((1LL << v51) - 1);
                  }
                  else
                  {
                    v55 = 0;
                    v45 = (_QWORD *)(v8 + 8);
                  }
                  v47 = *(_QWORD *)v8;
                  LODWORD(a5) = 0;
                  v40 += 2 * ((__int16)v48 & 0xFFFFFFFFFFFFFFF0uLL);
                  v84 = v40;
                  v48 = *(_WORD *)(v40 + 2LL * v55);
                  LOWORD(v87) = v48;
                  v49 = v48 & 0xF;
                  if ( v47 && (v87 & 0xF) != 0 )
                  {
                    v50 = (v87 & 0xF) <= v47;
                    goto LABEL_61;
                  }
                }
                v60 = v48 >> 4;
                if ( v60 != 28 )
                  break;
                v38 = v86;
                v10 = a2;
                v35 = v83;
                v76 = (unsigned int)v37;
                v37 = (unsigned int)(v37 + 1);
                *(_BYTE *)(v76 + a1 + 24) = 0;
                if ( (v37 & 0xF) != 0 )
                {
                  while ( 1 )
                  {
                    v38 = v86;
                    v35 = v83;
                    if ( (unsigned int)v37 >= a2 )
                      goto LABEL_122;
                    *(_BYTE *)(a1 + v37 + 24) = 0;
                    v37 = (unsigned int)(v37 + 1);
                    if ( (v37 & 0xF) == 0 )
                      goto LABEL_38;
                  }
                }
              }
              if ( v48 >> 4 != 29 )
                break;
              v87 = 0;
              v64 = 2;
              if ( !v47 )
                return 3221226050LL;
              if ( v47 < 2 )
                v64 = *(_DWORD *)v8;
              v65 = *(_DWORD *)(v8 + 16);
              if ( v65 < v64 )
              {
                v66 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
                v67 = *(_DWORD *)(v8 + 16);
                *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v67;
                v65 = v67 + 8 * v66;
                if ( v65 < v64 )
                  v64 = v65;
              }
              *(_DWORD *)(v8 + 16) = v65 - v64;
              v68 = *(_DWORD *)(v8 + 8) & ((1LL << v64) - 1);
              *(_QWORD *)(v8 + 8) >>= v64;
              *(_QWORD *)v8 -= v64;
              v69 = *(_QWORD *)v8;
              if ( v64 < 2 )
                return 3221226050LL;
              v70 = v68 + 5;
              if ( v68 == 3 )
              {
                for ( i = 7; i == 7; v70 += i )
                {
                  v87 = 0;
                  v72 = 3;
                  if ( !v69 )
                    return 3221226050LL;
                  if ( v69 < 3 )
                    v72 = *(_DWORD *)v8;
                  v73 = *(_DWORD *)(v8 + 16);
                  if ( v73 < v72 )
                  {
                    v74 = Xp10ScatteredReadBytes(v8 + 24, &v87, 4LL);
                    v75 = *(_DWORD *)(v8 + 16);
                    *(_QWORD *)(v8 + 8) |= (unsigned __int64)v87 << v75;
                    v73 = v75 + 8 * v74;
                    if ( v73 < v72 )
                      v72 = v73;
                  }
                  *(_DWORD *)(v8 + 16) = v73 - v72;
                  i = *(_DWORD *)(v8 + 8) & ((1LL << v72) - 1);
                  *(_QWORD *)(v8 + 8) >>= v72;
                  *(_QWORD *)v8 -= v72;
                  v69 = *(_QWORD *)v8;
                  if ( v72 < 3 )
                    return 3221226050LL;
                }
              }
              v10 = a2;
              if ( v70 + (unsigned int)v37 > a2 )
                return 3221226050LL;
              v38 = v86;
              if ( v70 )
              {
                memset_0((void *)(a1 + (unsigned int)v37 + 24LL), 0, v70);
                do
                {
                  LODWORD(v37) = v37 + 1;
                  --v70;
                }
                while ( v70 );
              }
LABEL_37:
              v35 = v83;
            }
            if ( v48 >> 4 == 30 )
            {
              *(_BYTE *)((unsigned int)v37 + a1 + 24) = a7;
            }
            else
            {
              if ( v48 >> 4 != 31 )
              {
                if ( v48 >> 4 == 32 )
                {
                  if ( (unsigned int)v37 < 0x10 )
                    return 3221226050LL;
                  v62 = *(_BYTE *)((unsigned int)(v37 - 16) + a1 + 24) + 1;
                  *(_BYTE *)((unsigned int)v37 + a1 + 24) = v62;
                  if ( (unsigned __int8)(v62 - 1) > 0x1Au )
                    return 3221226050LL;
                  v38 = v86;
                  a7 = v62;
                  if ( v62 < v36 )
                    v36 = v62;
                  if ( v62 > v86 )
                    v38 = v62;
                }
                else
                {
                  if ( v60 > 0x1B )
                    return 3221226050LL;
                  v61 = a7;
                  if ( v60 )
                    v61 = v48 >> 4;
                  a7 = v61;
                  *(_BYTE *)((unsigned int)v37 + a1 + 24) = v60;
                  if ( (_BYTE)v60 && (unsigned __int8)v60 < v36 )
                    v36 = (unsigned __int8)v60;
                  v38 = v86;
                  if ( (unsigned __int8)v60 > v86 )
                    v38 = (unsigned __int8)v60;
                }
                v86 = v38;
                goto LABEL_82;
              }
              if ( (unsigned int)v37 < 0x10 )
                return 3221226050LL;
              v63 = *(unsigned __int8 *)((unsigned int)(v37 - 16) + a1 + 24);
              *(_BYTE *)((unsigned int)v37 + a1 + 24) = v63;
              if ( !(_BYTE)v63 )
                return 3221226050LL;
              a7 = v63;
            }
            v38 = v86;
LABEL_82:
            v10 = a2;
            LODWORD(v37) = v37 + 1;
            goto LABEL_37;
          }
        }
      }
      else
      {
        _BitScanReverse(&v36, v10);
        v78 = 0;
        v38 = v36 + 1;
        v79 = (1 << (v36 + 1)) - v10;
        if ( v79 )
        {
          LOBYTE(v78) = v36;
          memset_0((void *)(a1 + 24), v78, v79);
          v78 = (1 << (v36 + 1)) - v10;
        }
        if ( v78 < v10 )
          memset_0((void *)(a1 + v78 + 24LL), v36 + 1, v10 - v78);
LABEL_128:
        v80 = Xp10SortHuffmanSymbols(v16, (int)a1 + 728, v10, v36, v38);
        if ( v80 )
        {
          v81 = Xp10BuildHuffmanDecodeTable(v16, a1 + 37464, (_WORD *)(a1 + 728), v80, 0xCu, 6, a1 + 37464, v82, a6);
          *a8 = v81;
          return 0LL;
        }
      }
    }
  }
  return 3221226050LL;
}
