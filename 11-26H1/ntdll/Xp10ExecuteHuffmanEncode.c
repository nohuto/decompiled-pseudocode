/*
 * XREFs of Xp10ExecuteHuffmanEncode @ 0x180151FCC
 * Callers:
 *     Xp10CompressBuffer @ 0x1801519AC (Xp10CompressBuffer.c)
 * Callees:
 *     RtlCopyBitMap @ 0x180140900 (RtlCopyBitMap.c)
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x1801515CC (Xp10BuildAndWriteHuffmanEncodings.c)
 */

__int64 __fastcall Xp10ExecuteHuffmanEncode(
        __int16 **a1,
        unsigned int *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6,
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
  unsigned __int64 v28; // r15
  unsigned int v29; // r9d
  __int64 v30; // r13
  _BYTE *v31; // r8
  int v32; // ecx
  unsigned int v33; // r14d
  unsigned int v34; // esi
  unsigned int v35; // r10d
  __int64 v36; // rax
  char v37; // dl
  unsigned int v38; // eax
  unsigned int v39; // esi
  unsigned int v40; // edx
  _BYTE *v41; // r8
  unsigned __int64 v42; // rax
  unsigned int v43; // r8d
  __int64 v44; // r12
  int v45; // ecx
  unsigned int v46; // r15d
  _BYTE *v47; // r10
  unsigned int v48; // esi
  unsigned int v49; // r14d
  __int64 v50; // rax
  char v51; // dl
  unsigned int v52; // eax
  unsigned int v53; // r14d
  __int64 v54; // rdx
  _BYTE *v55; // r10
  unsigned __int64 v56; // rax
  unsigned int v57; // esi
  unsigned int v58; // r10d
  _BYTE *v59; // r9
  int v60; // ecx
  unsigned int v61; // r14d
  __int64 v62; // rax
  char v63; // dl
  int v64; // eax
  unsigned int v65; // esi
  __int64 v66; // rdx
  _BYTE *v67; // r9
  unsigned __int64 v68; // rax
  unsigned int v69; // esi
  _BYTE *v70; // r9
  int v71; // ecx
  unsigned int v72; // r10d
  unsigned int v73; // r14d
  __int64 v74; // rax
  char v75; // dl
  unsigned int v76; // eax
  unsigned int v77; // esi
  __int64 v78; // rdx
  _BYTE *v79; // r9
  unsigned __int64 v80; // rax
  _RTL_BITMAP Destination; // [rsp+40h] [rbp-20h] BYREF
  _RTL_BITMAP Source; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v85; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *((_DWORD *)a1 + 6);
  v10 = a6;
  v12 = **a1;
  *(&Destination.SizeOfBitMap + 1) = 0;
  v13 = *(_DWORD *)(a6 + 8);
  v14 = v12 & 0x1F;
  *(&Source.SizeOfBitMap + 1) = 0;
  v15 = (1 << v14) - ((unsigned __int8)v12 >> 5) - 246;
  v85 = 0;
  LODWORD(a6) = 0;
  _BitScanReverse((unsigned int *)&v16, v15);
  v17 = v15 & (v15 - 1);
  result = Xp10BuildAndWriteHuffmanEncodings(
             (unsigned int *)a1 + 1416,
             (__int64)a1 + 28,
             16 * (v14 + 20),
             0LL,
             (unsigned int *)a1 + 7,
             v10,
             &v85);
  if ( (int)result >= 0 )
  {
    v20 = v85 + v8;
    v21 = v16 + 1;
    v22 = v17 == 0;
    v23 = a1;
    if ( v22 )
      v21 = v16;
    result = Xp10BuildAndWriteHuffmanEncodings(
               (unsigned int *)a1 + 1416,
               (__int64)a1 + 2844,
               v21 + 232,
               v19,
               (unsigned int *)a1 + 711,
               v10,
               &v85);
    if ( (int)result >= 0 )
    {
      v24 = v85 + v20;
      v25 = *(_DWORD *)(v10 + 12);
      if ( v24 >= 8 * a3 )
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
        return 3221225507LL;
      }
      *a7 = 1;
      if ( v13 + v24 > v25 )
        return 3221225507LL;
      v28 = (unsigned __int64)a4 + a5;
      a6 = v28;
      if ( (unsigned __int64)a4 >= v28 )
        return 0LL;
      while ( 1 )
      {
        v29 = *(_DWORD *)(v10 + 8);
        if ( v29 >= v25 )
          break;
        v30 = *a4;
        v31 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v29 >> 3));
        v32 = *(_DWORD *)(v10 + 8) & 7;
        v33 = 8 - v32;
        v34 = *((_DWORD *)v23 + v30 + 7) >> 5;
        v35 = *((_DWORD *)v23 + v30 + 7) & 0x1F;
        if ( v35 + v29 <= v25 || (v35 = v25 - v29, v25 != v29) )
        {
          v36 = v35;
          if ( v33 < v35 )
            v36 = v33;
          v37 = byte_180181FE0[4 * v36];
          v38 = v35;
          *v31 |= ((unsigned __int8)v34 & (unsigned __int8)v37) << v32;
          if ( v33 < v35 )
            v38 = 8 - v32;
          v39 = v34 >> v33;
          v40 = v35 - v38;
          v41 = v31 + 1;
          if ( v35 - v38 >= 8 )
          {
            v42 = (unsigned __int64)v40 >> 3;
            do
            {
              *v41 = v39;
              v40 -= 8;
              v39 >>= 8;
              ++v41;
              --v42;
            }
            while ( v42 );
          }
          if ( v40 )
            *v41 |= (unsigned __int8)v39 & byte_180181FE0[4 * v40];
          v29 += v35;
          *(_DWORD *)(v10 + 8) = v29;
        }
        ++a4;
        v43 = v29;
        if ( (unsigned __int16)v30 >= 0x100u && (v30 & 0xF) == 0xF )
        {
          v44 = *(unsigned __int8 *)a4;
          v45 = v29 & 7;
          v46 = 8 - v45;
          v47 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v29 >> 3));
          v48 = *((_DWORD *)a1 + v44 + 711) & 0x1F;
          v49 = *((_DWORD *)a1 + v44 + 711) >> 5;
          if ( v48 + v29 <= v25 || (v48 = v25 - v29, v25 != v29) )
          {
            v50 = v48;
            if ( v46 < v48 )
              v50 = v46;
            v51 = byte_180181FE0[4 * v50];
            v52 = v48;
            *v47 |= ((unsigned __int8)v49 & (unsigned __int8)v51) << v45;
            if ( v46 < v48 )
              v52 = 8 - v45;
            v53 = v49 >> v46;
            v54 = v48 - v52;
            v55 = v47 + 1;
            if ( (unsigned int)v54 >= 8 )
            {
              v56 = (unsigned __int64)(unsigned int)v54 >> 3;
              do
              {
                *v55 = v53;
                v54 = (unsigned int)(v54 - 8);
                v53 >>= 8;
                ++v55;
                --v56;
              }
              while ( v56 );
              v29 = *(_DWORD *)(v10 + 8);
            }
            if ( (_DWORD)v54 )
              *v55 |= (unsigned __int8)v53 & byte_180181FE0[4 * v54];
            v43 = v29 + v48;
            *(_DWORD *)(v10 + 8) = v29 + v48;
          }
          a4 = (unsigned __int16 *)((char *)a4 + 1);
          if ( (unsigned __int8)v44 > 0xE8u )
          {
            v57 = *(_DWORD *)a4;
            v58 = v44 - 232;
            v59 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v43 >> 3));
            v60 = v43 & 7;
            v61 = 8 - v60;
            if ( (_DWORD)v44 - 232 + v43 <= v25 || (v58 = v25 - v43, v25 != v43) )
            {
              v62 = v58;
              if ( v61 < v58 )
                v62 = v61;
              v63 = byte_180181FE0[4 * v62];
              v64 = v58;
              *v59 |= ((unsigned __int8)v57 & (unsigned __int8)v63) << v60;
              if ( v61 < v58 )
                v64 = 8 - v60;
              v65 = v57 >> v61;
              v66 = v58 - v64;
              v67 = v59 + 1;
              if ( (unsigned int)v66 >= 8 )
              {
                v68 = (unsigned __int64)(unsigned int)v66 >> 3;
                do
                {
                  *v67 = v65;
                  v66 = (unsigned int)(v66 - 8);
                  v65 >>= 8;
                  ++v67;
                  --v68;
                }
                while ( v68 );
                v43 = *(_DWORD *)(v10 + 8);
              }
              if ( (_DWORD)v66 )
                *v67 |= (unsigned __int8)v65 & byte_180181FE0[4 * v66];
              v43 += v58;
              *(_DWORD *)(v10 + 8) = v43;
            }
            a4 += 2;
          }
          v23 = a1;
          v28 = a6;
        }
        if ( (unsigned __int16)v30 > 0x14Fu )
        {
          v69 = *(_DWORD *)a4;
          v70 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v43 >> 3));
          v71 = v43 & 7;
          v72 = ((int)v30 - 320) / 16;
          v73 = 8 - v71;
          if ( v43 + v72 <= v25 || (v72 = v25 - v43, v25 != v43) )
          {
            v74 = v72;
            if ( v73 < v72 )
              v74 = v73;
            v75 = byte_180181FE0[4 * v74];
            v76 = v72;
            *v70 |= ((unsigned __int8)v69 & (unsigned __int8)v75) << v71;
            if ( v73 < v72 )
              v76 = 8 - v71;
            v77 = v69 >> v73;
            v78 = v72 - v76;
            v79 = v70 + 1;
            if ( (unsigned int)v78 >= 8 )
            {
              v80 = (unsigned __int64)(unsigned int)v78 >> 3;
              do
              {
                *v79 = v77;
                v78 = (unsigned int)(v78 - 8);
                v77 >>= 8;
                ++v79;
                --v80;
              }
              while ( v80 );
              v43 = *(_DWORD *)(v10 + 8);
            }
            if ( (_DWORD)v78 )
              *v79 |= (unsigned __int8)v77 & byte_180181FE0[4 * v78];
            *(_DWORD *)(v10 + 8) = v43 + v72;
          }
          a4 += 2;
        }
        if ( (unsigned __int64)a4 >= v28 )
          return 0LL;
      }
      return *(_DWORD *)(v10 + 8) >= v25 ? 0xC0000023 : 0;
    }
  }
  return result;
}
