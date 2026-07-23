/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x1403F2C10
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1403F2B50 (RtlCompressBufferXpressHuff.c)
 *     RtlCompressBufferProgress @ 0x14061AAD0 (RtlCompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanEncodings @ 0x1403F34A0 (XpressBuildHuffmanEncodings.c)
 *     RtlpMakeXpressCallback @ 0x1403F38F0 (RtlpMakeXpressCallback.c)
 *     XpressDoHuffmanPass @ 0x1403F3940 (XpressDoHuffmanPass.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // r13
  unsigned __int8 *v10; // r12
  unsigned __int8 *v12; // rdi
  unsigned int v13; // ecx
  void *v14; // r9
  unsigned __int8 *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // r15
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  unsigned __int8 *v21; // rcx
  unsigned __int8 *v22; // r11
  int v23; // esi
  unsigned __int64 v24; // rdx
  unsigned __int8 *v25; // rbx
  unsigned __int8 v26; // al
  unsigned __int8 v27; // al
  int v28; // esi
  unsigned __int8 *v30; // r13
  unsigned __int8 *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // r11
  unsigned __int8 *v34; // r12
  __int64 v35; // rbp
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  int v39; // r8d
  __int64 v40; // rdx
  unsigned __int8 *v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  char v45; // cl
  unsigned __int64 v46; // r8
  _BYTE *v47; // rax
  unsigned __int8 v48; // cl
  _WORD *v49; // rbx
  int v50; // eax
  __int64 v51; // rdx
  unsigned __int8 *v52; // rcx
  unsigned __int64 v53; // r8
  unsigned __int8 *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int *v58; // rcx
  __int64 v59; // rax
  int v60; // r8d
  __int64 v61; // rax
  bool v62; // zf
  __int64 XpressCallback; // rax
  unsigned __int64 v64; // [rsp+30h] [rbp-B8h]
  __int64 v65; // [rsp+38h] [rbp-B0h]
  __int64 v66; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v67; // [rsp+50h] [rbp-98h]
  unsigned __int64 v68; // [rsp+58h] [rbp-90h]
  __int64 v69; // [rsp+60h] [rbp-88h]
  unsigned __int8 *v70; // [rsp+68h] [rbp-80h]
  unsigned __int64 v71; // [rsp+70h] [rbp-78h]
  __int64 v72; // [rsp+78h] [rbp-70h]
  _QWORD v73[2]; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v74; // [rsp+90h] [rbp-58h]
  int v75; // [rsp+94h] [rbp-54h]
  unsigned __int8 v77; // [rsp+F8h] [rbp+10h]
  unsigned __int8 v78; // [rsp+F8h] [rbp+10h]
  int v79; // [rsp+100h] [rbp+18h]
  unsigned __int8 v80; // [rsp+108h] [rbp+20h]
  unsigned __int8 v81; // [rsp+108h] [rbp+20h]
  unsigned __int8 *v82; // [rsp+118h] [rbp+30h]

  v79 = a3;
  v9 = a1 + a2;
  v75 = 0;
  v68 = v9;
  v10 = (unsigned __int8 *)a1;
  v71 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v69 = a3;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 22448, a1, 0x12EEuLL);
  v12 = (unsigned __int8 *)a1;
  if ( !a7 || (v13 = a9, a9 > a2) )
    v13 = a2;
  v73[0] = a7;
  v14 = a6 + 90432;
  v15 = a6 + 92736;
  v16 = v13;
  v73[1] = a8;
  v74 = v13;
  v72 = v13;
  do
  {
    v65 = 0LL;
    v66 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    memset_0(v14, 0, 0x800uLL);
    v20 = (unsigned __int64)&v12[v16];
    v82 = v15;
    v21 = v12 + 0x10000;
    v22 = v15;
    v23 = 1;
    if ( (unsigned __int64)(v12 + 0x10000) > v9 )
      v21 = (unsigned __int8 *)v9;
    v70 = v21;
    v24 = (unsigned __int64)(v21 - 40);
    v67 = (unsigned __int64)(v21 - 40);
    if ( (unsigned __int64)(v21 - 40) < v20 )
      v20 = (unsigned __int64)(v21 - 40);
    v25 = v15 + 4;
    v64 = v20;
    if ( v12 == v10 )
    {
      v23 = 2;
      ++*(_DWORD *)&a6[4 * *v12 + 90432];
      v26 = *v12++;
      *v25++ = v26;
    }
    if ( (unsigned __int64)v12 >= v24 )
      goto LABEL_12;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v30 = v25;
            v31 = v12;
            v24 = v12[2] + 4LL * v12[1];
            v32 = *v12 + 2 * v24;
            v19 = *(_QWORD *)&a6[8 * v32];
            *(_QWORD *)&a6[8 * v32] = v12;
            if ( *(_WORD *)v19 != *(_WORD *)v12 || *(_BYTE *)(v19 + 2) != v12[2] || (__int64)&v12[-v19] >= 0x10000 )
              break;
            v33 = *(unsigned __int8 *)(v19 + 3);
            v34 = v12;
            v35 = v12[3];
            if ( (_BYTE)v35 != (_BYTE)v33 )
            {
              v40 = *v12 + 2 * v24;
              v41 = *(unsigned __int8 **)&a6[8 * v40 + 22448 + 8 * v35];
              *(_QWORD *)&a6[8 * v40 + 22448 + 8 * v33] = v19;
              if ( v12 - v41 >= 0x10000 || (v42 = *(unsigned int *)v12, (_DWORD)v42 != *(_DWORD *)v41) )
              {
LABEL_44:
                v12 += 3;
                v19 += 3LL;
                goto LABEL_45;
              }
              v19 = (unsigned __int64)v41;
              *(_QWORD *)&a6[8 * v40 + 22448 + 8 * (v42 >> 24)] = v12;
            }
            v80 = *(_BYTE *)(v19 + 4);
            v77 = v12[4];
            if ( v77 != v80 )
            {
              v51 = 2
                  * ((unsigned __int8)__ROR1__(v12[1] ^ __ROL1__(v12[3] + *v12, 3), 1)
                   + 4LL * (unsigned __int8)__ROL1__(*v12 ^ __ROR1__(v12[2] + v12[1] + 97, 1), 3));
              v52 = *(unsigned __int8 **)&a6[8 * v51 + 22448 + 8 * v77];
              *(_QWORD *)&a6[8 * v51 + 22448 + 8 * v80] = v19;
              if ( v12 - v52 >= 0x10000
                || *(_DWORD *)v12 != *(_DWORD *)v52
                || (v57 = v12[4], (_BYTE)v57 != v52[4])
                || v12 == v52 )
              {
                v12 += 4;
                v19 += 4LL;
                goto LABEL_45;
              }
              v19 = (unsigned __int64)v52;
              *(_QWORD *)&a6[8 * v51 + 22448 + 8 * v57] = v12;
            }
            v81 = *(_BYTE *)(v19 + 5);
            v78 = v12[5];
            if ( v78 != v81 )
            {
              v53 = 2
                  * ((v12[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v12, v12[4]))
                   + 4
                   * ((unsigned __int8)__ROR1__(v12[1] ^ __ROL1__(v12[3], 3), 1)
                    + (unsigned __int64)(unsigned __int8)__ROL1__(v12[4] ^ (__ROR1__(*v12, 1) + 69), 3)));
              v54 = *(unsigned __int8 **)&a6[8 * v53 + 22448 + 8 * v78];
              *(_QWORD *)&a6[8 * v53 + 22448 + 8 * v81] = v19;
              if ( v12 - v54 >= 0x10000
                || *(_DWORD *)v12 != *(_DWORD *)v54
                || v12[4] != v54[4]
                || (v59 = v12[5], (_BYTE)v59 != v54[5])
                || v12 == v54 )
              {
                v12 += 5;
                v19 += 5LL;
                goto LABEL_45;
              }
              v19 = (unsigned __int64)v54;
              *(_QWORD *)&a6[8 * v53 + 22448 + 8 * v59] = v12;
            }
            v12 += 6;
            for ( v19 += 6LL; ; v19 += 32LL )
            {
              if ( (unsigned __int64)v12 >= v68 - 40 )
              {
                for ( ; (unsigned __int64)v12 < v68; ++v19 )
                {
                  if ( *v12 != *(_BYTE *)v19 )
                    break;
                  ++v12;
                }
                goto LABEL_45;
              }
              v36 = *(_DWORD *)v19;
              v37 = *(_DWORD *)v12;
              if ( *(_DWORD *)v12 != *(_DWORD *)v19 )
                break;
              v38 = *(_DWORD *)(v19 + 4);
              v39 = *((_DWORD *)v12 + 1);
              if ( v39 != v38 )
              {
                v12 += 4;
                v19 += 4LL;
LABEL_57:
                LOBYTE(v37) = v39;
                LOBYTE(v36) = v38;
                break;
              }
              v38 = *(_DWORD *)(v19 + 8);
              v39 = *((_DWORD *)v12 + 2);
              if ( v39 != v38 )
              {
                v12 += 8;
                v19 += 8LL;
                goto LABEL_57;
              }
              v38 = *(_DWORD *)(v19 + 12);
              v39 = *((_DWORD *)v12 + 3);
              if ( v39 != v38 )
              {
                v12 += 12;
                v19 += 12LL;
                goto LABEL_57;
              }
              v38 = *(_DWORD *)(v19 + 16);
              v39 = *((_DWORD *)v12 + 4);
              if ( v39 != v38 )
              {
                v12 += 16;
                v19 += 16LL;
                goto LABEL_57;
              }
              v38 = *(_DWORD *)(v19 + 20);
              v39 = *((_DWORD *)v12 + 5);
              if ( v39 != v38 )
              {
                v12 += 20;
                v19 += 20LL;
                goto LABEL_57;
              }
              v38 = *(_DWORD *)(v19 + 24);
              v39 = *((_DWORD *)v12 + 6);
              if ( v39 != v38 )
              {
                v12 += 24;
                v19 += 24LL;
                goto LABEL_57;
              }
              v38 = *(_DWORD *)(v19 + 28);
              v39 = *((_DWORD *)v12 + 7);
              if ( v39 != v38 )
              {
                v12 += 28;
                v19 += 28LL;
                goto LABEL_57;
              }
              v12 += 32;
            }
            if ( (_BYTE)v37 != (_BYTE)v36 )
              goto LABEL_45;
            if ( v12[1] == *(_BYTE *)(v19 + 1) )
            {
              if ( v12[2] == *(_BYTE *)(v19 + 2) )
                goto LABEL_44;
              v12 += 2;
              v19 += 2LL;
            }
            else
            {
              ++v12;
              ++v19;
            }
LABEL_45:
            v24 = (unsigned __int64)&v12[-v19];
            if ( v12 - v34 == 3 && v24 > 0x1000 )
            {
              v20 = v64;
              v22 = v82;
              break;
            }
            if ( v24 >= 0x100 )
              v43 = *((unsigned __int8 *)XpressHighBitIndexTable + (v24 >> 8)) + 8LL;
            else
              v43 = *((unsigned __int8 *)XpressHighBitIndexTable + v24);
            v17 = v43 + v65;
            v44 = v24 - (1LL << v43);
            v45 = 16 * v43;
            v46 = v12 - v34 - 3;
            v65 = v17;
            v47 = v25 + 1;
            if ( v46 >= 0xF )
            {
              v48 = v45 + 15;
              v19 = v12 - v34 - 18;
              *v25 = v48;
              v49 = v25 + 2;
              if ( v19 >= 0xFF )
              {
                *v47 = -1;
                if ( v46 < 0x10000 )
                {
                  *v49 = v46;
                  v66 += 3LL;
                  v49 = v30 + 4;
                  goto LABEL_50;
                }
                *((_DWORD *)v30 + 1) = v46;
                *v49 = 0;
                v49 = v30 + 8;
                v56 = 7LL;
              }
              else
              {
                *v47 = v19;
                v56 = 1LL;
              }
              v66 += v56;
            }
            else
            {
              v48 = v46 + v45;
              *v25 = v48;
              v49 = v25 + 1;
            }
LABEL_50:
            ++*(_DWORD *)&a6[4 * v48 + 91456];
            v50 = 2 * v23 + 1;
            *v49 = v44;
            v25 = (unsigned __int8 *)(v49 + 1);
            if ( v23 <= 0 )
            {
              v58 = (int *)v82;
              v23 = 1;
              v82 = v25;
              v25 += 4;
              *v58 = v50;
            }
            else
            {
              v23 = 2 * v23 + 1;
            }
            v20 = v64;
            v22 = v82;
            if ( (unsigned __int64)v12 >= v64 )
            {
              v24 = v67;
              if ( (unsigned __int64)v12 >= v67 )
                goto LABEL_54;
              XpressCallback = RtlpMakeXpressCallback(v73, v67, v12);
              v22 = v82;
              v20 = XpressCallback;
              v64 = XpressCallback;
            }
          }
          v12 = v31 + 1;
          ++*(_DWORD *)&a6[4 * *v31 + 90432];
          *v25++ = *v31;
          if ( v23 <= 0 )
            break;
          v23 *= 2;
        }
        *(_DWORD *)v22 = 2 * v23;
        v23 = 1;
        v22 = v25;
        v82 = v25;
        v25 += 4;
      }
      while ( (unsigned __int64)v12 < v20 );
      if ( (unsigned __int64)v12 >= v67 )
        break;
      v55 = RtlpMakeXpressCallback(v73, v67, v31 + 1);
      v22 = v82;
      v20 = v55;
      v64 = v55;
    }
    v17 = v65;
