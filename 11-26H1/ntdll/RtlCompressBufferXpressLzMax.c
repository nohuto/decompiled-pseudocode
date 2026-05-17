/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1801509A0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1800B8E60 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800B9EE0 (RtlpMakeXpressCallback.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6)
{
  unsigned __int64 v7; // r13
  unsigned __int8 *v9; // r14
  __int64 v10; // r12
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // al
  char *v14; // r15
  __int16 v15; // r13
  int v16; // esi
  char *v17; // rdi
  _BYTE *v18; // rbx
  unsigned __int8 *v19; // r11
  _DWORD *v20; // r9
  unsigned __int64 v21; // r10
  char *v22; // rax
  __int64 v23; // r13
  char *v24; // r9
  unsigned __int8 *v25; // r8
  unsigned __int64 v26; // rdx
  char *v27; // r13
  unsigned __int64 XpressCallback; // rax
  char *v29; // r8
  int v30; // r11d
  unsigned __int64 v31; // rdx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // rcx
  char *v36; // rbp
  char *v37; // rax
  unsigned __int64 v38; // r8
  __int64 v39; // r10
  unsigned __int64 v40; // r14
  __int16 v41; // cx
  _DWORD *v42; // rcx
  _DWORD *v43; // r13
  _DWORD *v44; // r11
  int v45; // eax
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // r12
  unsigned __int64 v51; // rax
  _BYTE *v52; // rdx
  char v53; // dl
  char v54; // al
  unsigned int v55; // ebx
  _DWORD *v56; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v57; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v59; // [rsp+38h] [rbp-B0h]
  unsigned __int8 *v60; // [rsp+40h] [rbp-A8h]
  __int16 v61; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v62; // [rsp+50h] [rbp-98h]
  __int64 v63; // [rsp+58h] [rbp-90h]
  char *v64; // [rsp+78h] [rbp-70h]
  char *v65; // [rsp+80h] [rbp-68h]
  _QWORD v66[2]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v67; // [rsp+A0h] [rbp-48h]
  int v68; // [rsp+A4h] [rbp-44h]
  __int16 v69; // [rsp+F0h] [rbp+8h]
  int v70; // [rsp+F8h] [rbp+10h]
  int v71; // [rsp+100h] [rbp+18h]
  __int64 v73; // [rsp+120h] [rbp+38h]
  __int64 v75; // [rsp+128h] [rbp+40h]

  v71 = a3;
  v69 = a1;
  v7 = a3 + a4;
  v63 = a2;
  v68 = 0;
  v9 = (unsigned __int8 *)a1;
  v73 = a1 + a2;
  v10 = 0LL;
  v62 = v7;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  memset_thunk_772440563353939046(a6, 0, 0x40000uLL);
  v12 = v73 - 5;
  v58 = v7 - 41;
  v13 = *v9;
  v14 = 0LL;
  v75 = 0LL;
  v66[0] = 0LL;
  v15 = 0;
  v66[1] = 0LL;
  v16 = 2;
  v67 = a2;
  v17 = (char *)(v9 + 1);
  v18 = (_BYTE *)(a3 + 5);
  *(_BYTE *)(a3 + 4) = v13;
  v19 = v9;
  v60 = v9;
  v20 = (_DWORD *)a3;
  v56 = (_DWORD *)a3;
  while ( 2 )
  {
    v21 = v12;
    if ( (unsigned __int64)(v19 + 0x2000) <= v12 )
      v21 = (unsigned __int64)(v19 + 0x2000);
    v22 = &v17[v63];
    v59 = v21;
    if ( v21 < (unsigned __int64)&v17[v63] )
      v22 = (char *)v21;
    v23 = v15 & 0x3FFF;
    v57 = (unsigned __int64)v22;
    v61 = v23;
    if ( (unsigned __int64)v19 < v21 )
    {
      v24 = &a6[8 * v23 + 0x40000];
      do
      {
        v25 = v19 + 1;
        LOWORD(v23) = v23 + 1;
        v24 += 8;
        v26 = (unsigned __int16)XpressHashFunction[*v19] ^ (unsigned __int16)XpressHashFunction[v19[1] + 256] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v19[2] + 512];
        *((_QWORD *)v24 - 1) = *(_QWORD *)&a6[8 * v26];
        *(_QWORD *)&a6[8 * v26] = v19;
        v19 = v25;
      }
      while ( (unsigned __int64)v25 < v21 );
      v20 = v56;
      v14 = (char *)v75;
      v61 = v23;
      v60 = v25;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v65 = v17;
      v27 = v17;
      if ( v17 < v22 )
        goto LABEL_18;
      if ( (unsigned __int64)v17 >= v21 )
        break;
      XpressCallback = RtlpMakeXpressCallback((__int64)v66, v21, (__int64)v17);
      v20 = v56;
      v21 = v59;
      v57 = XpressCallback;
LABEL_18:
      v29 = v17 - 0x2000;
      v30 = *(_DWORD *)v17;
      v64 = v17 - 0x2000;
      v70 = *(_DWORD *)v17;
      v31 = *(_QWORD *)&a6[8 * (((_WORD)v17 - (_WORD)v9) & 0x3FFF) + 0x40000];
      if ( v31 >= (unsigned __int64)(v17 - 0x2000) )
      {
        v32 = *(_DWORD *)v31 ^ v30;
        if ( !v32 )
          goto LABEL_32;
        if ( (v32 & 0xFFFFFF) == 0 )
          goto LABEL_31;
        v31 = *(_QWORD *)&a6[8 * (((_WORD)v31 - (_WORD)v9) & 0x3FFF) + 0x40000];
        if ( v31 >= (unsigned __int64)v29 )
        {
          v33 = *(_DWORD *)v31 ^ v30;
          if ( !v33 )
            goto LABEL_32;
          if ( (v33 & 0xFFFFFF) == 0 )
          {
LABEL_31:
            v36 = a6;
            v10 = (__int64)&v17[-v31];
            v37 = v17 - 0x2000;
            v38 = v73;
            v39 = 0LL;
            v40 = 3LL;
            v41 = v69;
            goto LABEL_71;
          }
          v31 = *(_QWORD *)&a6[8 * (((_WORD)v31 - (_WORD)v9) & 0x3FFF) + 0x40000];
          if ( v31 >= (unsigned __int64)v29 )
          {
            v34 = *(_DWORD *)v31 ^ v30;
            if ( !v34 )
            {
LABEL_32:
              v38 = v73;
              v39 = 0LL;
              v40 = 3LL;
LABEL_33:
              v17 = v27;
              v42 = v27 + 4;
              for ( v31 += 4LL; ; v31 += 32LL )
              {
                v43 = v42 + 8;
                v44 = v42;
                if ( (unsigned __int64)(v42 + 8) >= v38 )
                {
                  for ( ; (unsigned __int64)v42 < v38; ++v31 )
                  {
                    if ( *(_BYTE *)v42 != *(_BYTE *)v31 )
                      break;
                    v42 = (_DWORD *)((char *)v42 + 1);
                  }
                  goto LABEL_56;
                }
                v45 = *v42;
                v46 = *(_DWORD *)v31;
                if ( *v42 != *(_DWORD *)v31 )
                  goto LABEL_52;
                v45 = v42[1];
                ++v42;
                v47 = *(_DWORD *)(v31 + 4);
                if ( v45 != v47 )
                {
                  v31 += 4LL;
                  goto LABEL_51;
                }
                v45 = v44[2];
                v42 = v44 + 2;
                v47 = *(_DWORD *)(v31 + 8);
                if ( v45 != v47 )
                {
                  v31 += 8LL;
                  goto LABEL_51;
                }
                v45 = v44[3];
                v42 = v44 + 3;
                v47 = *(_DWORD *)(v31 + 12);
                if ( v45 != v47 )
                {
                  v31 += 12LL;
                  goto LABEL_51;
                }
                v45 = v44[4];
                v42 = v44 + 4;
                v47 = *(_DWORD *)(v31 + 16);
                if ( v45 != v47 )
                {
                  v31 += 16LL;
                  goto LABEL_51;
                }
                v45 = v44[5];
                v42 = v44 + 5;
                v47 = *(_DWORD *)(v31 + 20);
                if ( v45 != v47 )
                {
                  v31 += 20LL;
                  goto LABEL_51;
                }
                v45 = v44[6];
                v42 = v44 + 6;
                v47 = *(_DWORD *)(v31 + 24);
                if ( v45 != v47 )
                {
                  v31 += 24LL;
                  goto LABEL_51;
                }
                v45 = v44[7];
                v42 = v44 + 7;
                v47 = *(_DWORD *)(v31 + 28);
                if ( v45 != v47 )
                  break;
                v38 = v73;
                v42 = v43;
              }
              v31 += 28LL;
LABEL_51:
              LOBYTE(v46) = v47;
LABEL_52:
              if ( (_BYTE)v45 != (_BYTE)v46 )
              {
LABEL_55:
                v38 = v73;
                goto LABEL_56;
              }
              if ( *((_BYTE *)v42 + 1) != *(_BYTE *)(v31 + 1) )
              {
                v42 = (_DWORD *)((char *)v42 + 1);
                ++v31;
                goto LABEL_55;
              }
              v38 = v73;
              if ( *((_BYTE *)v42 + 2) == *(_BYTE *)(v31 + 2) )
              {
                v42 = (_DWORD *)((char *)v42 + 3);
                v31 += 3LL;
              }
              else
              {
                v42 = (_DWORD *)((char *)v42 + 2);
                v31 += 2LL;
              }
LABEL_56:
              v48 = (char *)v42 - v17;
              if ( (char *)v42 - v17 <= v40 )
              {
                v39 += v48;
              }
              else
              {
                v40 = (char *)v42 - v17;
                v10 = (__int64)v42 - v31;
                if ( v31 > (unsigned __int64)v17 )
                {
                  v20 = v56;
                  v14 = (char *)v75;
                  goto LABEL_59;
                }
              }
              v41 = v69;
              LOWORD(v31) = v31 - v48;
              v37 = v64;
              v20 = v56;
              v30 = v70;
              v14 = (char *)v75;
              v27 = v65;
              v36 = a6;
              while ( (unsigned __int64)++v39 < 0x18 )
              {
LABEL_71:
                v31 = *(_QWORD *)&v36[8 * (((_WORD)v31 - v41) & 0x3FFF) + 0x40000];
                if ( v31 < (unsigned __int64)v37 )
                  break;
                if ( v30 == *(_DWORD *)v31 )
                  goto LABEL_33;
              }
LABEL_59:
              v17 += v40;
              v49 = v40 - 3;
              v50 = 8 * v10 - 8;
              if ( v40 - 3 < 7 )
              {
                v10 = v49 + v50;
                *(_WORD *)v18 = v10;
                v18 += 2;
                goto LABEL_86;
              }
              v10 = v50 | 7;
              v51 = v40 - 10;
              *(_WORD *)v18 = v10;
              v18 += 2;
              v52 = v18;
              if ( !v14 )
              {
                v38 = v73;
                v14 = v18;
                if ( v51 < 0xF )
                {
                  *v18++ = v51;
                  v75 = (__int64)v52;
                  goto LABEL_86;
                }
                *v18++ = 15;
LABEL_81:
                v75 = (__int64)v14;
                if ( v40 - 25 >= 0xFF )
                {
                  *v18 = -1;
                  if ( v49 >= 0x10000 )
                  {
                    *(_WORD *)(v18 + 1) = 0;
                    *(_DWORD *)(v18 + 3) = v49;
                    v18 += 7;
                  }
                  else
                  {
                    *(_WORD *)(v18 + 1) = v49;
                    v18 += 3;
                  }
                }
                else
                {
                  *v18++ = v40 - 25;
                }
                goto LABEL_86;
              }
              v53 = *v14;
              if ( v51 >= 0xF )
              {
                *v14 = v53 | 0xF0;
                v14 = 0LL;
                goto LABEL_81;
              }
              *v14 = v53 | (16 * v51);
              v14 = 0LL;
              v75 = 0LL;
LABEL_86:
              if ( v16 <= 0 )
              {
                *v20 = 2 * v16 + 1;
                v16 = 1;
                v20 = v18;
                v56 = v18;
                v18 += 4;
              }
              else
              {
                v16 = 2 * v16 + 1;
              }
              if ( (unsigned __int64)v18 < v58 )
              {
                LOWORD(v9) = v69;
                v21 = v59;
LABEL_14:
                v22 = (char *)v57;
                continue;
              }
              goto LABEL_93;
            }
            if ( (v34 & 0xFFFFFF) == 0 )
              goto LABEL_31;
          }
        }
      }
      *v18++ = v30;
      ++v17;
      v35 = v18;
      if ( v16 <= 0 )
      {
        v18 += 4;
        *v20 = 2 * v16;
        v16 = 1;
        v20 = v35;
        v56 = v35;
        if ( (unsigned __int64)v18 >= v58 )
          goto LABEL_92;
        v22 = (char *)v57;
      }
      else
      {
        v16 *= 2;
        v22 = (char *)v57;
      }
    }
    v12 = v73 - 5;
    v19 = v60;
    v15 = v61;
    if ( (unsigned __int64)v17 < v73 - 5 )
      continue;
    break;
  }
LABEL_92:
  v38 = v73;
LABEL_93:
  if ( (unsigned __int64)v17 >= v38 )
  {
LABEL_99:
    if ( (unsigned __int64)v18 >= v62 )
      return 3221225507LL;
    for ( ; v16 > 0; v16 = 2 * v16 + 1 )
      ;
    v55 = (_DWORD)v18 - v71;
    *v20 = 2 * v16 + 1;
    *a5 = v55;
    if ( v55 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v18 < v62 )
    {
      v54 = *v17++;
      *v18++ = v54;
      if ( v16 <= 0 )
      {
        *v20 = 2 * v16;
        v16 = 1;
        v20 = v18;
        v18 += 4;
      }
      else
      {
        v16 *= 2;
      }
      if ( (unsigned __int64)v17 >= v38 )
        goto LABEL_99;
    }
    return 3221225507LL;
  }
}
