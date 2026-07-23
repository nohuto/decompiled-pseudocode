/*
 * XREFs of Xp10ExecuteHuffmanDecode @ 0x1800F9900
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x1800F8ED8 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x1800F9128 (Xp10ReadAndDecodeHuffmanTables.c)
 *     Xp10ScatteredReadBytes @ 0x1800FA0B0 (Xp10ScatteredReadBytes.c)
 *     Xp10ScatteredCopyFromPrevious @ 0x18011E28C (Xp10ScatteredCopyFromPrevious.c)
 *     Xp10ScatteredNextBuffer @ 0x180122BD4 (Xp10ScatteredNextBuffer.c)
 */

__int64 __fastcall Xp10ExecuteHuffmanDecode(__int16 **a1, unsigned __int64 *a2, _QWORD *a3)
{
  __int16 *v3; // rax
  __int16 **v4; // r13
  __int16 v6; // r9
  char v7; // cl
  int v8; // ecx
  __int64 v9; // r9
  int v10; // esi
  int v11; // edi
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rsi
  unsigned int v19; // edi
  unsigned int *v20; // r12
  _QWORD *v21; // r15
  unsigned int v22; // r8d
  unsigned int *v23; // r9
  int v24; // eax
  unsigned int v25; // ecx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int *v28; // rdi
  __int64 v29; // rcx
  _QWORD *v30; // r14
  __int16 v31; // r10
  unsigned int v32; // esi
  _QWORD *v33; // r12
  int v34; // eax
  unsigned int v35; // ecx
  unsigned __int64 v36; // rdx
  __int64 v37; // r13
  unsigned __int64 v38; // rcx
  unsigned int v39; // esi
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // r8d
  unsigned int v44; // esi
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int64 v48; // rdx
  unsigned __int16 v49; // r10
  unsigned __int64 v50; // r9
  unsigned int v51; // esi
  unsigned int v52; // eax
  unsigned int v53; // r14d
  unsigned int v54; // edi
  unsigned int v55; // edx
  int v56; // eax
  int v57; // ecx
  unsigned __int64 v58; // rax
  int v59; // r8d
  unsigned int v60; // edi
  int v61; // eax
  __int64 v62; // r8
  unsigned int v63; // esi
  __int64 v64; // r14
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // eax
  __int64 v68; // rax
  __int16 v69; // si
  unsigned int v70; // edi
  unsigned int v71; // edx
  int v72; // eax
  int v73; // ecx
  __int16 v74; // si
  int v75; // edx
  unsigned int v76; // esi
  unsigned int v77; // edi
  unsigned int v78; // edx
  int v79; // eax
  int v80; // ecx
  int v81; // r10d
  int v82; // esi
  unsigned int v83; // edi
  int v84; // eax
  int v85; // ecx
  unsigned int v86; // eax
  unsigned int v87; // edx
  unsigned int v88; // edi
  unsigned int v89; // eax
  int v90; // eax
  int v91; // ecx
  unsigned __int64 v92; // r9
  unsigned int v93; // r8d
  int v94; // [rsp+30h] [rbp-40h]
  int v95; // [rsp+30h] [rbp-40h]
  unsigned int v96; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v97[12]; // [rsp+44h] [rbp-2Ch] BYREF
  _QWORD *v98; // [rsp+50h] [rbp-20h]
  __int64 v99; // [rsp+58h] [rbp-18h] BYREF
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
  result = Xp10ReadAndDecodeHuffmanTables(
             (__int64)v4,
             16 * (v8 + 20),
             (__int64)a3,
             v9,
             (unsigned int *)a2,
             (__int64)(v4 + 587),
             v94,
             &v99);
  if ( (int)result >= 0 )
  {
    v15 = v10 + 1;
    if ( !v11 )
      v15 = v10;
    result = Xp10ReadAndDecodeHuffmanTables(
               (__int64)v4,
               v15 + 232,
               v13,
               v14,
               (unsigned int *)a2,
               (__int64)(v4 + 2635),
               v95,
               (__int64 *)&v97[4]);
    if ( (int)result >= 0 )
    {
      v16 = a2 + 1;
      v17 = a2 + 1;
      while ( 1 )
      {
        v98 = v17;
        if ( !*a2 )
          return 0LL;
        v18 = v99;
        v19 = 12;
        v100 = v99;
        v103 = 0;
        if ( *a2 < 0xC )
        {
          v19 = *(_DWORD *)a2;
          v17 = v16;
          v98 = v16;
        }
        v20 = (unsigned int *)(a2 + 2);
        v21 = v17;
        v22 = *((_DWORD *)a2 + 4);
        v23 = (unsigned int *)(a2 + 2);
        if ( v22 < v19 )
        {
          v24 = Xp10ScatteredReadBytes(a2 + 3, &v103, 4LL);
          v25 = *v20;
          v23 = (unsigned int *)(a2 + 2);
          *v17 |= (unsigned __int64)v103 << *v20;
          v22 = v25 + 8 * v24;
          *v20 = v22;
          if ( v22 < v19 )
          {
            LOBYTE(v19) = v25 + 8 * v24;
            v23 = (unsigned int *)(a2 + 2);
            v21 = a2 + 1;
          }
        }
        v26 = *a2;
        v96 = 0;
        v27 = 1LL << v19;
        v28 = v23;
        v29 = *(_DWORD *)v17 & (unsigned int)(v27 - 1);
        v30 = v21;
        v31 = *(_WORD *)(v18 + 2 * v29);
        LOWORD(v103) = v31;
        v32 = v31 & 0xF;
        if ( v26 && (v31 & 0xF) != 0 )
        {
          v28 = (unsigned int *)(a2 + 2);
          v33 = v21;
          if ( (v31 & 0xFu) > v26 )
          {
            v32 = v26;
            v33 = a2 + 1;
            v28 = v23;
          }
          if ( v22 < v32 )
          {
            v34 = Xp10ScatteredReadBytes(a2 + 3, &v96, 4LL);
            v35 = *v28;
            v31 = v103;
            *v21 |= (unsigned __int64)v96 << *v28;
            v22 = v35 + 8 * v34;
            *v28 = v22;
            if ( v22 < v32 )
            {
              v32 = v35 + 8 * v34;
              v30 = v33;
            }
          }
          v36 = *a2;
          *v30 >>= v32;
          v26 = v36 - v32;
          *a2 = v26;
          *v28 = v22 - v32;
        }
        if ( v31 < 0 )
        {
          v37 = v100;
          v38 = v26;
          do
          {
            v96 = 0;
            v39 = 6;
            v26 = v38;
            if ( v38 )
            {
              if ( v38 < 6 )
                v39 = *(_DWORD *)a2;
              if ( *v28 < v39 )
              {
                v40 = Xp10ScatteredReadBytes(a2 + 3, &v96, 4LL);
                v41 = *v28;
                v31 = v103;
                *v30 |= (unsigned __int64)v96 << *v28;
                v42 = v41 + 8 * v40;
                *v28 = v42;
                if ( v42 < v39 )
                  LOBYTE(v39) = v42;
              }
              v26 = *a2;
              v38 = *a2;
              v43 = *(_DWORD *)v30 & ((1LL << v39) - 1);
            }
            else
            {
              v43 = 0;
            }
            v96 = 0;
            v37 += 2 * (v31 & 0xFFFFFFFFFFFFFFF0uLL);
            v31 = *(_WORD *)(v37 + 2LL * v43);
            LOWORD(v103) = v31;
            v44 = v31 & 0xF;
            if ( v38 && (v103 & 0xF) != 0 )
            {
              if ( (v103 & 0xF) > v38 )
                v44 = *(_DWORD *)a2;
              v45 = *v28;
              if ( *v28 < v44 )
              {
                v46 = Xp10ScatteredReadBytes(a2 + 3, &v96, 4LL);
                v47 = *v28;
                v31 = v103;
                *v30 |= (unsigned __int64)v96 << *v28;
                v45 = v47 + 8 * v46;
                *v28 = v45;
                if ( v45 < v44 )
                  v44 = v45;
              }
              v48 = *a2;
              *v30 >>= v44;
              v26 = v48 - v44;
              *a2 = v26;
              *v28 = v45 - v44;
            }
            v38 = v26;
          }
          while ( v31 < 0 );
          v4 = a1;
          v28 = (unsigned int *)(a2 + 2);
        }
        v49 = (unsigned __int16)v31 >> 4;
        LOWORD(v103) = v49;
        if ( v49 < 0x100u )
        {
          while ( *a3 == a3[1] )
          {
            if ( !(unsigned int)Xp10ScatteredNextBuffer(a3) )
              return 3221226050LL;
          }
          *(_BYTE *)(*a3)++ = v49;
          goto LABEL_61;
        }
        if ( (v49 & 0xF) == 0xF )
        {
          v62 = *(_QWORD *)&v97[4];
          v63 = 12;
          v96 = 0;
          v64 = *(_QWORD *)&v97[4];
          if ( v26 )
          {
            if ( v26 < 0xC )
              v63 = *(_DWORD *)a2;
            if ( *v28 < v63 )
            {
              v65 = Xp10ScatteredReadBytes(a2 + 3, &v96, 4LL);
              v66 = *v28;
              v62 = *(_QWORD *)&v97[4];
              a2[1] |= (unsigned __int64)v96 << *v28;
              v67 = v66 + 8 * v65;
              *v28 = v67;
              if ( v67 < v63 )
                LOBYTE(v63) = v67;
            }
            v26 = *a2;
            v68 = (_DWORD)a2[1] & ((unsigned int)(1LL << v63) - 1);
          }
          else
          {
            v68 = 0LL;
          }
          v69 = *(_WORD *)(v62 + 2 * v68);
          v50 = v26;
          v96 = 0;
          v70 = v69 & 0xF;
          if ( v26 && (v69 & 0xF) != 0 )
          {
            if ( (v69 & 0xFu) > v26 )
              v70 = *(_DWORD *)a2;
            v71 = *((_DWORD *)a2 + 4);
            if ( v71 < v70 )
            {
              v72 = Xp10ScatteredReadBytes(a2 + 3, &v96, 4LL);
              v73 = *((_DWORD *)a2 + 4);
              a2[1] |= (unsigned __int64)v96 << v73;
              v71 = v73 + 8 * v72;
              if ( v71 < v70 )
                v70 = v73 + 8 * v72;
            }
            v50 = *a2 - v70;
            a2[1] >>= v70;
            *((_DWORD *)a2 + 4) = v71 - v70;
            goto LABEL_79;
          }
          while ( v69 < 0 )
          {
            v96 = 0;
            v83 = 6;
            if ( v50 )
            {
              if ( v50 < 6 )
                v83 = *(_DWORD *)a2;
              if ( *((_DWORD *)a2 + 4) < v83 )
              {
                v84 = Xp10ScatteredReadBytes(a2 + 3, &v96, 4LL);
                v85 = *((_DWORD *)a2 + 4);
                a2[1] |= (unsigned __int64)v96 << v85;
                v86 = v85 + 8 * v84;
                *((_DWORD *)a2 + 4) = v86;
                if ( v86 < v83 )
                  LOBYTE(v83) = v86;
              }
              v87 = a2[1] & ((1LL << v83) - 1);
            }
            else
            {
              v87 = 0;
            }
            v50 = *a2;
            v96 = 0;
            v64 += 2 * (v69 & 0xFFFFFFFFFFFFFFF0uLL);
            v69 = *(_WORD *)(v64 + 2LL * v87);
            v88 = v69 & 0xF;
            if ( v50 && (*(_WORD *)(v64 + 2LL * v87) & 0xF) != 0 )
            {
              if ( (*(_WORD *)(v64 + 2LL * v87) & 0xFu) > v50 )
                v88 = v50;
              v89 = *((_DWORD *)a2 + 4);
              if ( v89 < v88 )
              {
                v90 = Xp10ScatteredReadBytes(a2 + 3, &v96, 4LL);
                v91 = *((_DWORD *)a2 + 4);
                a2[1] |= (unsigned __int64)v96 << v91;
                v89 = v91 + 8 * v90;
                if ( v89 < v88 )
                  v88 = v89;
              }
              v92 = *a2;
              a2[1] >>= v88;
              v50 = v92 - v88;
              *((_DWORD *)a2 + 4) = v89 - v88;
LABEL_79:
              *a2 = v50;
              continue;
            }
          }
          v74 = (unsigned __int16)v69 >> 4;
          v75 = (unsigned __int8)v74;
          if ( (unsigned __int8)v74 <= 0xE8u )
          {
            v82 = (((unsigned __int16)**v4 >> 5) & 7) + 15;
          }
          else
          {
            v96 = 0;
            v76 = (unsigned __int8)v74 - 232;
            v77 = v75 - 232;
            if ( v50 && v76 )
            {
              if ( v76 > v50 )
                v77 = *(_DWORD *)a2;
              v78 = *((_DWORD *)a2 + 4);
              if ( v78 < v77 )
              {
                v79 = Xp10ScatteredReadBytes(a2 + 3, &v96, 4LL);
                v80 = *((_DWORD *)a2 + 4);
                a2[1] |= (unsigned __int64)v96 << v80;
                v78 = v80 + 8 * v79;
                if ( v78 < v77 )
                  v77 = v80 + 8 * v79;
              }
              v81 = a2[1] & ((1LL << v77) - 1);
              v50 = *a2 - v77;
              a2[1] >>= v77;
              *((_DWORD *)a2 + 4) = v78 - v77;
              *a2 = v50;
            }
            else
            {
              v81 = 0;
              v77 = 0;
            }
            if ( v77 < v76 )
              return 3221226050LL;
            v75 = 1 << v76;
            v82 = v81 + (((unsigned __int16)**v4 >> 5) & 7) + 246;
          }
          v49 = v103;
          v51 = v75 + v82;
        }
        else
        {
          v50 = v26;
          v51 = (v49 & 0xF) + (((unsigned __int16)**v4 >> 5) & 7);
        }
        if ( v49 < 0x140u )
        {
          v93 = (v49 - 256) / 16;
          v60 = *((_DWORD *)v4 + v93 + 2);
          if ( !v93 )
            goto LABEL_58;
          if ( v93 < 3 )
          {
            if ( v93 < 2 )
              goto LABEL_57;
            goto LABEL_56;
          }
        }
        else
        {
          if ( (unsigned int)v49 >= *(_DWORD *)v97 )
            return 3221226050LL;
          if ( v49 <= 0x14Fu )
          {
            v60 = 1;
          }
          else
          {
            v103 = 0;
            v52 = (v49 - 320) / 16;
            v53 = v52;
            v54 = v52;
            if ( v50 && v52 )
            {
              if ( v52 > v50 )
                v54 = *(_DWORD *)a2;
              v55 = *((_DWORD *)a2 + 4);
              if ( v55 < v54 )
              {
                v56 = Xp10ScatteredReadBytes(a2 + 3, &v103, 4LL);
                v57 = *((_DWORD *)a2 + 4);
                a2[1] |= (unsigned __int64)v103 << v57;
                v55 = v57 + 8 * v56;
                if ( v55 < v54 )
                  v54 = v57 + 8 * v56;
              }
              v58 = a2[1];
              v59 = a2[1] & ((1LL << v54) - 1);
              *a2 -= v54;
              a2[1] = v58 >> v54;
              *((_DWORD *)a2 + 4) = v55 - v54;
            }
            else
            {
              v59 = 0;
              v54 = 0;
            }
            if ( v54 < v53 )
              return 3221226050LL;
            v60 = v59 + (1 << v53);
          }
        }
        *((_DWORD *)v4 + 5) = *((_DWORD *)v4 + 4);
LABEL_56:
        *((_DWORD *)v4 + 4) = *((_DWORD *)v4 + 3);
LABEL_57:
        v61 = *((_DWORD *)v4 + 2);
        *((_DWORD *)v4 + 2) = v60;
        *((_DWORD *)v4 + 3) = v61;
LABEL_58:
        if ( !v60 )
          return 3221226050LL;
        while ( v51 > v60 )
        {
          if ( (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v60, v60) != v60 )
            return 3221226050LL;
          v51 -= v60;
          v60 *= 2;
        }
        if ( v51 && (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v60, v51) != v51 )
          return 3221226050LL;
LABEL_61:
        v17 = v98;
        v16 = a2 + 1;
      }
    }
  }
  return result;
}
