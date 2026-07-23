/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x1403F1B00
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1403F2B50 (RtlCompressBufferXpressHuff.c)
 *     RtlCompressBufferProgress @ 0x14061AAD0 (RtlCompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanEncodings @ 0x1403F34A0 (XpressBuildHuffmanEncodings.c)
 *     RtlpMakeXpressCallback @ 0x1403F38F0 (RtlpMakeXpressCallback.c)
 *     XpressDoHuffmanPass @ 0x1403F3940 (XpressDoHuffmanPass.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r12
  unsigned int v13; // edi
  unsigned __int8 *v15; // rbx
  unsigned __int8 *v16; // r8
  __int64 v17; // r9
  unsigned __int8 *v18; // rdx
  unsigned __int8 *v19; // r13
  unsigned __int8 *v20; // rdi
  unsigned __int64 XpressCallback; // r9
  int v22; // esi
  int v23; // esi
  unsigned __int8 *v25; // r10
  __int64 v26; // r11
  __int64 v27; // rax
  unsigned __int8 *v28; // rbp
  unsigned __int8 *v29; // rdx
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned int v32; // eax
  unsigned __int8 *v33; // r10
  __int64 v34; // rcx
  unsigned __int8 *v35; // r11
  unsigned __int64 v36; // r12
  unsigned __int8 *v37; // r13
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  char v41; // cl
  unsigned __int64 v42; // rax
  unsigned __int8 v43; // cl
  _WORD *v44; // rdi
  unsigned __int8 *v45; // rbx
  _DWORD *i; // rdx
  int v47; // eax
  int v48; // r10d
  int v49; // r13d
  unsigned __int64 v50; // rbx
  unsigned __int8 *v51; // rax
  unsigned int v52; // eax
  int *v53; // rcx
  unsigned __int8 v54; // al
  __int64 v55; // rax
  unsigned __int8 v56; // al
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // eax
  unsigned __int8 *v60; // [rsp+30h] [rbp-C8h]
  unsigned __int8 *v61; // [rsp+38h] [rbp-C0h]
  __int64 v62; // [rsp+40h] [rbp-B8h]
  __int64 v63; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+50h] [rbp-A8h]
  __int64 v65; // [rsp+58h] [rbp-A0h]
  unsigned __int8 *v66; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v67; // [rsp+68h] [rbp-90h]
  unsigned __int8 *v68; // [rsp+70h] [rbp-88h]
  unsigned __int8 *v69; // [rsp+78h] [rbp-80h]
  unsigned __int8 *v70; // [rsp+80h] [rbp-78h]
  unsigned __int8 *v71; // [rsp+88h] [rbp-70h]
  unsigned __int8 *v72; // [rsp+90h] [rbp-68h]
  unsigned __int64 v73; // [rsp+98h] [rbp-60h]
  unsigned __int8 *v74; // [rsp+A0h] [rbp-58h]
  _QWORD v75[2]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned int v76; // [rsp+B8h] [rbp-40h]
  int v77; // [rsp+BCh] [rbp-3Ch]
  unsigned __int8 *v78; // [rsp+100h] [rbp+8h]
  int v79; // [rsp+110h] [rbp+18h]
  char *v80; // [rsp+128h] [rbp+30h]

  v79 = a3;
  v11 = a1 + a2;
  v12 = a3 + a4;
  v13 = a2;
  v77 = 0;
  v64 = v11;
  v73 = v12;
  if ( a4 < 0x12C )
    return 3221225507LL;
  if ( a1 > 0x10001 )
  {
    memset_0(a6, 0, 0x40000uLL);
    v15 = (unsigned __int8 *)a1;
    v65 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    if ( a7 && a9 <= v13 )
      v13 = a9;
    else
      a9 = v13;
    v75[0] = a7;
    v75[1] = a8;
    v76 = v13;
    v61 = 0LL;
    while ( 1 )
    {
      v62 = 0LL;
      v63 = 0LL;
      memset_0(a6 + 1339936, 0, 0x800uLL);
      v17 = v13;
      v18 = (unsigned __int8 *)(a6 + 1342240);
      v19 = (unsigned __int8 *)v11;
      v80 = a6 + 1342240;
      if ( (unsigned __int64)(v15 + 0x10000) <= v11 )
        v19 = v15 + 0x10000;
      v20 = (unsigned __int8 *)(a6 + 1342244);
      XpressCallback = (unsigned __int64)&v15[v17];
      v74 = v19;
      v22 = 1;
      v60 = v19 - 5;
      if ( (unsigned __int64)(v19 - 5) < XpressCallback )
        XpressCallback = (unsigned __int64)(v19 - 5);
      if ( v15 == (unsigned __int8 *)a1 )
      {
        v22 = 2;
        ++*(_DWORD *)&a6[4 * *v15 + 1339936];
        v54 = *v15++;
        *v20 = v54;
        v20 = (unsigned __int8 *)(a6 + 1342245);
      }
      if ( v15 < v19 - 5 )
        break;
LABEL_14:
      while ( v15 < v19 )
      {
        ++*(_DWORD *)&a6[4 * *v15 + 1339936];
        v56 = *v15++;
        *v20++ = v56;
        if ( v22 <= 0 )
        {
          *(_DWORD *)v18 = 2 * v22;
          v22 = 1;
          v18 = v20;
          v20 += 4;
        }
        else
        {
          v22 *= 2;
        }
      }
      for ( ; v22 > 0; v22 = 2 * v22 + 1 )
        ;
      *(_DWORD *)v18 = 2 * v22 + 1;
      if ( (unsigned __int64)v15 >= v11 )
      {
        ++*((_DWORD *)a6 + 335240);
        v23 = 1;
      }
      else
      {
        v23 = 0;
      }
      if ( v63
         + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 1310720, v18, v16, XpressCallback) + v62 + 31) >> 5)
         + v65
         + 258 >= v12 )
        return 3221225507LL;
      v27 = XpressDoHuffmanPass((int)a6 + 1310720, (int)a6 + 1342240, (_DWORD)v20, v65, v23);
      v13 = a9;
      v11 = v64;
      v65 = v27;
      if ( v23 )
      {
        *a5 = v27 - v79;
        return 0LL;
      }
    }
    v25 = v15;
    v26 = (__int64)&v15[-a1] % 0x20000;
    do
    {
      v16 = v25 + 1;
      v57 = (unsigned __int16)word_1400179D0[v25[1]] ^ (unsigned __int16)XpressHashFunction[*v25] ^ (unsigned __int64)(unsigned __int16)word_140017BD0[v25[2]];
      v58 = *(_QWORD *)&a6[8 * v57];
      *(_QWORD *)&a6[8 * v57] = v25;
      v25 = v16;
      *(_QWORD *)&a6[8 * v26 + 0x40000] = v58;
      v31 = (unsigned __int64)(v19 - 5);
      v26 = ((_DWORD)v26 + 1) & 0x1FFFF;
    }
    while ( v16 < v60 );
