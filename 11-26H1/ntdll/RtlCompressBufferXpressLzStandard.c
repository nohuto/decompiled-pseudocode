/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x1800B6440
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1800B6380 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800B7400 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        int *a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6)
{
  int *v6; // r12
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r11
  _BYTE *v10; // rsi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r15
  int v13; // r14d
  unsigned __int8 *v14; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int8 *v19; // r8
  __int64 v20; // rcx
  int *v21; // rdi
  __int64 v22; // r10
  unsigned __int8 *v23; // r12
  __int64 v24; // r11
  __int64 v25; // r13
  unsigned __int64 v26; // r9
  int v27; // eax
  int v28; // ecx
  int v29; // edi
  __int64 v30; // rdx
  unsigned __int8 *v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int8 *v34; // rcx
  unsigned __int64 v35; // rcx
  __int16 v36; // ax
  int v37; // eax
  unsigned __int64 v38; // rax
  char v39; // al
  unsigned __int64 v41; // rdx
  unsigned __int8 *v42; // rcx
  char v43; // dl
  __int64 v44; // rax
  int *v45; // rcx
  __int64 v46; // rax
  __int64 XpressCallback; // rax
  unsigned int v48; // esi
  unsigned __int64 v49; // [rsp+20h] [rbp-68h]
  unsigned __int64 v50; // [rsp+28h] [rbp-60h]
  _QWORD v51[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v52; // [rsp+40h] [rbp-48h]
  int v53; // [rsp+44h] [rbp-44h]
  unsigned __int64 v54; // [rsp+90h] [rbp+8h]
  int *v56; // [rsp+B8h] [rbp+30h]
  unsigned __int64 v58; // [rsp+C0h] [rbp+38h]
  char *v60; // [rsp+C8h] [rbp+40h]

  v6 = a3;
  v7 = (unsigned __int64)&a1[a2];
  v8 = (unsigned __int64)v6 + a4;
  v53 = 0;
  v49 = v7;
  v50 = v8;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v9 = v7 - 38;
  v10 = (char *)v6 + 5;
  v11 = v7 - 38;
  v51[0] = 0LL;
  if ( v7 - 38 >= v7 )
    v11 = (unsigned __int64)&a1[a2];
  v51[1] = 0LL;
  v52 = a2;
  v12 = v8 - 41;
  v13 = 2;
  v54 = v11;
  v14 = a1 + 1;
  v58 = v7 - 38;
  v60 = 0LL;
  *((_BYTE *)v6 + 4) = *a1;
  if ( a2 < 0x40 )
    goto LABEL_53;
  v6 = a3;
  v56 = a3;
  memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
  memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
  while ( 1 )
  {
    while ( 1 )
    {
      v17 = v14[2] + 4LL * v14[1];
      v18 = *v14 + 2 * v17;
      v19 = *(unsigned __int8 **)(a6 + 8 * v18);
      *(_QWORD *)(a6 + 8 * v18) = v14;
      v20 = *v14;
      if ( *(_WORD *)v19 == *(_WORD *)v14 && v19[2] == v14[2] && v14 - v19 < 0x2000 )
        break;
      *v10++ = v20;
      ++v14;
      v21 = (int *)v10;
      if ( v13 <= 0 )
      {
        v10 += 4;
        *v6 = 2 * v13;
        v13 = 1;
        if ( (unsigned __int64)v14 >= v11 )
        {
          v6 = v21;
          if ( (unsigned __int64)v14 >= v9 )
            goto LABEL_52;
          XpressCallback = RtlpMakeXpressCallback(v51, v9, v14);
          v9 = v58;
          v11 = XpressCallback;
          v54 = XpressCallback;
        }
        v56 = v21;
        v6 = v21;
        if ( (unsigned __int64)v10 >= v12 )
          goto LABEL_52;
      }
      else
      {
        v13 *= 2;
      }
    }
    v22 = v19[3];
    v23 = v14;
    v24 = v14[3];
    if ( (_BYTE)v24 != (_BYTE)v22 )
    {
      v30 = v20 + 2 * v17;
      v31 = *(unsigned __int8 **)(a6 + 8 * (v30 + v24) + 22448);
      *(_QWORD *)(a6 + 8 * (v30 + v22) + 22448) = v19;
      if ( v14 - v31 >= 0x2000 || (v32 = *(unsigned int *)v14, (_DWORD)v32 != *(_DWORD *)v31) )
      {
        v26 = v58;
        v14 += 3;
        LOWORD(v19) = (_WORD)v19 + 3;
        goto LABEL_33;
      }
      v19 = v31;
      *(_QWORD *)(a6 + 8 * (v30 + (v32 >> 24)) + 22448) = v14;
    }
    v25 = v19[4];
    if ( v14[4] != (_BYTE)v25 )
    {
      v33 = 2
          * ((unsigned __int8)__ROR1__(v14[1] ^ __ROL1__(v14[3] + *v14, 3), 1)
           + 4LL * (unsigned __int8)__ROL1__(*v14 ^ __ROR1__(v14[2] + v14[1] + 97, 1), 3));
      v34 = *(unsigned __int8 **)(a6 + 8 * (v33 + v14[4]) + 22448);
      *(_QWORD *)(a6 + 8 * (v33 + v25) + 22448) = v19;
      if ( v14 - v34 >= 0x2000 || *(_DWORD *)v14 != *(_DWORD *)v34 || (v44 = v14[4], (_BYTE)v44 != v34[4]) || v14 == v34 )
      {
        v26 = v58;
        v14 += 4;
        LOWORD(v19) = (_WORD)v19 + 4;
LABEL_32:
        v11 = v54;
        goto LABEL_33;
      }
      v19 = v34;
      *(_QWORD *)(a6 + 8 * (v33 + v44) + 22448) = v14;
    }
    if ( v14[5] == v19[5] )
      goto LABEL_15;
    v41 = 2
        * ((v14[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v14, v14[4]))
         + 4
         * ((unsigned __int8)__ROR1__(v14[1] ^ __ROL1__(v14[3], 3), 1)
          + (unsigned __int64)(unsigned __int8)__ROL1__(v14[4] ^ (__ROR1__(*v14, 1) + 69), 3)));
    v42 = *(unsigned __int8 **)(a6 + 8 * (v41 + v14[5]) + 22448);
    *(_QWORD *)(a6 + 8 * (v41 + v19[5]) + 22448) = v19;
    if ( v14 - v42 >= 0x2000
      || *(_DWORD *)v14 != *(_DWORD *)v42
      || v14[4] != v42[4]
      || (v46 = v14[5], (_BYTE)v46 != v42[5])
      || v14 == v42 )
    {
      v26 = v58;
      v14 += 5;
      LOWORD(v19) = (_WORD)v19 + 5;
      goto LABEL_32;
    }
    v19 = v42;
    *(_QWORD *)(a6 + 8 * (v41 + v46) + 22448) = v14;
LABEL_15:
    v26 = v58;
    v14 += 6;
    for ( v19 += 6; ; v19 += 32 )
    {
      if ( (unsigned __int64)v14 >= v58 )
      {
        for ( ; (unsigned __int64)v14 < v49; ++v19 )
        {
          if ( *v14 != *v19 )
            break;
          ++v14;
        }
        goto LABEL_32;
      }
      v27 = *(_DWORD *)v14;
      v28 = *(_DWORD *)v19;
      if ( *(_DWORD *)v14 != *(_DWORD *)v19 )
        break;
      v28 = *((_DWORD *)v19 + 1);
      v29 = *((_DWORD *)v14 + 1);
      if ( v29 != v28 )
      {
        v14 += 4;
        v19 += 4;
LABEL_41:
        LOBYTE(v27) = v29;
        break;
      }
      v28 = *((_DWORD *)v19 + 2);
      v29 = *((_DWORD *)v14 + 2);
      if ( v29 != v28 )
      {
        v14 += 8;
        v19 += 8;
        goto LABEL_41;
      }
      v28 = *((_DWORD *)v19 + 3);
      v29 = *((_DWORD *)v14 + 3);
      if ( v29 != v28 )
      {
        v14 += 12;
        v19 += 12;
        goto LABEL_41;
      }
      v28 = *((_DWORD *)v19 + 4);
      v29 = *((_DWORD *)v14 + 4);
      if ( v29 != v28 )
      {
        v14 += 16;
        v19 += 16;
        goto LABEL_41;
      }
      v28 = *((_DWORD *)v19 + 5);
      v29 = *((_DWORD *)v14 + 5);
      if ( v29 != v28 )
      {
        v14 += 20;
        v19 += 20;
        goto LABEL_41;
      }
      v28 = *((_DWORD *)v19 + 6);
      v29 = *((_DWORD *)v14 + 6);
      if ( v29 != v28 )
      {
        v14 += 24;
        v19 += 24;
        goto LABEL_41;
      }
      v28 = *((_DWORD *)v19 + 7);
      v29 = *((_DWORD *)v14 + 7);
      if ( v29 != v28 )
      {
        v14 += 28;
        v19 += 28;
        goto LABEL_41;
      }
      v14 += 32;
    }
    if ( (_BYTE)v27 != (_BYTE)v28 )
      goto LABEL_32;
    if ( v14[1] != v19[1] )
    {
      ++v14;
      LOWORD(v19) = (_WORD)v19 + 1;
      goto LABEL_32;
    }
    v11 = v54;
    if ( v14[2] == v19[2] )
    {
      v14 += 3;
      LOWORD(v19) = (_WORD)v19 + 3;
    }
    else
    {
      v14 += 2;
      LOWORD(v19) = (_WORD)v19 + 2;
    }
LABEL_33:
    v35 = v14 - v23 - 3;
    v36 = 8 * ((_WORD)v14 - (_WORD)v19) - 8;
    if ( v35 < 7 )
    {
      *(_WORD *)v10 = v35 + v36;
      v10 += 2;
      goto LABEL_35;
    }
    *(_WORD *)v10 = v36 | 7;
    v10 += 2;
    v38 = v14 - v23 - 10;
    if ( !v60 )
    {
      v60 = v10;
      if ( v38 < 0xF )
      {
        *v10++ = v38;
        goto LABEL_35;
      }
      *v10++ = 15;
LABEL_73:
      if ( (unsigned __int64)(v14 - v23 - 25) >= 0xFF )
      {
        *v10 = -1;
        if ( v35 >= 0x10000 )
        {
          *(_WORD *)(v10 + 1) = 0;
          *(_DWORD *)(v10 + 3) = v35;
          v10 += 7;
        }
        else
        {
          *(_WORD *)(v10 + 1) = v35;
          v10 += 3;
        }
      }
      else
      {
        *v10++ = (_BYTE)v14 - (_BYTE)v23 - 25;
      }
      goto LABEL_35;
    }
    v43 = *v60;
    if ( v38 >= 0xF )
    {
      *v60 = v43 | 0xF0;
      v60 = 0LL;
      goto LABEL_73;
    }
    *v60 = v43 | (16 * v38);
    v60 = 0LL;
LABEL_35:
    v37 = 2 * v13 + 1;
    if ( v13 <= 0 )
    {
      v45 = v56;
      v13 = 1;
      v56 = (int *)v10;
      v10 += 4;
      *v45 = v37;
    }
    else
    {
      v13 = 2 * v13 + 1;
    }
    if ( (unsigned __int64)v14 < v11 )
      goto LABEL_38;
    if ( (unsigned __int64)v14 >= v26 )
      break;
    v11 = RtlpMakeXpressCallback(v51, v26, v14);
    v54 = v11;
LABEL_38:
    v9 = v58;
    v12 = v50 - 41;
    v6 = v56;
    if ( (unsigned __int64)v10 >= v50 - 41 )
      goto LABEL_52;
  }
  v6 = v56;
LABEL_52:
  v7 = v49;
  v8 = v50;
LABEL_53:
  if ( (unsigned __int64)v14 >= v7 )
  {
LABEL_58:
    if ( (unsigned __int64)v10 >= v8 )
      return 3221225507LL;
    for ( ; v13 > 0; v13 = 2 * v13 + 1 )
      ;
    v48 = (_DWORD)v10 - (_DWORD)a3;
    *v6 = 2 * v13 + 1;
    *a5 = v48;
    if ( v48 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v10 < v8 )
    {
      v39 = *v14++;
      *v10++ = v39;
      if ( v13 <= 0 )
      {
        *v6 = 2 * v13;
        v13 = 1;
        v6 = (int *)v10;
        v10 += 4;
      }
      else
      {
        v13 *= 2;
      }
      if ( (unsigned __int64)v14 >= v7 )
        goto LABEL_58;
    }
    return 3221225507LL;
  }
}
