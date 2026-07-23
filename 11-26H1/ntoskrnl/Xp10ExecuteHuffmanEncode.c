/*
 * XREFs of Xp10ExecuteHuffmanEncode @ 0x14081277C
 * Callers:
 *     Xp10CompressBuffer @ 0x140811918 (Xp10CompressBuffer.c)
 * Callees:
 *     RtlCopyBitMap @ 0x14048CE30 (RtlCopyBitMap.c)
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x1408103D8 (Xp10BuildAndWriteHuffmanEncodings.c)
 */

__int64 __fastcall Xp10ExecuteHuffmanEncode(
        __int16 **a1,
        unsigned int *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7)
{
  int v8; // esi
  __int64 v10; // rbx
  __int16 v12; // dx
  ULONG v13; // r14d
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r13d
  int v17; // r12d
  __int64 result; // rax
  __int64 v19; // r9
  int v20; // esi
  int v21; // r8d
  bool v22; // zf
  __int16 **v23; // r12
  unsigned int v24; // esi
  unsigned int v25; // r11d
  unsigned int *v26; // rax
  _DWORD *v27; // rax
  unsigned __int16 *v28; // r15
  unsigned int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // r13
  int v32; // ecx
  _BYTE *v33; // r8
  unsigned int v34; // r14d
  unsigned int v35; // r10d
  unsigned int v36; // esi
  __int64 v37; // rax
  char v38; // dl
  unsigned int v39; // eax
  unsigned int v40; // esi
  __int64 v41; // rdx
  _BYTE *v42; // r8
  unsigned __int64 v43; // rax
  unsigned int v44; // r8d
  __int64 v45; // r12
  int v46; // ecx
  unsigned int v47; // r15d
  _BYTE *v48; // r10
  unsigned int v49; // esi
  unsigned int v50; // r14d
  __int64 v51; // rax
  char v52; // dl
  unsigned int v53; // eax
  unsigned int v54; // r14d
  __int64 v55; // rdx
  _BYTE *v56; // r10
  unsigned __int64 v57; // rax
  unsigned int v58; // esi
  unsigned int v59; // r10d
  int v60; // ecx
  _BYTE *v61; // r9
  unsigned int v62; // r14d
  __int64 v63; // rax
  char v64; // dl
  int v65; // eax
  unsigned int v66; // esi
  __int64 v67; // rdx
  _BYTE *v68; // r9
  unsigned __int64 v69; // rax
  unsigned int v70; // esi
  _BYTE *v71; // r9
  int v72; // ecx
  unsigned int v73; // r10d
  unsigned int v74; // r14d
  __int64 v75; // rax
  char v76; // dl
  unsigned int v77; // eax
  unsigned int v78; // esi
  __int64 v79; // rdx
  _BYTE *v80; // r9
  unsigned __int64 v81; // rax
  _RTL_BITMAP Destination; // [rsp+40h] [rbp-20h] BYREF
  _RTL_BITMAP Source; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 *v86; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *((_DWORD *)a1 + 6);
  v10 = a6;
  v12 = **a1;
  *(&Destination.SizeOfBitMap + 1) = 0;
  v13 = *(_DWORD *)(a6 + 8);
  v14 = v12 & 0x1F;
  *(&Source.SizeOfBitMap + 1) = 0;
  v15 = (1 << v14) - ((unsigned __int8)v12 >> 5) - 246;
  LODWORD(v86) = 0;
  LODWORD(a6) = 0;
  _BitScanReverse((unsigned int *)&v16, v15);
  v17 = v15 & (v15 - 1);
  result = Xp10BuildAndWriteHuffmanEncodings(
             (__int64)(a1 + 708),
             (_DWORD *)a1 + 7,
             16 * (v14 + 20),
             0LL,
             (unsigned int *)a1 + 7,
             v10,
             (unsigned int *)&v86);
  if ( (int)result >= 0 )
  {
    v20 = (_DWORD)v86 + v8;
    v21 = v16 + 1;
    v22 = v17 == 0;
    v23 = a1;
    if ( v22 )
      v21 = v16;
    result = Xp10BuildAndWriteHuffmanEncodings(
               (__int64)(a1 + 708),
               (_DWORD *)a1 + 711,
               v21 + 232,
               v19,
               (unsigned int *)a1 + 711,
               v10,
               (unsigned int *)&v86);
    if ( (int)result >= 0 )
    {
      v24 = (_DWORD)v86 + v20;
      v25 = *(_DWORD *)(v10 + 12);
      if ( v24 < 8 * a3 )
      {
        *a7 = 1;
        if ( v13 + v24 <= v25 )
        {
          v28 = (unsigned __int16 *)((char *)a4 + a5);
          v86 = v28;
          while ( a4 < v28 )
          {
            v29 = *(_DWORD *)(v10 + 8);
            if ( v29 >= v25 )
              return *(_DWORD *)(v10 + 8) >= v25 ? 0xC0000023 : 0;
            v30 = *(_QWORD *)v10;
            v31 = *a4;
            v32 = *(_DWORD *)(v10 + 8) & 7;
            a6 = v30;
            v33 = (_BYTE *)(v30 + ((unsigned __int64)v29 >> 3));
            v34 = 8 - v32;
            v35 = *((_DWORD *)v23 + v31 + 7) & 0x1F;
            v36 = *((_DWORD *)v23 + v31 + 7) >> 5;
            if ( v35 + v29 <= v25 || (v35 = v25 - v29, v25 != v29) )
            {
              v37 = v35;
              if ( v34 < v35 )
                v37 = v34;
              v38 = byte_140035FA0[4 * v37];
              v39 = v35;
              *v33 |= ((unsigned __int8)v36 & (unsigned __int8)v38) << v32;
              if ( v34 < v35 )
                v39 = 8 - v32;
              v40 = v36 >> v34;
              v41 = v35 - v39;
              v42 = v33 + 1;
              if ( (unsigned int)v41 >= 8 )
              {
                v43 = (unsigned __int64)(unsigned int)v41 >> 3;
                do
                {
                  *v42 = v40;
                  v41 = (unsigned int)(v41 - 8);
                  v40 >>= 8;
                  ++v42;
                  --v43;
                }
                while ( v43 );
              }
              if ( (_DWORD)v41 )
                *v42 |= (unsigned __int8)v40 & byte_140035FA0[4 * v41];
              v30 = a6;
              v29 += v35;
              *(_DWORD *)(v10 + 8) = v29;
            }
            ++a4;
            v44 = v29;
            if ( (unsigned __int16)v31 >= 0x100u && (v31 & 0xF) == 0xF )
            {
              v45 = *(unsigned __int8 *)a4;
              v46 = v29 & 7;
              v47 = 8 - v46;
              v48 = (_BYTE *)(v30 + ((unsigned __int64)v29 >> 3));
              v49 = *((_DWORD *)a1 + v45 + 711) & 0x1F;
              v50 = *((_DWORD *)a1 + v45 + 711) >> 5;
              if ( v49 + v29 <= v25 || (v49 = v25 - v29, v25 != v29) )
              {
                v51 = v49;
                if ( v47 < v49 )
                  v51 = v47;
                v52 = byte_140035FA0[4 * v51];
                v53 = v49;
                *v48 |= ((unsigned __int8)v50 & (unsigned __int8)v52) << v46;
                if ( v47 < v49 )
                  v53 = 8 - v46;
                v54 = v50 >> v47;
                v55 = v49 - v53;
                v56 = v48 + 1;
                if ( (unsigned int)v55 >= 8 )
                {
                  v57 = (unsigned __int64)(unsigned int)v55 >> 3;
                  do
                  {
                    *v56 = v54;
                    v55 = (unsigned int)(v55 - 8);
                    v54 >>= 8;
                    ++v56;
                    --v57;
                  }
                  while ( v57 );
                  v29 = *(_DWORD *)(v10 + 8);
                }
                if ( (_DWORD)v55 )
                  *v56 |= (unsigned __int8)v54 & byte_140035FA0[4 * v55];
                v30 = a6;
                v44 = v29 + v49;
                *(_DWORD *)(v10 + 8) = v29 + v49;
              }
              a4 = (unsigned __int16 *)((char *)a4 + 1);
              if ( (unsigned __int8)v45 > 0xE8u )
              {
                v58 = *(_DWORD *)a4;
                v59 = v45 - 232;
                v60 = v44 & 7;
                v61 = (_BYTE *)(v30 + ((unsigned __int64)v44 >> 3));
                v62 = 8 - v60;
                if ( (_DWORD)v45 - 232 + v44 <= v25 || (v59 = v25 - v44, v25 != v44) )
                {
                  v63 = v59;
                  if ( v62 < v59 )
                    v63 = v62;
                  v64 = byte_140035FA0[4 * v63];
                  v65 = v59;
                  *v61 |= ((unsigned __int8)v58 & (unsigned __int8)v64) << v60;
                  if ( v62 < v59 )
                    v65 = 8 - v60;
                  v66 = v58 >> v62;
                  v67 = v59 - v65;
                  v68 = v61 + 1;
                  if ( (unsigned int)v67 >= 8 )
                  {
                    v69 = (unsigned __int64)(unsigned int)v67 >> 3;
                    do
                    {
                      *v68 = v66;
                      v67 = (unsigned int)(v67 - 8);
                      v66 >>= 8;
                      ++v68;
                      --v69;
                    }
                    while ( v69 );
                    v44 = *(_DWORD *)(v10 + 8);
                  }
                  if ( (_DWORD)v67 )
                    *v68 |= (unsigned __int8)v66 & byte_140035FA0[4 * v67];
                  v44 += v59;
                  *(_DWORD *)(v10 + 8) = v44;
                }
                a4 += 2;
              }
              v23 = a1;
              v28 = v86;
            }
            if ( (unsigned __int16)v31 > 0x14Fu )
            {
              v70 = *(_DWORD *)a4;
              v71 = (_BYTE *)(a6 + ((unsigned __int64)v44 >> 3));
              v72 = v44 & 7;
              v73 = ((int)v31 - 320) / 16;
              v74 = 8 - v72;
              if ( v44 + v73 <= v25 || (v73 = v25 - v44, v25 != v44) )
              {
                v75 = v73;
                if ( v74 < v73 )
                  v75 = v74;
                v76 = byte_140035FA0[4 * v75];
                v77 = v73;
                *v71 |= ((unsigned __int8)v70 & (unsigned __int8)v76) << v72;
                if ( v74 < v73 )
                  v77 = 8 - v72;
                v78 = v70 >> v74;
                v79 = v73 - v77;
                v80 = v71 + 1;
                if ( (unsigned int)v79 >= 8 )
                {
                  v81 = (unsigned __int64)(unsigned int)v79 >> 3;
                  do
                  {
                    *v80 = v78;
                    v79 = (unsigned int)(v79 - 8);
                    v78 >>= 8;
                    ++v80;
                    --v81;
                  }
                  while ( v81 );
                  v44 = *(_DWORD *)(v10 + 8);
                }
                if ( (_DWORD)v79 )
                  *v80 |= (unsigned __int8)v78 & byte_140035FA0[4 * v79];
                *(_DWORD *)(v10 + 8) = v44 + v73;
              }
              a4 += 2;
            }
          }
          return 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v10 + 8) = v13;
        if ( 8 * a3 + v13 <= v25 )
        {
          Source.Buffer = a2;
          v26 = *(unsigned int **)v10;
          Source.SizeOfBitMap = 8 * a3;
          Destination.Buffer = v26;
          Destination.SizeOfBitMap = v25;
          RtlCopyBitMap(&Source, &Destination, v13);
          v27 = a7;
          *(_DWORD *)(v10 + 8) += 8 * a3;
          *(_OWORD *)(a1 + 1) = 0LL;
          *v27 = 0;
          return 0LL;
        }
      }
      return 3221225507LL;
    }
  }
  return result;
}