LABEL_25:
    v18 = (unsigned __int8 *)v80;
LABEL_26:
    v28 = v20;
    if ( (unsigned __int64)v15 >= XpressCallback )
    {
      if ( (unsigned __int64)v15 >= v31 )
      {
        v12 = v73;
        v19 = v74;
        v11 = v64;
        goto LABEL_14;
      }
      XpressCallback = RtlpMakeXpressCallback(v75, v31, v15);
    }
    v16 = (unsigned __int8 *)*(unsigned int *)v15;
    v29 = *(unsigned __int8 **)&a6[8 * ((__int64)&v15[-a1] % 0x20000) + 0x40000];
    if ( v29 + 0x10000 <= v15 )
      goto LABEL_28;
    v32 = *(_DWORD *)v29 ^ (unsigned int)v16;
    if ( v32 )
    {
      if ( (v32 & 0xFFFFFF) == 0 )
        goto LABEL_33;
      v29 = *(unsigned __int8 **)&a6[8 * ((__int64)&v29[-a1] % 0x20000) + 0x40000];
      if ( v29 + 0x10000 > v15 )
      {
        v52 = *(_DWORD *)v29 ^ (unsigned int)v16;
        if ( !v52 )
        {
          v35 = v15;
          v78 = v15 - 0x10000;
          v36 = 3LL;
          v34 = 0LL;
          goto LABEL_44;
        }
        if ( (v52 & 0xFFFFFF) == 0 )
          goto LABEL_33;
        v29 = *(unsigned __int8 **)&a6[8 * ((__int64)&v29[-a1] % 0x20000) + 0x40000];
        if ( v29 + 0x10000 > v15 )
        {
          v59 = *(_DWORD *)v29 ^ (unsigned int)v16;
          if ( !v59 )
          {
            v35 = v15;
            v78 = v15 - 0x10000;
            v36 = 3LL;
            v34 = 0LL;
            goto LABEL_44;
          }
          if ( (v59 & 0xFFFFFF) == 0 )
          {
LABEL_33:
            v33 = v15 - 0x10000;
            v61 = v29;
            v78 = v15 - 0x10000;
            v34 = 0LL;
            v35 = v15;
            v36 = 3LL;
            goto LABEL_34;
          }
        }
      }
LABEL_28:
      ++*(_DWORD *)&a6[4 * (unsigned __int8)v16 + 1339936];
      *v20++ = (unsigned __int8)v16;
      ++v15;
      v30 = 2 * v22;
      goto LABEL_29;
    }
    v35 = v15;
    v78 = v15 - 0x10000;
    v36 = 3LL;
    v34 = 0LL;
    while ( 1 )
    {
LABEL_44:
      v45 = v15 + 4;
      for ( i = v29 + 4; ; i += 8 )
      {
        v71 = v45;
        v70 = v45;
        v69 = v45;
        v68 = v45;
        v67 = v45;
        v66 = v45;
        v72 = v45 + 32;
        if ( (unsigned __int64)(v45 + 32) >= v64 )
          break;
        v47 = *(_DWORD *)v45;
        v48 = *i;
        if ( *(_DWORD *)v45 != *i )
          goto LABEL_50;
        v47 = *((_DWORD *)v45 + 1);
        v45 += 4;
        v49 = i[1];
        if ( v47 != v49 )
        {
          ++i;
LABEL_49:
          LOBYTE(v48) = v49;
LABEL_50:
          if ( (_BYTE)v47 == (_BYTE)v48 )
          {
            if ( v45[1] == *((_BYTE *)i + 1) )
            {
              if ( v45[2] == *((_BYTE *)i + 2) )
              {
                v45 += 3;
                i = (_DWORD *)((char *)i + 3);
              }
              else
              {
                v45 += 2;
                i = (_DWORD *)((char *)i + 2);
              }
            }
            else
            {
              ++v45;
              i = (_DWORD *)((char *)i + 1);
            }
          }
          goto LABEL_51;
        }
        v49 = i[2];
        v45 = v66 + 8;
        v47 = *((_DWORD *)v66 + 2);
        if ( v47 != v49 )
        {
          i += 2;
          goto LABEL_49;
        }
        v49 = i[3];
        v45 = v67 + 12;
        v47 = *((_DWORD *)v67 + 3);
        if ( v47 != v49 )
        {
          i += 3;
          goto LABEL_49;
        }
        v49 = i[4];
        v45 = v68 + 16;
        v47 = *((_DWORD *)v68 + 4);
        if ( v47 != v49 )
        {
          i += 4;
          goto LABEL_49;
        }
        v49 = i[5];
        v45 = v69 + 20;
        v47 = *((_DWORD *)v69 + 5);
        if ( v47 != v49 )
        {
          i += 5;
          goto LABEL_49;
        }
        v49 = i[6];
        v45 = v70 + 24;
        v47 = *((_DWORD *)v70 + 6);
        if ( v47 != v49 )
        {
          i += 6;
          goto LABEL_49;
        }
        v49 = i[7];
        v45 = v71 + 28;
        v47 = *((_DWORD *)v71 + 7);
        if ( v47 != v49 )
        {
          i += 7;
          goto LABEL_49;
        }
        v45 = v72;
      }
      for ( ; (unsigned __int64)v45 < v64; i = (_DWORD *)((char *)i + 1) )
      {
        if ( *v45 != *(_BYTE *)i )
          break;
        ++v45;
      }
LABEL_51:
      v50 = v45 - v35;
      v51 = (unsigned __int8 *)i;
      v29 = (unsigned __int8 *)i - v50;
      if ( v50 > v36 )
      {
        v61 = v29;
        v36 = v50;
        v37 = v29;
        if ( v51 > v35 )
        {
LABEL_36:
          v15 = &v35[v36];
          v38 = v35 - v37;
          if ( (unsigned __int64)(v35 - v37) > 0x1000 && v36 == 3 )
          {
            v15 = v35;
            goto LABEL_28;
          }
          if ( v38 >= 0x100 )
            v39 = *((unsigned __int8 *)XpressHighBitIndexTable + (v38 >> 8)) + 8LL;
          else
            v39 = *((unsigned __int8 *)XpressHighBitIndexTable + v38);
          v62 += v39;
          v16 = v20 + 1;
          v40 = v38 - (1LL << v39);
          v41 = 16 * v39;
          v42 = v36 - 3;
          if ( v36 - 3 >= 0xF )
          {
            v43 = v41 + 15;
            *v20 = v43;
            v44 = v20 + 2;
            if ( v36 - 18 >= 0xFF )
            {
              *v16 = -1;
              if ( v42 >= 0x10000 )
              {
                *((_DWORD *)v28 + 1) = v42;
                *v44 = 0;
                v55 = 7LL;
                v44 = v28 + 8;
              }
              else
              {
                *v44 = v42;
                v55 = 3LL;
                v44 = v28 + 4;
              }
            }
            else
            {
              *v16 = v36 - 18;
              v55 = 1LL;
            }
            v63 += v55;
          }
          else
          {
            v43 = v42 + v41;
            *v20 = v43;
            v44 = v20 + 1;
          }
          ++*(_DWORD *)&a6[4 * v43 + 1340960];
          v30 = 2 * v22 + 1;
          *v44 = v40;
          v20 = (unsigned __int8 *)(v44 + 1);
LABEL_29:
          if ( v22 > 0 )
          {
            v22 = v30;
            v31 = (unsigned __int64)v60;
            goto LABEL_25;
          }
          v53 = (int *)v80;
          v18 = v20;
          v22 = 1;
          v80 = (char *)v20;
          v20 += 4;
          *v53 = v30;
          v31 = (unsigned __int64)v60;
          goto LABEL_26;
        }
      }
      else
      {
        v34 += v50;
      }
      v33 = v78;
      do
      {
        if ( (unsigned __int64)++v34 >= 0xC )
        {
LABEL_35:
          v37 = v61;
          goto LABEL_36;
        }
LABEL_34:
        v29 = *(unsigned __int8 **)&a6[8 * ((__int64)&v29[-a1] % 0x20000) + 0x40000];
        if ( v29 <= v33 )
          goto LABEL_35;
      }
      while ( (_DWORD)v16 != *(_DWORD *)v29 );
      v15 = v35;
    }
  }
  return 3221225659LL;
}
