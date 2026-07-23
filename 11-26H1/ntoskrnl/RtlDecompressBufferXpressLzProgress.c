/*
 * XREFs of RtlDecompressBufferXpressLzProgress @ 0x140626F60
 * Callers:
 *     RtlDecompressBufferProgress @ 0x14061AD08 (RtlDecompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1403F38F0 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressLzProgress(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // rbx
  _BYTE *v8; // r11
  unsigned int v9; // esi
  _BYTE *v10; // rdi
  unsigned __int64 v11; // rbp
  _BYTE *v12; // r10
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  _BYTE *v16; // r13
  int v17; // esi
  unsigned __int64 XpressCallback; // rax
  int v19; // r14d
  bool v20; // sf
  unsigned __int64 v21; // rcx
  char v22; // r15
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r15
  signed __int64 v28; // rdx
  _BYTE *v29; // rsi
  signed __int64 v30; // r15
  unsigned __int64 v31; // rcx
  char v32; // al
  _DWORD *v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  char v37; // r15
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // r15
  signed __int64 v42; // rdx
  _BYTE *v43; // rsi
  unsigned __int64 v44; // rcx
  char v45; // al
  unsigned __int64 v46; // rax
  int v47; // eax
  unsigned __int64 v48; // r10
  __int16 v50; // ax
  unsigned __int64 v51; // rdx
  char v52; // cl
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  _BYTE *v59; // [rsp+20h] [rbp-58h]
  unsigned __int64 v60; // [rsp+28h] [rbp-50h]
  _QWORD v61[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v62; // [rsp+40h] [rbp-38h]
  int v63; // [rsp+44h] [rbp-34h]

  v63 = 0;
  v7 = a3;
  v8 = a1;
  v9 = 4096;
  if ( a4 < 5 )
    return 3221226050LL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = &a1[a2];
  v59 = v12;
  v13 = v11 - 86;
  v14 = (unsigned __int64)(v12 - 352);
  v60 = (unsigned __int64)(v12 - 352);
  if ( !a6 || a2 < 0x1000 )
    v9 = a2;
  v15 = (unsigned __int64)&a1[v9];
  v61[0] = a6;
  v61[1] = a7;
  v62 = v9;
  if ( v14 < v15 )
    v15 = (unsigned __int64)(v12 - 352);
  v16 = 0LL;
LABEL_8:
  v17 = *(_DWORD *)v7;
  v7 += 4;
  if ( (unsigned __int64)v7 < v13 )
  {
    if ( (unsigned __int64)v10 >= v15 )
    {
      if ( (unsigned __int64)v10 >= v14 )
      {
LABEL_123:
        v48 = (unsigned __int64)v59;
        goto LABEL_124;
      }
      XpressCallback = RtlpMakeXpressCallback((__int64)v61, v14, (__int64)v10);
      v14 = v60;
      v15 = XpressCallback;
      v8 = a1;
    }
    v19 = 2 * v17 + 1;
    if ( v17 >= 0 )
    {
      while ( 1 )
      {
        if ( v19 < 0 )
        {
          *v10++ = *v7++;
          goto LABEL_20;
        }
        v20 = (v19 & 0x40000000) != 0;
        v19 *= 2;
        if ( v20 )
        {
          *(_WORD *)v10 = *(_WORD *)v7;
          v10 += 2;
          v7 += 2;
          goto LABEL_20;
        }
        v20 = (v19 & 0x40000000) != 0;
        v19 *= 2;
        *(_DWORD *)v10 = *(_DWORD *)v7;
        if ( v20 )
        {
          v10 += 3;
          v7 += 3;
          goto LABEL_20;
        }
        v10 += 4;
        v7 += 4;
        v20 = (v19 & 0x40000000) != 0;
        v19 *= 2;
        if ( v20 )
          goto LABEL_20;
LABEL_54:
        v19 *= 2;
      }
    }
    while ( 1 )
    {
      v21 = *(unsigned __int16 *)v7;
      v7 += 2;
      v22 = v21;
      v23 = (v21 >> 3) + 1;
      v24 = v22 & 7;
      if ( v24 == 7 )
      {
        if ( v16 )
        {
          v25 = (unsigned __int64)(unsigned __int8)*v16 >> 4;
          v16 = 0LL;
        }
        else
        {
          v16 = v7++;
          v25 = *v16 & 0xF;
        }
        if ( v25 == 15 )
        {
          if ( (unsigned __int64)(v7 + 7) >= v13 )
            goto LABEL_67;
          v26 = (unsigned __int8)*v7++;
          if ( v26 == 255 )
          {
            v27 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v27 )
            {
              v27 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v27 < 0x16 || &v10[v27 + 3] < v10 )
              return 3221226050LL;
            v26 = v27 - 22;
          }
          v25 = v26 + 15;
        }
        v24 = v25 + 7;
      }
      v28 = v24;
      v29 = &v10[-v23];
      v30 = v24 + 3;
      if ( &v10[-v23] < v8 )
        return 3221226050LL;
      if ( v23 >= 4 )
      {
LABEL_44:
        *(_DWORD *)v10 = *(_DWORD *)v29;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v29 + 1);
        if ( v30 >= 9 )
        {
          v10 += 8;
          v33 = v29 + 8;
          for ( v30 -= 8LL; ; v30 -= 16LL )
          {
            if ( (unsigned __int64)v10 >= v15 )
            {
              if ( (unsigned __int64)v10 >= v14 )
                goto LABEL_113;
              v34 = RtlpMakeXpressCallback((__int64)v61, v14, (__int64)v10);
              v14 = v60;
              v15 = v34;
            }
            *(_DWORD *)v10 = *v33;
            *((_DWORD *)v10 + 1) = v33[1];
            *((_DWORD *)v10 + 2) = v33[2];
            *((_DWORD *)v10 + 3) = v33[3];
            if ( v30 < 17 )
              break;
            v10 += 16;
            v33 += 4;
          }
          v8 = a1;
        }
        v10 += v30;
        goto LABEL_53;
      }
      *v10 = *v29;
      v31 = v23 - 1;
      if ( v31 )
      {
        v10[1] = v29[1];
        if ( v31 == 1 )
        {
          v30 -= 2LL;
          v10 += 2;
          goto LABEL_43;
        }
        v32 = v29[2];
      }
      else
      {
        v10[1] = *v29;
        v32 = *v29;
      }
      v10[2] = v32;
      v30 = v28;
      v10 += 3;
LABEL_43:
      if ( v30 )
        goto LABEL_44;
LABEL_53:
      if ( v19 >= 0 )
        goto LABEL_54;
LABEL_20:
      v19 *= 2;
      if ( !v19 )
        goto LABEL_8;
    }
  }
  while ( 1 )
  {
    if ( (unsigned __int64)v10 >= v15 )
    {
      if ( (unsigned __int64)v10 >= v14 )
        goto LABEL_123;
      v35 = RtlpMakeXpressCallback((__int64)v61, v14, (__int64)v10);
      v14 = v60;
      v15 = v35;
      v8 = a1;
    }
    v19 = 2 * v17 + 1;
    if ( v17 < 0 )
      break;
    while ( v19 >= 0 )
    {
      v20 = (v19 & 0x40000000) != 0;
      v19 *= 2;
      if ( v20 )
      {
        if ( (unsigned __int64)(v7 + 1) >= v11 )
          return 3221226050LL;
        *(_WORD *)v10 = *(_WORD *)v7;
        v10 += 2;
        v7 += 2;
        goto LABEL_110;
      }
      v20 = (v19 & 0x40000000) != 0;
      v19 *= 2;
      if ( v20 )
      {
        if ( (unsigned __int64)(v7 + 2) >= v11 )
          return 3221226050LL;
        *(_WORD *)v10 = *(_WORD *)v7;
        v10[2] = v7[2];
        v10 += 3;
        v7 += 3;
        goto LABEL_110;
      }
      v19 *= 2;
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v47 = *(_DWORD *)v7;
      v7 += 4;
      *(_DWORD *)v10 = v47;
      v10 += 4;
      if ( v19 < 0 )
        goto LABEL_110;
LABEL_97:
      v19 *= 2;
    }
    if ( (unsigned __int64)v7 >= v11 )
      return 3221226050LL;
    *v10++ = *v7++;
LABEL_110:
    v19 *= 2;
    if ( v19 )
      break;
    if ( (unsigned __int64)(v7 + 3) >= v11 )
      return 3221226050LL;
    v17 = *(_DWORD *)v7;
    v7 += 4;
  }
  if ( v7 == (_BYTE *)v11 )
  {
    v48 = (unsigned __int64)v59;
    while ( 1 )
    {
LABEL_118:
      if ( v19 >= 0 )
      {
        v19 *= 2;
        goto LABEL_125;
      }
LABEL_120:
      while ( 1 )
      {
        v19 *= 2;
        if ( v19 )
          break;
        if ( (unsigned __int64)(v7 + 3) >= v11 )
          return 3221226050LL;
        v17 = *(_DWORD *)v7;
        v7 += 4;
LABEL_124:
        v19 = 2 * v17 + 1;
        if ( v17 < 0 )
          break;
LABEL_125:
        while ( v19 >= 0 )
        {
          v19 *= 2;
          if ( (unsigned __int64)(v7 + 2) > v11 || (unsigned __int64)(v10 + 2) > v48 )
            return 3221226050LL;
          v50 = *(_WORD *)v7;
          v7 += 2;
          *(_WORD *)v10 = v50;
          v10 += 2;
          if ( v19 < 0 )
            goto LABEL_120;
          v19 *= 2;
        }
        if ( (unsigned __int64)v7 >= v11 || (unsigned __int64)v10 >= v48 )
          return 3221226050LL;
        *v10++ = *v7++;
      }
      if ( v7 == (_BYTE *)v11 )
        break;
      if ( (unsigned __int64)(v7 + 1) >= v11 )
      {
        if ( (unsigned __int64)v10 < v48 )
          return 3221226050LL;
        break;
      }
      v51 = *(unsigned __int16 *)v7;
      v7 += 2;
      v52 = v51;
      v53 = (v51 >> 3) + 1;
      v54 = v52 & 7;
      if ( v54 == 7 )
      {
        if ( v16 )
        {
          v55 = (unsigned __int64)(unsigned __int8)*v16 >> 4;
          v16 = 0LL;
        }
        else
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v16 = v7++;
          v55 = *v16 & 0xF;
        }
        if ( v55 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v56 = (unsigned __int8)*v7++;
          if ( v56 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v57 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v57 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v57 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v57 < 0x16 || &v10[v57 + 3] < v10 )
              return 3221226050LL;
            v56 = v57 - 22;
          }
          v55 = v56 + 15;
        }
        v54 = v55 + 7;
      }
      v58 = v54 + 3;
      if ( &v10[-v53] < v8 || (unsigned __int64)&v10[v58] > v48 )
        return 3221226050LL;
      qmemcpy(v10, &v10[-v53], v58);
      v10 += v58;
    }
    *a5 = (_DWORD)v10 - (_DWORD)v8;
    return 0LL;
  }
  if ( (unsigned __int64)(v7 + 1) < v11 )
  {
    v36 = *(unsigned __int16 *)v7;
    v7 += 2;
    v37 = v36;
    v23 = (v36 >> 3) + 1;
    v38 = v37 & 7;
    if ( v38 == 7 )
    {
      if ( v16 )
      {
        v39 = (unsigned __int64)(unsigned __int8)*v16 >> 4;
        v16 = 0LL;
      }
      else
      {
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        v16 = v7++;
        v39 = *v16 & 0xF;
      }
      if ( v39 == 15 )
      {
LABEL_67:
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        v40 = (unsigned __int8)*v7++;
        if ( v40 == 255 )
        {
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v41 = *(unsigned __int16 *)v7;
          v7 += 2;
          if ( !v41 )
          {
            if ( (unsigned __int64)(v7 + 3) >= v11 )
              return 3221226050LL;
            v41 = *(unsigned int *)v7;
            v7 += 4;
          }
          if ( v41 < 0x16 || &v10[v41 + 3] < v10 )
            return 3221226050LL;
          v40 = v41 - 22;
        }
        v39 = v40 + 15;
      }
      v38 = v39 + 7;
    }
    v42 = v38;
    v43 = &v10[-v23];
    v30 = v38 + 3;
    if ( &v10[-v23] < v8 )
      return 3221226050LL;
    if ( v23 >= 4 )
    {
LABEL_87:
      *(_DWORD *)v10 = *(_DWORD *)v43;
      *((_DWORD *)v10 + 1) = *((_DWORD *)v43 + 1);
      if ( v30 >= 9 )
      {
        v10 += 8;
        v33 = v43 + 8;
        for ( v30 -= 8LL; ; v30 -= 16LL )
        {
          if ( (unsigned __int64)v10 >= v15 )
          {
            if ( (unsigned __int64)v10 >= v14 )
            {
LABEL_113:
              v48 = (unsigned __int64)v59;
              if ( &v10[v30] <= v59 )
              {
                v8 = a1;
                qmemcpy(v10, v33, v30);
                v10 += v30;
                goto LABEL_118;
              }
              return 3221226050LL;
            }
            v46 = RtlpMakeXpressCallback((__int64)v61, v14, (__int64)v10);
            v14 = v60;
            v15 = v46;
          }
          *(_DWORD *)v10 = *v33;
          *((_DWORD *)v10 + 1) = v33[1];
          *((_DWORD *)v10 + 2) = v33[2];
          *((_DWORD *)v10 + 3) = v33[3];
          if ( v30 < 17 )
            break;
          v10 += 16;
          v33 += 4;
        }
        v8 = a1;
      }
      v10 += v30;
LABEL_96:
      if ( v19 < 0 )
        goto LABEL_110;
      goto LABEL_97;
    }
    *v10 = *v43;
    v44 = v23 - 1;
    if ( v44 )
    {
      v10[1] = v43[1];
      if ( v44 == 1 )
      {
        v30 -= 2LL;
        v10 += 2;
        goto LABEL_86;
      }
      v45 = v43[2];
    }
    else
    {
      v10[1] = *v43;
      v45 = *v43;
    }
    v10[2] = v45;
    v30 = v42;
    v10 += 3;
LABEL_86:
    if ( !v30 )
      goto LABEL_96;
    goto LABEL_87;
  }
  v48 = (unsigned __int64)v59;
  if ( v10 >= v59 )
    goto LABEL_118;
  return 3221226050LL;
}
