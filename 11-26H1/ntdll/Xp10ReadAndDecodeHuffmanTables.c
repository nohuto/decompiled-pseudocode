/*
 * XREFs of Xp10ReadAndDecodeHuffmanTables @ 0x1800F9128
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x1800F9900 (Xp10ExecuteHuffmanDecode.c)
 * Callees:
 *     Xp10ScatteredReadBytes @ 0x1800FA0B0 (Xp10ScatteredReadBytes.c)
 *     Xp10BuildHuffmanDecodeTable @ 0x1800FA134 (Xp10BuildHuffmanDecodeTable.c)
 *     Xp10SortHuffmanSymbols @ 0x180121380 (Xp10SortHuffmanSymbols.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10ReadAndDecodeHuffmanTables(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
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
  int v16; // esi
  int v17; // edi
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // r13d
  unsigned int v22; // r12d
  unsigned int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // edx
  unsigned int v29; // edi
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // edx
  int v33; // eax
  __int64 v34; // rsi
  unsigned int v35; // r13d
  __int64 v36; // rdi
  int v37; // r14d
  unsigned int v38; // edx
  unsigned __int8 v39; // dl
  unsigned __int64 v40; // rdx
  __int64 v41; // r12
  unsigned int v42; // esi
  int v43; // eax
  int v44; // ecx
  unsigned int v45; // eax
  _QWORD *v46; // r14
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int16 v49; // r8
  unsigned int v50; // esi
  bool v51; // cc
  _QWORD *v52; // r12
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  unsigned int v56; // esi
  int v57; // eax
  int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // edx
  int v61; // eax
  unsigned int v62; // esi
  unsigned int v63; // eax
  int v64; // eax
  int v65; // ecx
  int v66; // edx
  unsigned __int64 v67; // rcx
  unsigned int v68; // esi
  int i; // edx
  int v70; // eax
  __int64 v71; // rax
  int v72; // ecx
  unsigned int v73; // r14d
  unsigned int v74; // eax
  int v75; // eax
  int v76; // ecx
  __int64 v77; // rax
  unsigned int v78; // edx
  unsigned int v79; // ebx
  __int64 v80; // [rsp+50h] [rbp-10h]
  __int64 v81; // [rsp+58h] [rbp-8h]
  unsigned int v83; // [rsp+B0h] [rbp+50h]
  unsigned int v84; // [rsp+B8h] [rbp+58h] BYREF

  v8 = (__int64)a5;
  v10 = a2;
  v11 = 2;
  v84 = 0;
  if ( !*(_QWORD *)a5 )
    return 3221226050LL;
  if ( *(_QWORD *)a5 < 2uLL )
    v11 = *a5;
  v12 = a5[4];
  if ( v12 < v11 )
  {
    v13 = Xp10ScatteredReadBytes(a5 + 6, &v84, 4LL);
    v14 = *(_DWORD *)(v8 + 16);
    *(_QWORD *)(v8 + 8) |= (unsigned __int64)v84 << v14;
    v12 = v14 + 8 * v13;
    if ( v12 < v11 )
      v11 = v12;
  }
  *(_DWORD *)(v8 + 16) = v12 - v11;
  v15 = *(_DWORD *)(v8 + 8) & ((1LL << v11) - 1);
  *(_QWORD *)(v8 + 8) >>= v11;
  *(_QWORD *)v8 -= v11;
  if ( v11 < 2 )
    return 3221226050LL;
  v16 = a1 + 24;
  memset_thunk_772440563353939046((void *)(a1 + 24), 0, 0x2C0uLL);
  if ( v15 )
  {
    v17 = v15 - 1;
    if ( !v17 )
      return 3221225474LL;
    if ( v17 == 1 )
    {
      v19 = 4;
      v20 = 0;
      v21 = 4;
      v22 = 4;
      while ( v20 < 0x21 )
      {
        v23 = 1;
        v84 = 0;
        if ( !*(_QWORD *)v8 )
          return 3221226050LL;
        v24 = *(_DWORD *)(v8 + 16);
        if ( !v24 )
        {
          v25 = Xp10ScatteredReadBytes(v8 + 24, &v84, 4LL);
          v26 = *(_DWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 8) |= (unsigned __int64)v84 << v26;
          v24 = v26 + 8 * v25;
          v23 = v24 != 0;
        }
        v27 = v24 - v23;
        *(_DWORD *)(v8 + 16) = v27;
        v28 = *(_DWORD *)(v8 + 8) & ((1LL << v23) - 1);
        *(_QWORD *)(v8 + 8) >>= v23;
        *(_QWORD *)v8 -= v23;
        if ( !v23 )
          return 3221226050LL;
        if ( v28 )
        {
          if ( v28 != 1 )
            return 3221226050LL;
          v29 = 3;
          v84 = 0;
          if ( !*(_QWORD *)v8 )
            return 3221226050LL;
          if ( *(_QWORD *)v8 < 3uLL )
            v29 = *(_DWORD *)v8;
          if ( v27 < v29 )
          {
            v30 = Xp10ScatteredReadBytes(v8 + 24, &v84, 4LL);
            v31 = *(_DWORD *)(v8 + 16);
            *(_QWORD *)(v8 + 8) |= (unsigned __int64)v84 << v31;
            v27 = v31 + 8 * v30;
            if ( v27 < v29 )
              v29 = v27;
          }
          *(_DWORD *)(v8 + 16) = v27 - v29;
          v32 = *(_DWORD *)(v8 + 8) & ((1LL << v29) - 1);
          *(_QWORD *)(v8 + 8) >>= v29;
          *(_QWORD *)v8 -= v29;
          if ( v29 < 3 )
            return 3221226050LL;
          if ( v32 >= v22 && ++v32 > 8 )
            return 3221226050LL;
          v22 = v32;
          *(_BYTE *)(v20 + a1 + 24) = v32;
          if ( v32 && v32 < v19 )
            v19 = v32;
          if ( v32 > v21 )
            v21 = v32;
        }
        else
        {
          *(_BYTE *)(v20 + a1 + 24) = v22;
        }
        ++v20;
      }
      v33 = Xp10SortHuffmanSymbols((int)a1 + 24, (int)a1 + 728, 33, v19, v21);
      if ( v33 )
      {
        v80 = Xp10BuildHuffmanDecodeTable((int)a1 + 24, (int)a1 + 2136, (int)a1 + 728, v33, 8, 4, a1 + 37464);
        v34 = v80;
        memset_thunk_772440563353939046((void *)(a1 + 24), 0, 0x2C0uLL);
        v10 = a2;
        v35 = 8;
        v83 = 8;
        LODWORD(v36) = 0;
        a7 = 8;
        v37 = 8;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_54:
            if ( (unsigned int)v36 >= v10 )
            {
LABEL_102:
              v16 = a1 + 24;
              goto LABEL_103;
            }
            v40 = *(_QWORD *)v8;
            v41 = v34;
            v81 = v34;
            v42 = 8;
            v84 = 0;
            if ( v40 )
            {
              if ( v40 < 8 )
                v42 = v40;
              if ( *(_DWORD *)(v8 + 16) < v42 )
              {
                v43 = Xp10ScatteredReadBytes(v8 + 24, &v84, 4LL);
                v44 = *(_DWORD *)(v8 + 16);
                *(_QWORD *)(v8 + 8) |= (unsigned __int64)v84 << v44;
                v45 = v44 + 8 * v43;
                *(_DWORD *)(v8 + 16) = v45;
                if ( v45 < v42 )
                  LOBYTE(v42) = v45;
              }
              v40 = *(_QWORD *)v8;
              v46 = (_QWORD *)(v8 + 8);
              v47 = *(_DWORD *)(v8 + 8) & ((unsigned int)(1LL << v42) - 1);
            }
            else
            {
              v47 = 0LL;
              v46 = (_QWORD *)(v8 + 8);
            }
            v48 = v40;
            LODWORD(a5) = 0;
            v49 = *(_WORD *)(v80 + 2 * v47);
            LOWORD(v84) = v49;
            v50 = v49 & 0xF;
            if ( v40 && (v84 & 0xF) != 0 )
            {
              v51 = (v84 & 0xF) <= v40;
LABEL_65:
              v52 = v46;
              if ( !v51 )
              {
                v50 = *(_DWORD *)v8;
                v52 = (_QWORD *)(v8 + 8);
              }
              v53 = *(_DWORD *)(v8 + 16);
              if ( v53 < v50 )
              {
                v54 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
                v55 = *(_DWORD *)(v8 + 16);
                v49 = v84;
                *v46 |= (unsigned __int64)(unsigned int)a5 << v55;
                v53 = v55 + 8 * v54;
                if ( v53 < v50 )
                {
                  v46 = v52;
                  v50 = v53;
                }
              }
              v41 = v81;
              *v46 >>= v50;
              *(_QWORD *)v8 -= v50;
              v48 = *(_QWORD *)v8;
              *(_DWORD *)(v8 + 16) = v53 - v50;
            }
            while ( (v49 & 0x8000u) != 0 )
            {
              LODWORD(a5) = 0;
              v56 = 4;
              if ( v48 )
              {
                if ( v48 < 4 )
                  v56 = *(_DWORD *)v8;
                if ( *(_DWORD *)(v8 + 16) < v56 )
                {
                  v57 = Xp10ScatteredReadBytes(v8 + 24, &a5, 4LL);
                  v58 = *(_DWORD *)(v8 + 16);
                  v49 = v84;
                  *(_QWORD *)(v8 + 8) |= (unsigned __int64)(unsigned int)a5 << v58;
                  v59 = v58 + 8 * v57;
                  *(_DWORD *)(v8 + 16) = v59;
                  if ( v59 < v56 )
                    LOBYTE(v56) = v59;
                }
                v46 = (_QWORD *)(v8 + 8);
                v60 = *(_DWORD *)(v8 + 8) & ((1LL << v56) - 1);
              }
              else
              {
                v60 = 0;
                v46 = (_QWORD *)(v8 + 8);
              }
              v48 = *(_QWORD *)v8;
              LODWORD(a5) = 0;
              v41 += 2 * ((__int16)v49 & 0xFFFFFFFFFFFFFFF0uLL);
              v81 = v41;
              v49 = *(_WORD *)(v41 + 2LL * v60);
              LOWORD(v84) = v49;
              v50 = v49 & 0xF;
              if ( v48 && (v84 & 0xF) != 0 )
              {
                v51 = (v84 & 0xF) <= v48;
                goto LABEL_65;
              }
            }
            v38 = v49 >> 4;
            if ( v38 != 28 )
              break;
            v37 = v83;
            v10 = a2;
            v34 = v80;
            v77 = (unsigned int)v36;
            v36 = (unsigned int)(v36 + 1);
            *(_BYTE *)(v77 + a1 + 24) = 0;
            if ( (v36 & 0xF) != 0 )
            {
              while ( 1 )
              {
                v37 = v83;
                v34 = v80;
                if ( (unsigned int)v36 >= a2 )
                  goto LABEL_102;
                *(_BYTE *)(a1 + v36 + 24) = 0;
                v36 = (unsigned int)(v36 + 1);
                if ( (v36 & 0xF) == 0 )
                  goto LABEL_54;
              }
            }
          }
          if ( v49 >> 4 != 29 )
            break;
          v84 = 0;
          v62 = 2;
          if ( !v48 )
            return 3221226050LL;
          if ( v48 < 2 )
            v62 = *(_DWORD *)v8;
          v63 = *(_DWORD *)(v8 + 16);
          if ( v63 < v62 )
          {
            v64 = Xp10ScatteredReadBytes(v8 + 24, &v84, 4LL);
            v65 = *(_DWORD *)(v8 + 16);
            *(_QWORD *)(v8 + 8) |= (unsigned __int64)v84 << v65;
            v63 = v65 + 8 * v64;
            if ( v63 < v62 )
              v62 = v63;
          }
          *(_DWORD *)(v8 + 16) = v63 - v62;
          v66 = *(_DWORD *)(v8 + 8) & ((1LL << v62) - 1);
          *(_QWORD *)(v8 + 8) >>= v62;
          *(_QWORD *)v8 -= v62;
          v67 = *(_QWORD *)v8;
          if ( v62 < 2 )
            return 3221226050LL;
          v68 = v66 + 5;
          if ( v66 == 3 )
          {
            for ( i = 7; i == 7; v68 += i )
            {
              v84 = 0;
              v73 = 3;
              if ( !v67 )
                return 3221226050LL;
              if ( v67 < 3 )
                v73 = *(_DWORD *)v8;
              v74 = *(_DWORD *)(v8 + 16);
              if ( v74 < v73 )
              {
                v75 = Xp10ScatteredReadBytes(v8 + 24, &v84, 4LL);
                v76 = *(_DWORD *)(v8 + 16);
                *(_QWORD *)(v8 + 8) |= (unsigned __int64)v84 << v76;
                v74 = v76 + 8 * v75;
                if ( v74 < v73 )
                  v73 = v74;
              }
              *(_DWORD *)(v8 + 16) = v74 - v73;
              i = *(_DWORD *)(v8 + 8) & ((1LL << v73) - 1);
              *(_QWORD *)(v8 + 8) >>= v73;
              *(_QWORD *)v8 -= v73;
              v67 = *(_QWORD *)v8;
              if ( v73 < 3 )
                return 3221226050LL;
            }
          }
          v10 = a2;
          if ( v68 + (unsigned int)v36 > a2 )
            return 3221226050LL;
          v37 = v83;
          if ( v68 )
          {
            memset_thunk_772440563353939046((void *)(a1 + (unsigned int)v36 + 24LL), 0, v68);
            do
            {
              LODWORD(v36) = v36 + 1;
              --v68;
            }
            while ( v68 );
          }
LABEL_53:
          v34 = v80;
        }
        if ( v49 >> 4 == 30 )
        {
          *(_BYTE *)((unsigned int)v36 + a1 + 24) = a7;
        }
        else
        {
          if ( v49 >> 4 != 31 )
          {
            if ( v49 >> 4 == 32 )
            {
              if ( (unsigned int)v36 < 0x10 )
                return 3221226050LL;
              v39 = *(_BYTE *)((unsigned int)(v36 - 16) + a1 + 24) + 1;
              *(_BYTE *)((unsigned int)v36 + a1 + 24) = v39;
              if ( (unsigned __int8)(v39 - 1) > 0x1Au )
                return 3221226050LL;
              v37 = v83;
              a7 = v39;
              if ( v39 < v35 )
                v35 = v39;
              if ( v39 > v83 )
                v37 = v39;
            }
            else
            {
              if ( v38 > 0x1B )
                return 3221226050LL;
              v72 = a7;
              if ( v38 )
                v72 = v49 >> 4;
              a7 = v72;
              *(_BYTE *)((unsigned int)v36 + a1 + 24) = v38;
              if ( (_BYTE)v38 && (unsigned __int8)v38 < v35 )
                v35 = (unsigned __int8)v38;
              v37 = v83;
              if ( (unsigned __int8)v38 > v83 )
                v37 = (unsigned __int8)v38;
            }
            v83 = v37;
            goto LABEL_52;
          }
          if ( (unsigned int)v36 < 0x10 )
            return 3221226050LL;
          v61 = *(unsigned __int8 *)((unsigned int)(v36 - 16) + a1 + 24);
          *(_BYTE *)((unsigned int)v36 + a1 + 24) = v61;
          if ( !(_BYTE)v61 )
            return 3221226050LL;
          a7 = v61;
        }
        v37 = v83;
LABEL_52:
        v10 = a2;
        LODWORD(v36) = v36 + 1;
        goto LABEL_53;
      }
    }
    return 3221226050LL;
  }
  _BitScanReverse(&v35, v10);
  v78 = 0;
  v37 = v35 + 1;
  v79 = (1 << (v35 + 1)) - v10;
  if ( v79 )
  {
    LOBYTE(v78) = v35;
    memset_thunk_772440563353939046((void *)(a1 + 24), v78, v79);
    v78 = (1 << (v35 + 1)) - v10;
  }
  if ( v78 < v10 )
    memset_thunk_772440563353939046((void *)(a1 + v78 + 24LL), v35 + 1, v10 - v78);
LABEL_103:
  v70 = Xp10SortHuffmanSymbols(v16, (int)a1 + 728, v10, v35, v37);
  if ( !v70 )
    return 3221226050LL;
  v71 = Xp10BuildHuffmanDecodeTable(v16, (int)a1 + 37464, (int)a1 + 728, v70, 12, 6, a1 + 37464);
  *a8 = v71;
  return 0LL;
}
