/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x1403F23B0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1403F22F0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x14061AAD0 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1403F38F0 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        int *a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  int *v9; // r12
  unsigned __int8 *v10; // r8
  unsigned __int64 v11; // r15
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rbp
  unsigned int v15; // ecx
  _BYTE *v16; // rsi
  unsigned __int8 *v17; // rbx
  unsigned __int64 v18; // r13
  char v19; // al
  int v20; // r14d
  char v21; // al
  unsigned int v22; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 *v28; // r8
  __int64 v29; // rcx
  int *v30; // rdi
  __int64 v31; // r11
  unsigned __int8 *v32; // r12
  __int64 v33; // rbp
  __int64 v34; // rbp
  __int64 v35; // r11
  unsigned __int64 v36; // r9
  int v37; // eax
  int v38; // ecx
  int v39; // edi
  __int64 v40; // rcx
  unsigned __int8 *v41; // rdx
  __int64 v42; // rdx
  unsigned __int8 *v43; // rcx
  unsigned __int64 v44; // rcx
  __int16 v45; // ax
  int v46; // eax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  char v49; // dl
  unsigned __int64 v50; // rdx
  unsigned __int8 *v51; // rcx
  __int64 v52; // rax
  int *v53; // rcx
  __int64 v54; // rax
  __int64 XpressCallback; // rax
  unsigned __int64 v56; // [rsp+20h] [rbp-88h]
  char *v57; // [rsp+28h] [rbp-80h]
  unsigned __int64 v58; // [rsp+30h] [rbp-78h]
  unsigned __int64 v59; // [rsp+38h] [rbp-70h]
  _QWORD v60[2]; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-50h]
  int v62; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v63; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v64; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v66; // [rsp+C8h] [rbp+20h]
  int *v67; // [rsp+D8h] [rbp+30h]

  v9 = a3;
  v10 = &a1[a2];
  v62 = 0;
  v11 = (unsigned __int64)v9 + a4;
  v58 = (unsigned __int64)v10;
  v59 = v11;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v13 = (unsigned __int64)(v10 - 38);
  v14 = v11 - 41;
  v56 = (unsigned __int64)(v10 - 38);
  v57 = 0LL;
  if ( !a7 || (v15 = a9, a9 > a2) )
    v15 = a2;
  v16 = (char *)v9 + 5;
  v17 = a1 + 1;
  v18 = (unsigned __int64)&a1[v15];
  v60[1] = a8;
  v19 = *a1;
  v60[0] = a7;
  v20 = 2;
  if ( v13 < v18 )
    v18 = (unsigned __int64)(v10 - 38);
  v61 = v15;
  v63 = v18;
  *((_BYTE *)v9 + 4) = v19;
  if ( a2 < 0x40 )
    goto LABEL_8;
  v9 = a3;
  v67 = a3;
  memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
  memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
  while ( 1 )
  {
    while ( 1 )
    {
      v26 = v17[2] + 4LL * v17[1];
      v27 = *v17 + 2 * v26;
      v28 = *(unsigned __int8 **)(a6 + 8 * v27);
      *(_QWORD *)(a6 + 8 * v27) = v17;
      v29 = *v17;
      if ( *(_WORD *)v28 == *(_WORD *)v17 && v28[2] == v17[2] && v17 - v28 < 0x2000 )
        break;
      *v16++ = v29;
      ++v17;
      v30 = (int *)v16;
      if ( v20 <= 0 )
      {
        v16 += 4;
        *v9 = 2 * v20;
        v20 = 1;
        if ( (unsigned __int64)v17 >= v18 )
        {
          v9 = v30;
          if ( (unsigned __int64)v17 >= v13 )
            goto LABEL_100;
          XpressCallback = RtlpMakeXpressCallback(v60, v13, v17);
          v13 = v56;
          v18 = XpressCallback;
          v63 = XpressCallback;
        }
        v67 = v30;
        v9 = v30;
        if ( (unsigned __int64)v16 >= v14 )
        {
          v10 = (unsigned __int8 *)v58;
          v11 = v59;
          goto LABEL_8;
        }
      }
      else
      {
        v20 *= 2;
      }
    }
    v31 = v17[3];
    v32 = v17;
    v33 = v28[3];
    if ( (_BYTE)v31 != (_BYTE)v33 )
    {
      v40 = v29 + 2 * v26;
      v41 = *(unsigned __int8 **)(a6 + 8 * (v40 + v31) + 22448);
      *(_QWORD *)(a6 + 8 * (v40 + v33) + 22448) = v28;
      if ( v17 - v41 >= 0x2000 || (v48 = *(unsigned int *)v17, (_DWORD)v48 != *(_DWORD *)v41) )
      {
        v36 = v56;
        v17 += 3;
        LOWORD(v28) = (_WORD)v28 + 3;
        goto LABEL_44;
      }
      v28 = v41;
      *(_QWORD *)(a6 + 8 * (v40 + (v48 >> 24)) + 22448) = v17;
    }
    v34 = v28[4];
    v35 = v17[4];
    if ( (_BYTE)v35 != (_BYTE)v34 )
    {
      v42 = 2
          * ((unsigned __int8)__ROR1__(v17[1] ^ __ROL1__(v17[3] + *v17, 3), 1)
           + 4LL * (unsigned __int8)__ROL1__(*v17 ^ __ROR1__(v17[2] + v17[1] + 97, 1), 3));
      v43 = *(unsigned __int8 **)(a6 + 8 * (v42 + v35) + 22448);
      *(_QWORD *)(a6 + 8 * (v42 + v34) + 22448) = v28;
      if ( v17 - v43 >= 0x2000 || *(_DWORD *)v17 != *(_DWORD *)v43 || (v52 = v17[4], (_BYTE)v52 != v43[4]) || v17 == v43 )
      {
        LOWORD(v28) = (_WORD)v28 + 4;
        v17 += 4;
        v36 = v56;
LABEL_43:
        v18 = v63;
        goto LABEL_44;
      }
      v28 = v43;
      *(_QWORD *)(a6 + 8 * (v42 + v52) + 22448) = v17;
    }
    v64 = v17[5];
    v66 = v28[5];
    if ( v64 == v66 )
      goto LABEL_28;
    v50 = 2
        * ((v17[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v17, v17[4]))
         + 4
         * ((unsigned __int8)__ROR1__(v17[1] ^ __ROL1__(v17[3], 3), 1)
          + (unsigned __int64)(unsigned __int8)__ROL1__(v17[4] ^ (__ROR1__(*v17, 1) + 69), 3)));
    v51 = *(unsigned __int8 **)(a6 + 8 * (v50 + v64) + 22448);
    *(_QWORD *)(a6 + 8 * (v50 + v66) + 22448) = v28;
    if ( v17 - v51 >= 0x2000
      || *(_DWORD *)v17 != *(_DWORD *)v51
      || v17[4] != v51[4]
      || (v54 = v17[5], (_BYTE)v54 != v51[5])
      || v17 == v51 )
    {
      v36 = v56;
      v17 += 5;
      LOWORD(v28) = (_WORD)v28 + 5;
      goto LABEL_43;
    }
    v28 = v51;
    *(_QWORD *)(a6 + 8 * (v50 + v54) + 22448) = v17;
LABEL_28:
    v36 = v56;
    v17 += 6;
    for ( v28 += 6; ; v28 += 32 )
    {
      if ( (unsigned __int64)v17 >= v56 )
      {
        for ( ; (unsigned __int64)v17 < v58; ++v28 )
        {
          if ( *v17 != *v28 )
            break;
          ++v17;
        }
        goto LABEL_43;
      }
      v37 = *(_DWORD *)v17;
      v38 = *(_DWORD *)v28;
      if ( *(_DWORD *)v17 != *(_DWORD *)v28 )
        break;
      v38 = *((_DWORD *)v17 + 1);
      v39 = *((_DWORD *)v28 + 1);
      if ( v38 != v39 )
      {
        v17 += 4;
        v28 += 4;
LABEL_52:
        LOBYTE(v37) = v38;
        LOBYTE(v38) = v39;
        break;
      }
      v38 = *((_DWORD *)v17 + 2);
      v39 = *((_DWORD *)v28 + 2);
      if ( v38 != v39 )
      {
        v17 += 8;
        v28 += 8;
        goto LABEL_52;
      }
      v38 = *((_DWORD *)v17 + 3);
      v39 = *((_DWORD *)v28 + 3);
      if ( v38 != v39 )
      {
        v17 += 12;
        v28 += 12;
        goto LABEL_52;
      }
      v38 = *((_DWORD *)v17 + 4);
      v39 = *((_DWORD *)v28 + 4);
      if ( v38 != v39 )
      {
        v17 += 16;
        v28 += 16;
        goto LABEL_52;
      }
      v38 = *((_DWORD *)v17 + 5);
      v39 = *((_DWORD *)v28 + 5);
      if ( v38 != v39 )
      {
        v17 += 20;
        v28 += 20;
        goto LABEL_52;
      }
      v38 = *((_DWORD *)v17 + 6);
      v39 = *((_DWORD *)v28 + 6);
      if ( v38 != v39 )
      {
        v17 += 24;
        v28 += 24;
        goto LABEL_52;
      }
      v38 = *((_DWORD *)v17 + 7);
      v39 = *((_DWORD *)v28 + 7);
      if ( v38 != v39 )
      {
        v17 += 28;
        v28 += 28;
        goto LABEL_52;
      }
      v17 += 32;
    }
    if ( (_BYTE)v37 != (_BYTE)v38 )
      goto LABEL_43;
    if ( v17[1] != v28[1] )
    {
      ++v17;
      LOWORD(v28) = (_WORD)v28 + 1;
      goto LABEL_43;
    }
    v18 = v63;
    if ( v17[2] == v28[2] )
    {
      v17 += 3;
      LOWORD(v28) = (_WORD)v28 + 3;
    }
    else
    {
      v17 += 2;
      LOWORD(v28) = (_WORD)v28 + 2;
    }
LABEL_44:
    v44 = v17 - v32 - 3;
    v45 = 8 * ((_WORD)v17 - (_WORD)v28) - 8;
    if ( v44 < 7 )
    {
      *(_WORD *)v16 = v44 + v45;
      v16 += 2;
      goto LABEL_46;
    }
    *(_WORD *)v16 = v45 | 7;
    v16 += 2;
    v47 = v17 - v32 - 10;
    if ( !v57 )
    {
      v57 = v16;
      if ( v47 < 0xF )
      {
        *v16++ = v47;
        goto LABEL_46;
      }
      *v16++ = 15;
LABEL_77:
      if ( (unsigned __int64)(v17 - v32 - 25) >= 0xFF )
      {
        *v16 = -1;
        if ( v44 >= 0x10000 )
        {
          *(_WORD *)(v16 + 1) = 0;
          *(_DWORD *)(v16 + 3) = v44;
          v16 += 7;
        }
        else
        {
          *(_WORD *)(v16 + 1) = v44;
          v16 += 3;
        }
      }
      else
      {
        *v16++ = (_BYTE)v17 - (_BYTE)v32 - 25;
      }
      goto LABEL_46;
    }
    v49 = *v57;
    if ( v47 >= 0xF )
    {
      *v57 = v49 | 0xF0;
      v57 = 0LL;
      goto LABEL_77;
    }
    *v57 = v49 | (16 * v47);
    v57 = 0LL;
LABEL_46:
    v46 = 2 * v20 + 1;
    if ( v20 <= 0 )
    {
      v53 = v67;
      v20 = 1;
      v67 = (int *)v16;
      v16 += 4;
      *v53 = v46;
    }
    else
    {
      v20 = 2 * v20 + 1;
    }
    if ( (unsigned __int64)v17 < v18 )
      goto LABEL_49;
    if ( (unsigned __int64)v17 >= v36 )
      break;
    v18 = RtlpMakeXpressCallback(v60, v36, v17);
    v63 = v18;
LABEL_49:
    v13 = v56;
    v14 = v59 - 41;
    v9 = v67;
    if ( (unsigned __int64)v16 >= v59 - 41 )
      goto LABEL_100;
  }
  v9 = v67;
LABEL_100:
  v10 = (unsigned __int8 *)v58;
  v11 = v59;
LABEL_8:
  if ( v17 >= v10 )
  {
LABEL_13:
    if ( (unsigned __int64)v16 >= v11 )
      return 3221225507LL;
    for ( ; v20 > 0; v20 = 2 * v20 + 1 )
      ;
    v22 = (_DWORD)v16 - (_DWORD)a3;
    *v9 = 2 * v20 + 1;
    *a5 = v22;
    if ( v22 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v16 < v11 )
    {
      v21 = *v17++;
      *v16++ = v21;
      if ( v20 <= 0 )
      {
        *v9 = 2 * v20;
        v20 = 1;
        v9 = (int *)v16;
        v16 += 4;
      }
      else
      {
        v20 *= 2;
      }
      if ( v17 >= v10 )
        goto LABEL_13;
    }
    return 3221225507LL;
  }
}
