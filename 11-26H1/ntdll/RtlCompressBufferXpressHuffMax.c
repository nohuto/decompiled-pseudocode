/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x1800B5AB0
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1800B59F0 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800B7400 (RtlpMakeXpressCallback.c)
 *     XpressBuildHuffmanEncodings @ 0x1800B7450 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x1800B7890 (XpressDoHuffmanPass.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6)
{
  __int64 v7; // r12
  unsigned __int8 *v10; // rbp
  __int64 v11; // r15
  unsigned __int64 j; // r13
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // rcx
  _BYTE *v15; // r14
  unsigned __int64 v16; // rax
  int v17; // r15d
  _DWORD *v18; // rsi
  unsigned __int64 v19; // r11
  char v20; // al
  char v21; // al
  int v22; // esi
  __int64 v23; // rax
  unsigned __int8 *v25; // rcx
  __int64 v26; // r10
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  _WORD *v29; // rsi
  int v30; // r10d
  unsigned __int8 *v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // r8
  unsigned __int8 *v34; // r12
  _DWORD *i; // rdx
  int v36; // ecx
  __int64 v37; // r9
  unsigned __int64 v38; // rbx
  unsigned __int8 *v39; // rax
  unsigned __int8 *v40; // rcx
  unsigned __int8 *v41; // rbx
  unsigned __int8 *v42; // r11
  unsigned __int8 *v43; // r10
  int v44; // eax
  int v45; // r9d
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  char v49; // cl
  unsigned __int64 v50; // rax
  unsigned __int8 v51; // cl
  _WORD *v52; // r14
  int v53; // eax
  char v54; // r9
  __int64 v55; // rax
  int *v56; // rcx
  int v57; // eax
  int v58; // eax
  unsigned __int8 *v59; // [rsp+30h] [rbp-C8h]
  char *v60; // [rsp+38h] [rbp-C0h]
  unsigned __int8 *v61; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v62; // [rsp+48h] [rbp-B0h]
  __int64 v63; // [rsp+50h] [rbp-A8h]
  __int64 v64; // [rsp+58h] [rbp-A0h]
  unsigned __int64 XpressCallback; // [rsp+60h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-88h]
  unsigned __int8 *v67; // [rsp+78h] [rbp-80h]
  unsigned __int64 v68; // [rsp+80h] [rbp-78h]
  __int64 v69; // [rsp+88h] [rbp-70h]
  _QWORD v70[2]; // [rsp+90h] [rbp-68h] BYREF
  unsigned int v71; // [rsp+A0h] [rbp-58h]
  int v72; // [rsp+A4h] [rbp-54h]
  int v74; // [rsp+108h] [rbp+10h]
  int v75; // [rsp+110h] [rbp+18h]
  int v76; // [rsp+118h] [rbp+20h]
  char *v77; // [rsp+128h] [rbp+30h]
  unsigned __int64 v79; // [rsp+130h] [rbp+38h]
  unsigned __int64 v81; // [rsp+138h] [rbp+40h]

  v75 = a3;
  v7 = 0LL;
  v10 = (unsigned __int8 *)a1;
  v72 = 0;
  v11 = a2;
  v69 = a2;
  j = a2 + a1;
  v79 = j;
  v68 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  if ( a1 > 0x10001 )
  {
    memset_thunk_772440563353939046(a6, 0, 0x40000uLL);
    v13 = v10;
    v66 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v70[0] = 0LL;
    v70[1] = 0LL;
    v71 = a2;
    v62 = 0LL;
    while ( 1 )
    {
      v63 = 0LL;
      v64 = 0LL;
      memset_thunk_772440563353939046(a6 + 1339936, 0, 0x800uLL);
      v14 = (unsigned __int8 *)j;
      v15 = a6 + 1342244;
      v60 = a6 + 1342240;
      if ( (unsigned __int64)(v13 + 0x10000) <= j )
        v14 = v13 + 0x10000;
      v77 = a6 + 1342244;
      v16 = (unsigned __int64)&v13[v11];
      v67 = v14;
      v17 = 1;
      v18 = a6 + 1342240;
      v74 = 1;
      v19 = (unsigned __int64)(v14 - 5);
      v61 = v14 - 5;
      if ( (unsigned __int64)(v14 - 5) < v16 )
        v16 = (unsigned __int64)(v14 - 5);
      XpressCallback = v16;
      if ( v13 == v10 )
      {
        v17 = 2;
        v74 = 2;
        ++*(_DWORD *)&a6[4 * *v13 + 1339936];
        v20 = *v13++;
        *v15 = v20;
        v15 = a6 + 1342245;
        v77 = a6 + 1342245;
      }
      if ( (unsigned __int64)v13 < v19 )
        break;
LABEL_11:
      while ( v13 < v14 )
      {
        ++*(_DWORD *)&a6[4 * *v13 + 1339936];
        v21 = *v13++;
        *v15++ = v21;
        if ( v17 <= 0 )
        {
          *v18 = 2 * v17;
          v17 = 1;
          v18 = v15;
          v15 += 4;
        }
        else
        {
          v17 *= 2;
        }
      }
      for ( ; v17 > 0; v17 = 2 * v17 + 1 )
        ;
      *v18 = 2 * v17 + 1;
      if ( (unsigned __int64)v13 < j )
      {
        v22 = 0;
      }
      else
      {
        ++*((_DWORD *)a6 + 335240);
        v22 = 1;
      }
      if ( v64 + 4 * ((unsigned __int64)(v7 + XpressBuildHuffmanEncodings(a6 + 1310720) + 31) >> 5) + v66 + 258 >= v68 )
        return 3221225507LL;
      v23 = XpressDoHuffmanPass((int)a6 + 1310720, (int)a6 + 1342240, (_DWORD)v15, v66, v22);
      v10 = (unsigned __int8 *)a1;
      v11 = v69;
      v7 = 0LL;
      v66 = v23;
      if ( v22 )
      {
        *a5 = v23 - v75;
        return 0LL;
      }
    }
    v25 = v13;
    v26 = (v13 - v10) % 0x20000;
    do
    {
      v27 = (unsigned __int16)word_18018EA20[v25[1]] ^ (unsigned __int16)XpressHashFunction[*v25] ^ (unsigned __int64)(unsigned __int16)word_18018EC20[v25[2]];
      v28 = *(_QWORD *)&a6[8 * v27];
      *(_QWORD *)&a6[8 * v27] = v25++;
      *(_QWORD *)&a6[8 * v26 + 0x40000] = v28;
      v26 = ((_DWORD)v26 + 1) & 0x1FFFF;
    }
    while ( (unsigned __int64)v25 < v19 );
    while ( 1 )
    {
      v29 = v15;
      if ( (unsigned __int64)v13 >= XpressCallback )
      {
        if ( (unsigned __int64)v13 >= v19 )
        {
          v7 = v63;
          v18 = v60;
          v14 = v67;
          goto LABEL_11;
        }
        XpressCallback = RtlpMakeXpressCallback(v70, v19, v13);
      }
      v30 = *(_DWORD *)v13;
      v76 = *(_DWORD *)v13;
      v31 = *(unsigned __int8 **)&a6[8 * ((v13 - v10) % 0x20000) + 0x40000];
      if ( v31 + 0x10000 <= v13 )
        goto LABEL_67;
      v32 = *(_DWORD *)v31 ^ v30;
      if ( v32 )
      {
        if ( (v32 & 0xFFFFFF) == 0 )
          goto LABEL_71;
        v31 = *(unsigned __int8 **)&a6[8 * ((v31 - v10) % 0x20000) + 0x40000];
        if ( v31 + 0x10000 <= v13 )
          goto LABEL_67;
        v57 = *(_DWORD *)v31 ^ v30;
        if ( v57 )
        {
          if ( (v57 & 0xFFFFFF) == 0 )
            goto LABEL_71;
          v31 = *(unsigned __int8 **)&a6[8 * ((v31 - v10) % 0x20000) + 0x40000];
          if ( v31 + 0x10000 <= v13 )
            goto LABEL_67;
          v58 = *(_DWORD *)v31 ^ v30;
          if ( v58 )
          {
            if ( (v58 & 0xFFFFFF) != 0 )
              goto LABEL_67;
LABEL_71:
            v40 = v13 - 0x10000;
            v62 = v31;
            v59 = v13 - 0x10000;
            v37 = 3LL;
            v33 = 0LL;
            v81 = 3LL;
            v34 = v13;
            while ( 1 )
            {
              v31 = *(unsigned __int8 **)&a6[8 * ((v31 - v10) % 0x20000) + 0x40000];
              if ( v31 <= v40 )
                goto LABEL_57;
              if ( v30 == *(_DWORD *)v31 )
                break;
LABEL_40:
              v30 = v76;
              ++v33;
              v29 = v15;
              if ( v33 >= 0xC )
                goto LABEL_57;
            }
            v13 = v34;
            goto LABEL_44;
          }
        }
        v81 = 3LL;
        v59 = v13 - 0x10000;
        v34 = v13;
        v33 = 0LL;
      }
      else
      {
        v81 = 3LL;
        v59 = v13 - 0x10000;
        v33 = 0LL;
        v34 = v13;
      }
LABEL_44:
      v41 = v13 + 4;
      for ( i = v31 + 4; ; i += 8 )
      {
        v42 = v41 + 32;
        v43 = v41;
        if ( (unsigned __int64)(v41 + 32) >= v79 )
        {
          for ( j = v79; (unsigned __int64)v41 < v79; i = (_DWORD *)((char *)i + 1) )
          {
            if ( *v41 != *(_BYTE *)i )
              break;
            ++v41;
          }
          goto LABEL_37;
        }
        v44 = *(_DWORD *)v41;
        v36 = *i;
        if ( *(_DWORD *)v41 != *i )
          goto LABEL_35;
        v44 = *((_DWORD *)v41 + 1);
        v41 += 4;
        v45 = i[1];
        if ( v44 != v45 )
          break;
        v44 = *((_DWORD *)v43 + 2);
        v41 = v43 + 8;
        v45 = i[2];
        if ( v44 != v45 )
        {
          i += 2;
          goto LABEL_34;
        }
        v44 = *((_DWORD *)v43 + 3);
        v41 = v43 + 12;
        v45 = i[3];
        if ( v44 != v45 )
        {
          i += 3;
          goto LABEL_34;
        }
        v44 = *((_DWORD *)v43 + 4);
        v41 = v43 + 16;
        v45 = i[4];
        if ( v44 != v45 )
        {
          i += 4;
          goto LABEL_34;
        }
        v44 = *((_DWORD *)v43 + 5);
        v41 = v43 + 20;
        v45 = i[5];
        if ( v44 != v45 )
        {
          i += 5;
          goto LABEL_34;
        }
        v44 = *((_DWORD *)v43 + 6);
        v41 = v43 + 24;
        v45 = i[6];
        if ( v44 != v45 )
        {
          i += 6;
          goto LABEL_34;
        }
        v44 = *((_DWORD *)v43 + 7);
        v41 = v43 + 28;
        v45 = i[7];
        if ( v44 != v45 )
        {
          i += 7;
          goto LABEL_34;
        }
        v41 = v42;
      }
      ++i;
LABEL_34:
      LOBYTE(v36) = v45;
LABEL_35:
      if ( (_BYTE)v44 != (_BYTE)v36 )
      {
LABEL_36:
        j = v79;
        goto LABEL_37;
      }
      if ( v41[1] != *((_BYTE *)i + 1) )
      {
        ++v41;
        i = (_DWORD *)((char *)i + 1);
        goto LABEL_36;
      }
      j = v79;
      if ( v41[2] == *((_BYTE *)i + 2) )
      {
        v41 += 3;
        i = (_DWORD *)((char *)i + 3);
      }
      else
      {
        v41 += 2;
        i = (_DWORD *)((char *)i + 2);
      }
LABEL_37:
      v37 = v81;
      v38 = v41 - v34;
      v39 = (unsigned __int8 *)i;
      v31 = (unsigned __int8 *)i - v38;
      if ( v38 <= v81 )
      {
        v33 += v38;
LABEL_39:
        v10 = (unsigned __int8 *)a1;
        v40 = v59;
        goto LABEL_40;
      }
      v81 = v38;
      v37 = v38;
      v62 = v31;
      if ( v39 <= v34 )
        goto LABEL_39;
      LOBYTE(v30) = v76;
      v29 = v15;
LABEL_57:
      v13 = &v34[v37];
      v46 = v34 - v62;
      if ( v37 == 3 && v46 > 0x1000 )
      {
        v15 = v77;
        v13 = v34;
        v10 = (unsigned __int8 *)a1;
        v17 = v74;
LABEL_67:
        v19 = (unsigned __int64)v61;
        ++v13;
        ++*(_DWORD *)&a6[4 * (unsigned __int8)v30 + 1339936];
        *v15++ = v30;
        v77 = v15;
        v53 = 2 * v17;
        if ( v17 <= 0 )
        {
LABEL_89:
          v56 = (int *)v60;
          v17 = 1;
          v60 = v15;
          v15 += 4;
          v74 = 1;
          v77 = v15;
          *v56 = v53;
        }
        else
        {
          v17 *= 2;
          v74 = v53;
        }
      }
      else
      {
        if ( v46 >= 0x100 )
          v47 = XpressHighBitIndexTable[v46 >> 8] + 8LL;
        else
          v47 = XpressHighBitIndexTable[v46];
        v63 += v47;
        v48 = v46 - (1LL << v47);
        v49 = 16 * v47;
        v50 = v37 - 3;
        if ( (unsigned __int64)(v37 - 3) < 0xF )
        {
          v51 = v50 + v49;
          v52 = v77 + 1;
          *v77 = v51;
          goto LABEL_62;
        }
        v51 = v49 + 15;
        v54 = v37 - 18;
        *v77 = v51;
        v52 = v29 + 1;
        if ( v50 - 15 < 0xFF )
        {
          v77[1] = v54;
          v55 = 1LL;
LABEL_74:
          v64 += v55;
          goto LABEL_62;
        }
        v77[1] = -1;
        if ( v50 >= 0x10000 )
        {
          *v52 = 0;
          v52 = v29 + 4;
          *((_DWORD *)v29 + 1) = v50;
          v55 = 7LL;
          goto LABEL_74;
        }
        *v52 = v50;
        v64 += 3LL;
        v52 = v29 + 2;
LABEL_62:
        v19 = (unsigned __int64)v61;
        v10 = (unsigned __int8 *)a1;
        ++*(_DWORD *)&a6[4 * v51 + 1340960];
        *v52 = v48;
        v53 = 2 * v74 + 1;
        v15 = v52 + 1;
        v77 = v15;
        if ( v74 <= 0 )
          goto LABEL_89;
        v17 = 2 * v74 + 1;
        v74 = v17;
      }
    }
  }
  return 3221225659LL;
}
