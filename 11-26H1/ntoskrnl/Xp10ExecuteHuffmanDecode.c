/*
 * XREFs of Xp10ExecuteHuffmanDecode @ 0x140812000
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x14080FFC0 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x140813A6C (Xp10ReadAndDecodeHuffmanTables.c)
 *     Xp10ScatteredCopyFromPrevious @ 0x14081483C (Xp10ScatteredCopyFromPrevious.c)
 *     Xp10ScatteredNextBuffer @ 0x140814894 (Xp10ScatteredNextBuffer.c)
 *     Xp10ScatteredReadBytes @ 0x1408148E8 (Xp10ScatteredReadBytes.c)
 */

unsigned __int64 __fastcall Xp10ExecuteHuffmanDecode(__int16 **a1, __int64 a2, _QWORD *a3)
{
  __int16 *v3; // rax
  __int16 **v4; // r13
  __int16 v6; // r9
  char v7; // cl
  int v8; // ecx
  int v9; // r9d
  int v10; // esi
  unsigned int v11; // edi
  unsigned __int64 result; // rax
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  _QWORD *v16; // rcx
  _QWORD *v17; // r14
  __int64 v18; // rsi
  unsigned int v19; // edi
  unsigned int *v20; // r12
  _QWORD *v21; // r15
  unsigned int v22; // r8d
  unsigned int *v23; // r9
  int v24; // eax
  unsigned int v25; // ecx
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned int *v29; // rdi
  __int64 v30; // rcx
  _QWORD *v31; // r14
  __int16 v32; // r11
  unsigned int v33; // esi
  _QWORD *v34; // r12
  int v35; // eax
  unsigned int v36; // ecx
  unsigned __int64 v37; // rdx
  __int64 v38; // r13
  unsigned __int64 v39; // rcx
  unsigned int v40; // esi
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // r8d
  unsigned int v45; // esi
  unsigned int v46; // eax
  int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 v49; // rdx
  unsigned __int16 v50; // r11
  __int64 v51; // r8
  unsigned int v52; // esi
  __int64 v53; // r14
  int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // eax
  __int64 v57; // rax
  __int16 v58; // si
  unsigned __int64 v59; // r9
  unsigned int v60; // edi
  unsigned int v61; // edx
  int v62; // eax
  int v63; // ecx
  unsigned int v64; // edi
  int v65; // eax
  int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // edx
  unsigned __int64 v69; // rcx
  unsigned int v70; // edi
  unsigned int v71; // eax
  int v72; // eax
  int v73; // ecx
  unsigned __int64 v74; // r9
  __int16 v75; // si
  int v76; // edx
  unsigned int v77; // esi
  unsigned int v78; // edi
  unsigned int v79; // edx
  int v80; // eax
  int v81; // ecx
  int v82; // r10d
  int v83; // esi
  unsigned int v84; // esi
  unsigned int v85; // r8d
  unsigned int v86; // edi
  unsigned int v87; // eax
  unsigned int v88; // r14d
  unsigned int v89; // edi
  unsigned int v90; // edx
  int v91; // eax
  int v92; // ecx
  unsigned __int64 v93; // rax
  int v94; // r8d
  int v95; // eax
  unsigned int v96; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v97[12]; // [rsp+44h] [rbp-2Ch]
  _QWORD *v98; // [rsp+50h] [rbp-20h]
  __int64 v99; // [rsp+58h] [rbp-18h]
  __int64 v100; // [rsp+60h] [rbp-10h]
  unsigned int v103; // [rsp+C8h] [rbp+58h] BYREF

  v3 = *a1;
  v4 = a1;
  *(_QWORD *)&v97[4] = 0LL;
  v99 = 0LL;
  v6 = *v3;
  v7 = *v3;
  v103 = 0;
  v8 = v7 & 0x1F;
  v9 = (unsigned __int8)v6 >> 5;
  LODWORD(v3) = (1 << v8) - v9 - 246;
  _BitScanReverse((unsigned int *)&v10, (unsigned int)v3);
  v11 = (unsigned int)v3 & ((1 << v8) - v9 - 247);
  *(_QWORD *)v97 = (unsigned int)(16 * (v8 + 20));
  result = Xp10ReadAndDecodeHuffmanTables((_DWORD)v4, 16 * (v8 + 20), (_DWORD)a3, v9, a2, (__int64)(v4 + 587));
  if ( (result & 0x80000000) == 0LL )
  {
    v15 = v10 + 1;
    if ( !v11 )
      v15 = v10;
    result = Xp10ReadAndDecodeHuffmanTables((_DWORD)v4, v15 + 232, v13, v14, a2, (__int64)(v4 + 2635));
    if ( (result & 0x80000000) == 0LL )
    {
      v16 = (_QWORD *)(a2 + 8);
      v17 = (_QWORD *)(a2 + 8);
      while ( 1 )
      {
        result = *(_QWORD *)a2;
        v98 = v17;
        if ( !result )
          return result;
        v18 = v99;
        v19 = 12;
        v100 = v99;
        v103 = 0;
        if ( result < 0xC )
        {
          v19 = result;
          v98 = v16;
          v17 = v16;
        }
        v20 = (unsigned int *)(a2 + 16);
        v21 = v17;
        v22 = *(_DWORD *)(a2 + 16);
        v23 = (unsigned int *)(a2 + 16);
        if ( v22 < v19 )
        {
          v24 = Xp10ScatteredReadBytes(a2 + 24, &v103, 4LL);
          v25 = *v20;
          v23 = (unsigned int *)(a2 + 16);
          *v17 |= (unsigned __int64)v103 << *v20;
          v22 = v25 + 8 * v24;
          *v20 = v22;
          if ( v22 < v19 )
          {
            LOBYTE(v19) = v25 + 8 * v24;
            v23 = (unsigned int *)(a2 + 16);
            v21 = (_QWORD *)(a2 + 8);
          }
        }
        v26 = *(_QWORD *)a2;
        v96 = 0;
        v27 = 1LL << v19;
        v28 = v26;
        v29 = v23;
        v30 = *(_DWORD *)v17 & (unsigned int)(v27 - 1);
        v31 = v21;
        v32 = *(_WORD *)(v18 + 2 * v30);
        LOWORD(v103) = v32;
        v33 = v32 & 0xF;
        if ( v26 && (v32 & 0xF) != 0 )
        {
          v29 = (unsigned int *)(a2 + 16);
          v34 = v21;
          if ( (v32 & 0xFu) > v26 )
          {
            v33 = v26;
            v34 = (_QWORD *)(a2 + 8);
            v29 = v23;
          }
          if ( v22 < v33 )
          {
            v35 = Xp10ScatteredReadBytes(a2 + 24, &v96, 4LL);
            v36 = *v29;
            v32 = v103;
            *v21 |= (unsigned __int64)v96 << *v29;
            v22 = v36 + 8 * v35;
            *v29 = v22;
            if ( v22 < v33 )
            {
              v33 = v36 + 8 * v35;
              v31 = v34;
            }
          }
          v37 = *(_QWORD *)a2;
          *v31 >>= v33;
          v28 = v37 - v33;
          *(_QWORD *)a2 = v28;
          *v29 = v22 - v33;
        }
        if ( v32 < 0 )
        {
          v38 = v100;
          v39 = v28;
          do
          {
            v96 = 0;
            v40 = 6;
            v28 = v39;
            if ( v39 )
            {
              if ( v39 < 6 )
                v40 = *(_DWORD *)a2;
              if ( *v29 < v40 )
              {
                v41 = Xp10ScatteredReadBytes(a2 + 24, &v96, 4LL);
                v42 = *v29;
                v32 = v103;
                *v31 |= (unsigned __int64)v96 << *v29;
                v43 = v42 + 8 * v41;
                *v29 = v43;
                if ( v43 < v40 )
                  LOBYTE(v40) = v43;
              }
              v28 = *(_QWORD *)a2;
              v39 = *(_QWORD *)a2;
              v44 = *(_DWORD *)v31 & ((1LL << v40) - 1);
            }
            else
            {
              v44 = 0;
            }
            v96 = 0;
            v38 += 2 * (v32 & 0xFFFFFFFFFFFFFFF0uLL);
            v32 = *(_WORD *)(v38 + 2LL * v44);
            LOWORD(v103) = v32;
            v45 = v32 & 0xF;
            if ( v39 && (v103 & 0xF) != 0 )
            {
              if ( (v103 & 0xF) > v39 )
                v45 = *(_DWORD *)a2;
              v46 = *v29;
              if ( *v29 < v45 )
              {
                v47 = Xp10ScatteredReadBytes(a2 + 24, &v96, 4LL);
                v48 = *v29;
                v32 = v103;
                *v31 |= (unsigned __int64)v96 << *v29;
                v46 = v48 + 8 * v47;
                *v29 = v46;
                if ( v46 < v45 )
                  v45 = v46;
              }
              v49 = *(_QWORD *)a2;
              *v31 >>= v45;
              v28 = v49 - v45;
              *(_QWORD *)a2 = v28;
              *v29 = v46 - v45;
            }
            v39 = v28;
          }
          while ( v32 < 0 );
          v4 = a1;
          v29 = (unsigned int *)(a2 + 16);
        }
        v50 = (unsigned __int16)v32 >> 4;
        LOWORD(v103) = v50;
        if ( v50 < 0x100u )
        {
          while ( *a3 == a3[1] )
          {
            if ( !(unsigned int)Xp10ScatteredNextBuffer(a3, v28) )
              return 3221226050LL;
          }
          *(_BYTE *)(*a3)++ = v50;
          goto LABEL_45;
        }
        if ( (v50 & 0xF) == 0xF )
        {
          v51 = *(_QWORD *)&v97[4];
          v52 = 12;
          v96 = 0;
          v53 = *(_QWORD *)&v97[4];
          if ( v28 )
          {
            if ( v28 < 0xC )
              v52 = *(_DWORD *)a2;
            if ( *v29 < v52 )
            {
              v54 = Xp10ScatteredReadBytes(a2 + 24, &v96, 4LL);
              v55 = *v29;
              v51 = *(_QWORD *)&v97[4];
              *(_QWORD *)(a2 + 8) |= (unsigned __int64)v96 << *v29;
              v56 = v55 + 8 * v54;
              *v29 = v56;
              if ( v56 < v52 )
                LOBYTE(v52) = v56;
            }
            v28 = *(_QWORD *)a2;
            v57 = *(_DWORD *)(a2 + 8) & ((unsigned int)(1LL << v52) - 1);
          }
          else
          {
            v57 = 0LL;
          }
          v58 = *(_WORD *)(v51 + 2 * v57);
          v59 = v28;
          v96 = 0;
          v60 = v58 & 0xF;
          if ( v28 && (v58 & 0xF) != 0 )
          {
            if ( (v58 & 0xFu) > v28 )
              v60 = *(_DWORD *)a2;
            v61 = *(_DWORD *)(a2 + 16);
            if ( v61 < v60 )
            {
              v62 = Xp10ScatteredReadBytes(a2 + 24, &v96, 4LL);
              v63 = *(_DWORD *)(a2 + 16);
              *(_QWORD *)(a2 + 8) |= (unsigned __int64)v96 << v63;
              v61 = v63 + 8 * v62;
              if ( v61 < v60 )
                v60 = v63 + 8 * v62;
            }
            v59 = *(_QWORD *)a2 - v60;
            *(_QWORD *)(a2 + 8) >>= v60;
            *(_DWORD *)(a2 + 16) = v61 - v60;
            goto LABEL_79;
          }
          while ( v58 < 0 )
          {
            v96 = 0;
            v64 = 6;
            if ( v59 )
            {
              if ( v59 < 6 )
                v64 = *(_DWORD *)a2;
              if ( *(_DWORD *)(a2 + 16) < v64 )
              {
                v65 = Xp10ScatteredReadBytes(a2 + 24, &v96, 4LL);
                v66 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v96 << v66;
                v67 = v66 + 8 * v65;
                *(_DWORD *)(a2 + 16) = v67;
                if ( v67 < v64 )
                  LOBYTE(v64) = v67;
              }
              v68 = *(_DWORD *)(a2 + 8) & ((1LL << v64) - 1);
            }
            else
            {
              v68 = 0;
            }
            v69 = *(_QWORD *)a2;
            v59 = v69;
            v96 = 0;
            v53 += 2 * (v58 & 0xFFFFFFFFFFFFFFF0uLL);
            v58 = *(_WORD *)(v53 + 2LL * v68);
            v70 = v58 & 0xF;
            if ( v69 && (*(_WORD *)(v53 + 2LL * v68) & 0xF) != 0 )
            {
              if ( (*(_WORD *)(v53 + 2LL * v68) & 0xFu) > v69 )
                v70 = v69;
              v71 = *(_DWORD *)(a2 + 16);
              if ( v71 < v70 )
              {
                v72 = Xp10ScatteredReadBytes(a2 + 24, &v96, 4LL);
                v73 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v96 << v73;
                v71 = v73 + 8 * v72;
                if ( v71 < v70 )
                  v70 = v71;
              }
              v74 = *(_QWORD *)a2;
              *(_QWORD *)(a2 + 8) >>= v70;
              v59 = v74 - v70;
              *(_DWORD *)(a2 + 16) = v71 - v70;
LABEL_79:
              *(_QWORD *)a2 = v59;
              continue;
            }
          }
          v75 = (unsigned __int16)v58 >> 4;
          v76 = (unsigned __int8)v75;
          if ( (unsigned __int8)v75 <= 0xE8u )
          {
            v83 = (((unsigned __int16)**v4 >> 5) & 7) + 15;
          }
          else
          {
            v96 = 0;
            v77 = (unsigned __int8)v75 - 232;
            v78 = v76 - 232;
            if ( v59 && v77 )
            {
              if ( v77 > v59 )
                v78 = *(_DWORD *)a2;
              v79 = *(_DWORD *)(a2 + 16);
              if ( v79 < v78 )
              {
                v80 = Xp10ScatteredReadBytes(a2 + 24, &v96, 4LL);
                v81 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v96 << v81;
                v79 = v81 + 8 * v80;
                if ( v79 < v78 )
                  v78 = v81 + 8 * v80;
              }
              v82 = *(_DWORD *)(a2 + 8) & ((1LL << v78) - 1);
              v59 = *(_QWORD *)a2 - v78;
              *(_QWORD *)(a2 + 8) >>= v78;
              *(_DWORD *)(a2 + 16) = v79 - v78;
              *(_QWORD *)a2 = v59;
            }
            else
            {
              v82 = 0;
              v78 = 0;
            }
            if ( v78 < v77 )
              return 3221226050LL;
            v76 = 1 << v77;
            v83 = v82 + (((unsigned __int16)**v4 >> 5) & 7) + 246;
          }
          v50 = v103;
          v84 = v76 + v83;
        }
        else
        {
          v59 = v28;
          v84 = (v50 & 0xF) + (((unsigned __int16)**v4 >> 5) & 7);
        }
        if ( v50 >= 0x140u )
          break;
        v85 = (v50 - 256) / 16;
        v86 = *((_DWORD *)v4 + v85 + 2);
        if ( v85 )
        {
          if ( v85 < 3 )
          {
            if ( v85 >= 2 )
LABEL_116:
              *((_DWORD *)v4 + 4) = *((_DWORD *)v4 + 3);
            v95 = *((_DWORD *)v4 + 2);
            *((_DWORD *)v4 + 2) = v86;
            *((_DWORD *)v4 + 3) = v95;
            goto LABEL_118;
          }
LABEL_115:
          *((_DWORD *)v4 + 5) = *((_DWORD *)v4 + 4);
          goto LABEL_116;
        }
LABEL_118:
        if ( !v86 )
          return 3221226050LL;
        while ( v84 > v86 )
        {
          if ( (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v86, v86, v59) != v86 )
            return 3221226050LL;
          v84 -= v86;
          v86 *= 2;
        }
        if ( v84 && (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v86, v84, v59) != v84 )
          return 3221226050LL;
LABEL_45:
        v17 = v98;
        v16 = (_QWORD *)(a2 + 8);
      }
      if ( (unsigned int)v50 >= *(_DWORD *)v97 )
        return 3221226050LL;
      if ( v50 <= 0x14Fu )
      {
        v86 = 1;
      }
      else
      {
        v103 = 0;
        v87 = (v50 - 320) / 16;
        v88 = v87;
        v89 = v87;
        if ( v59 && v87 )
        {
          if ( v87 > v59 )
            v89 = *(_DWORD *)a2;
          v90 = *(_DWORD *)(a2 + 16);
          if ( v90 < v89 )
          {
            v91 = Xp10ScatteredReadBytes(a2 + 24, &v103, 4LL);
            v92 = *(_DWORD *)(a2 + 16);
            *(_QWORD *)(a2 + 8) |= (unsigned __int64)v103 << v92;
            v90 = v92 + 8 * v91;
            if ( v90 < v89 )
              v89 = v92 + 8 * v91;
          }
          v93 = *(_QWORD *)(a2 + 8);
          v94 = *(_DWORD *)(a2 + 8) & ((1LL << v89) - 1);
          *(_QWORD *)a2 -= v89;
          *(_QWORD *)(a2 + 8) = v93 >> v89;
          *(_DWORD *)(a2 + 16) = v90 - v89;
        }
        else
        {
          v94 = 0;
          v89 = 0;
        }
        if ( v89 < v88 )
          return 3221226050LL;
        v86 = v94 + (1 << v88);
      }
      goto LABEL_115;
    }
  }
  return result;
}