LABEL_54:
    v18 = v66;
    v9 = v68;
    v10 = (unsigned __int8 *)a1;
    v21 = v70;
LABEL_12:
    while ( v12 < v21 )
    {
      ++*(_DWORD *)&a6[4 * *v12 + 90432];
      v27 = *v12++;
      *v25++ = v27;
      if ( v23 <= 0 )
      {
        *(_DWORD *)v22 = 2 * v23;
        v23 = 1;
        v22 = v25;
        v25 += 4;
      }
      else
      {
        v23 *= 2;
      }
    }
    for ( ; v23 > 0; v23 = 2 * v23 + 1 )
      ;
    *(_DWORD *)v22 = 2 * v23 + 1;
    if ( (unsigned __int64)v12 < v9 )
    {
      v28 = 0;
    }
    else
    {
      ++*((_DWORD *)a6 + 22864);
      v28 = 1;
    }
    if ( v18
       + 4 * ((unsigned __int64)(v17 + XpressBuildHuffmanEncodings(a6 + 61216, v24, v20, v19) + 31) >> 5)
       + v69
       + 258 >= v71 )
      return 3221225507LL;
    v60 = (int)v25;
    v15 = a6 + 92736;
    v61 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v60, v69, v28);
    v62 = v28 == 0;
    v69 = v61;
    v16 = v72;
    v14 = a6 + 90432;
  }
  while ( v62 );
  *a5 = v61 - v79;
  return 0LL;
}
