/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x1800B6BA0
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x1800B59F0 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800B7400 (RtlpMakeXpressCallback.c)
 *     XpressBuildHuffmanEncodings @ 0x1800B7450 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x1800B7890 (XpressDoHuffmanPass.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int8 *v8; // rdi
  void *v9; // r9
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // r8
  int v14; // esi
  unsigned __int8 *v15; // rcx
  unsigned __int8 *v16; // r11
  unsigned __int8 *v17; // rbx
  unsigned __int64 v18; // r15
  char v19; // al
  unsigned __int8 v20; // al
  int v21; // esi
  __int64 v22; // rax
  bool v23; // zf
  unsigned __int8 *v25; // rbp
  unsigned __int8 *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 *v29; // r9
  __int64 v30; // r11
  __int64 v31; // r8
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // rbp
  __int64 v35; // r15
  unsigned __int8 *i; // r9
  int v37; // eax
  int v38; // ecx
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  char v42; // cl
  unsigned __int64 v43; // r8
  _BYTE *v44; // rax
  unsigned __int8 v45; // cl
  _WORD *v46; // rbx
  int v47; // eax
  __int64 XpressCallback; // rax
  __int64 v49; // rdx
  unsigned __int8 *v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // edx
  int v53; // r8d
  int v54; // edx
  int v55; // r8d
  int v56; // edx
  int v57; // r8d
  int v58; // edx
  int v59; // r8d
  int v60; // edx
  int v61; // r8d
  int v62; // edx
  int v63; // r8d
  __int64 v64; // rdx
  unsigned __int8 *v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // r8
  unsigned __int8 *v68; // rcx
  __int64 v69; // rax
  int *v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // [rsp+30h] [rbp-A8h]
  __int64 v73; // [rsp+38h] [rbp-A0h]
  __int64 v74; // [rsp+40h] [rbp-98h]
  unsigned __int64 v75; // [rsp+48h] [rbp-90h]
  __int64 v76; // [rsp+50h] [rbp-88h]
  unsigned __int8 *v77; // [rsp+70h] [rbp-68h]
  unsigned __int64 v78; // [rsp+78h] [rbp-60h]
  __int64 v79; // [rsp+80h] [rbp-58h]
  _QWORD v80[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v81; // [rsp+98h] [rbp-40h]
  int v82; // [rsp+9Ch] [rbp-3Ch]
  int v84; // [rsp+F0h] [rbp+18h]
  unsigned __int8 *v86; // [rsp+110h] [rbp+38h]
  unsigned __int64 v88; // [rsp+118h] [rbp+40h]

  v84 = a3;
  v6 = a2;
  v82 = 0;
  v79 = a2;
  v78 = a3 + a4;
  v7 = a2 + a1;
  v75 = v7;
  if ( a4 >= 0x12C )
  {
    v76 = a3;
    v80[0] = 0LL;
    memset64((void *)a6, a1, 0xAF6uLL);
    v80[1] = 0LL;
    v81 = a2;
    memset64((void *)(a6 + 22448), a1, 0x12EEuLL);
    v8 = (unsigned __int8 *)a1;
    v9 = (void *)(a6 + 90432);
    v10 = a3;
    while ( 1 )
    {
      v73 = 0LL;
      v74 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      memset_thunk_772440563353939046(v9, 0, 0x800uLL);
      v13 = (unsigned __int64)&v8[v6];
      v14 = 1;
      v15 = v8 + 0x10000;
      v16 = (unsigned __int8 *)(a6 + 92736);
      v86 = (unsigned __int8 *)(a6 + 92736);
      if ( (unsigned __int64)(v8 + 0x10000) > v7 )
        v15 = (unsigned __int8 *)v7;
      v17 = (unsigned __int8 *)(a6 + 92740);
      v77 = v15;
      v18 = (unsigned __int64)(v15 - 40);
      v72 = (unsigned __int64)(v15 - 40);
      if ( (unsigned __int64)(v15 - 40) < v13 )
        v13 = (unsigned __int64)(v15 - 40);
      v88 = v13;
      if ( v8 == (unsigned __int8 *)a1 )
      {
        v14 = 2;
        ++*(_DWORD *)(a6 + 4LL * *v8 + 90432);
        v19 = *v8++;
        *(_BYTE *)(a6 + 92740) = v19;
        v17 = (unsigned __int8 *)(a6 + 92741);
      }
      if ( (unsigned __int64)v8 >= v18 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v25 = v17;
          v26 = v8;
          v27 = v8[2] + 4LL * v8[1];
          v28 = *v8 + 2 * v27;
          v29 = *(unsigned __int8 **)(a6 + 8 * v28);
          *(_QWORD *)(a6 + 8 * v28) = v8;
          if ( *(_WORD *)v29 == *(_WORD *)v8 && v29[2] == v8[2] && v8 - v29 < 0x10000 )
            break;
LABEL_47:
          v8 = v26 + 1;
          ++*(_DWORD *)(a6 + 4LL * *v26 + 90432);
          *v17++ = *v26;
          if ( v14 <= 0 )
          {
            *(_DWORD *)v16 = 2 * v14;
            v14 = 1;
            v16 = v17;
            v86 = v17;
            v17 += 4;
            if ( (unsigned __int64)v8 >= v13 )
            {
              if ( (unsigned __int64)v8 >= v18 )
              {
                v11 = v73;
                goto LABEL_82;
              }
LABEL_46:
              XpressCallback = RtlpMakeXpressCallback(v80, v18, v8);
              v16 = v86;
              v13 = XpressCallback;
              v88 = XpressCallback;
            }
          }
          else
          {
            v14 *= 2;
          }
        }
        v30 = v8[3];
        v31 = v29[3];
        if ( (_BYTE)v30 != (_BYTE)v31 )
        {
          v49 = *v8 + 2 * v27;
          v50 = *(unsigned __int8 **)(a6 + 8 * (v49 + v30) + 22448);
          *(_QWORD *)(a6 + 8 * (v49 + v31) + 22448) = v29;
          if ( v8 - v50 >= 0x10000 || (v51 = *(unsigned int *)v8, (_DWORD)v51 != *(_DWORD *)v50) )
          {
            v8 += 3;
            i = v29 + 3;
            goto LABEL_37;
          }
          v29 = v50;
          *(_QWORD *)(a6 + 8 * (v49 + (v51 >> 24)) + 22448) = v8;
        }
        v32 = v29[4];
        v33 = v8[4];
        if ( (_BYTE)v33 != (_BYTE)v32 )
        {
          v64 = 2
              * ((unsigned __int8)__ROR1__(v8[1] ^ __ROL1__(v8[3] + *v8, 3), 1)
               + 4LL * (unsigned __int8)__ROL1__(*v8 ^ __ROR1__(v8[2] + v8[1] + 97, 1), 3));
          v65 = *(unsigned __int8 **)(a6 + 8 * (v64 + v33) + 22448);
          *(_QWORD *)(a6 + 8 * (v64 + v32) + 22448) = v29;
          if ( v8 - v65 >= 0x10000
            || *(_DWORD *)v8 != *(_DWORD *)v65
            || (v66 = v8[4], (_BYTE)v66 != v65[4])
            || v8 == v65 )
          {
            v8 += 4;
            i = v29 + 4;
LABEL_36:
            v25 = v17;
            goto LABEL_37;
          }
          v29 = v65;
          *(_QWORD *)(a6 + 8 * (v64 + v66) + 22448) = v8;
        }
        v34 = v29[5];
        v35 = v8[5];
        if ( (_BYTE)v35 != (_BYTE)v34 )
        {
          v67 = 2
              * ((v8[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v8, v8[4]))
               + 4
               * ((unsigned __int8)__ROR1__(v8[1] ^ __ROL1__(v8[3], 3), 1)
                + (unsigned __int64)(unsigned __int8)__ROL1__(v8[4] ^ (__ROR1__(*v8, 1) + 69), 3)));
          v68 = *(unsigned __int8 **)(a6 + 8 * (v67 + v35) + 22448);
          *(_QWORD *)(a6 + 8 * (v67 + v34) + 22448) = v29;
          if ( v8 - v68 >= 0x10000
            || *(_DWORD *)v8 != *(_DWORD *)v68
            || v8[4] != v68[4]
            || (v69 = v8[5], (_BYTE)v69 != v68[5])
            || v8 == v68 )
          {
            v8 += 5;
            i = v29 + 5;
            goto LABEL_36;
          }
          v29 = v68;
          *(_QWORD *)(a6 + 8 * (v67 + v69) + 22448) = v8;
        }
        v8 += 6;
        for ( i = v29 + 6; ; i += 32 )
        {
          if ( (unsigned __int64)v8 >= v75 - 40 )
          {
            for ( ; (unsigned __int64)v8 < v75; ++i )
            {
              if ( *v8 != *i )
                break;
              ++v8;
            }
            goto LABEL_36;
          }
          v37 = *(_DWORD *)i;
          v38 = *(_DWORD *)v8;
          if ( *(_DWORD *)v8 != *(_DWORD *)i )
            goto LABEL_33;
          v52 = *((_DWORD *)i + 1);
          v53 = *((_DWORD *)v8 + 1);
          if ( v53 != v52 )
          {
            v8 += 4;
            i += 4;
            goto LABEL_88;
          }
          v52 = *((_DWORD *)i + 2);
          v53 = *((_DWORD *)v8 + 2);
          if ( v53 != v52 )
          {
            v8 += 8;
            i += 8;
LABEL_88:
            LOBYTE(v38) = v53;
            LOBYTE(v37) = v52;
            goto LABEL_33;
          }
          v54 = *((_DWORD *)i + 3);
          v55 = *((_DWORD *)v8 + 3);
          if ( v55 != v54 )
          {
            v8 += 12;
            LOBYTE(v38) = v55;
            i += 12;
            LOBYTE(v37) = v54;
            goto LABEL_33;
          }
          v56 = *((_DWORD *)i + 4);
          v57 = *((_DWORD *)v8 + 4);
          if ( v57 != v56 )
          {
            v8 += 16;
            LOBYTE(v38) = v57;
            i += 16;
            LOBYTE(v37) = v56;
            goto LABEL_33;
          }
          v58 = *((_DWORD *)i + 5);
          v59 = *((_DWORD *)v8 + 5);
          if ( v59 != v58 )
          {
            v8 += 20;
            LOBYTE(v38) = v59;
            i += 20;
            LOBYTE(v37) = v58;
            goto LABEL_33;
          }
          v60 = *((_DWORD *)i + 6);
          v61 = *((_DWORD *)v8 + 6);
          if ( v61 != v60 )
          {
            v8 += 24;
            LOBYTE(v38) = v61;
            i += 24;
            LOBYTE(v37) = v60;
            goto LABEL_33;
          }
          v62 = *((_DWORD *)i + 7);
          v63 = *((_DWORD *)v8 + 7);
          if ( v63 != v62 )
            break;
          v8 += 32;
        }
        v8 += 28;
        LOBYTE(v38) = v63;
        i += 28;
        LOBYTE(v37) = v62;
LABEL_33:
        if ( (_BYTE)v38 != (_BYTE)v37 )
          goto LABEL_36;
        if ( v8[1] != i[1] )
        {
          ++v8;
          ++i;
          goto LABEL_36;
        }
        v25 = v17;
        if ( v8[2] == i[2] )
        {
          v8 += 3;
          i += 3;
        }
        else
        {
          v8 += 2;
          i += 2;
        }
LABEL_37:
        v39 = v8 - i;
        if ( v8 - v26 == 3 && v39 > 0x1000 )
        {
          v13 = v88;
          v16 = v86;
          v18 = v72;
          goto LABEL_47;
        }
        if ( v39 >= 0x100 )
          v40 = XpressHighBitIndexTable[v39 >> 8] + 8LL;
        else
          v40 = XpressHighBitIndexTable[v39];
        v11 = v40 + v73;
        v41 = v39 - (1LL << v40);
        v42 = 16 * v40;
        v43 = v8 - v26 - 3;
        v73 = v11;
        v44 = v17 + 1;
        if ( v43 < 0xF )
        {
          v45 = v43 + v42;
          *v17 = v45;
          v46 = v17 + 1;
          goto LABEL_42;
        }
        v45 = v42 + 15;
        *v17 = v45;
        v46 = v25 + 2;
        if ( (unsigned __int64)(v8 - v26 - 18) < 0xFF )
        {
          *v44 = (_BYTE)v8 - (_BYTE)v26 - 18;
          v71 = 1LL;
          goto LABEL_86;
        }
        *v44 = -1;
        if ( v43 >= 0x10000 )
        {
          *((_DWORD *)v25 + 1) = v43;
          *v46 = 0;
          v46 = v25 + 8;
          v71 = 7LL;
LABEL_86:
          v74 += v71;
        }
        else
        {
          *v46 = v43;
          v74 += 3LL;
          v46 = v25 + 4;
        }
LABEL_42:
        ++*(_DWORD *)(a6 + 4LL * v45 + 91456);
        v47 = 2 * v14 + 1;
        *v46 = v41;
        v17 = (unsigned __int8 *)(v46 + 1);
        if ( v14 <= 0 )
        {
          v70 = (int *)v86;
          v14 = 1;
          v86 = v17;
          v17 += 4;
          *v70 = v47;
        }
        else
        {
          v14 = 2 * v14 + 1;
        }
        v13 = v88;
        v16 = v86;
        v18 = v72;
      }
      while ( (unsigned __int64)v8 < v88 );
      if ( (unsigned __int64)v8 < v72 )
        goto LABEL_46;
LABEL_82:
      v12 = v74;
      v10 = v76;
      v15 = v77;
LABEL_10:
      while ( v8 < v15 )
      {
        ++*(_DWORD *)(a6 + 4LL * *v8 + 90432);
        v20 = *v8++;
        *v17++ = v20;
        if ( v14 <= 0 )
        {
          *(_DWORD *)v16 = 2 * v14;
          v14 = 1;
          v16 = v17;
          v17 += 4;
        }
        else
        {
          v14 *= 2;
        }
      }
      for ( ; v14 > 0; v14 = 2 * v14 + 1 )
        ;
      *(_DWORD *)v16 = 2 * v14 + 1;
      if ( (unsigned __int64)v8 < v75 )
      {
        v21 = 0;
      }
      else
      {
        ++*(_DWORD *)(a6 + 91456);
        v21 = 1;
      }
      if ( v10 + v12 + 4 * ((unsigned __int64)(v11 + XpressBuildHuffmanEncodings(a6 + 61216) + 31) >> 5) + 258 >= v78 )
        return 3221225507LL;
      v22 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v17, v10, v21);
      v7 = v75;
      v9 = (void *)(a6 + 90432);
      v23 = v21 == 0;
      v76 = v22;
      v6 = v79;
      v10 = v22;
      if ( !v23 )
      {
        *a5 = v22 - v84;
        return 0LL;
      }
    }
  }
  return 3221225507LL;
}
