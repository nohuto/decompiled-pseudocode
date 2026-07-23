/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x180150850
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1800B6380 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1800B7400 (RtlpMakeXpressCallback.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
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
  unsigned __int8 *v9; // r15
  __int64 v10; // r14
  unsigned __int64 v12; // rdx
  char *v13; // r12
  int v14; // esi
  __int16 v15; // cx
  unsigned __int8 *v16; // r11
  char *v17; // rdi
  _BYTE *v18; // rbx
  _DWORD *v19; // r9
  unsigned __int64 v20; // r10
  char *v21; // r13
  __int64 v22; // rcx
  char *v23; // r9
  __int16 v24; // r12
  unsigned __int8 *v25; // r8
  unsigned __int64 v26; // rdx
  char *v27; // rax
  unsigned __int64 XpressCallback; // rax
  char *v29; // r8
  int v30; // r11d
  unsigned __int64 v31; // rdx
  __int64 v32; // r10
  int v33; // ecx
  unsigned __int64 v34; // r13
  bool v35; // zf
  char *v36; // rcx
  int v37; // eax
  int v38; // eax
  _DWORD *v39; // rcx
  unsigned __int64 v40; // r8
  _DWORD *v41; // rcx
  _DWORD *v42; // r12
  _DWORD *v43; // r11
  int v44; // eax
  int v45; // r8d
  int v46; // r9d
  char *v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // r14
  unsigned __int64 v51; // rax
  _BYTE *v52; // rdx
  char v53; // dl
  char v54; // al
  unsigned int v55; // ebx
  _DWORD *v56; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v57; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+30h] [rbp-B8h]
  char *v59; // [rsp+38h] [rbp-B0h]
  __int16 v60; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v61; // [rsp+48h] [rbp-A0h]
  unsigned __int8 *v62; // [rsp+50h] [rbp-98h]
  unsigned __int64 v63; // [rsp+58h] [rbp-90h]
  __int64 v64; // [rsp+60h] [rbp-88h]
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
  v64 = a2;
  v68 = 0;
  v9 = (unsigned __int8 *)a1;
  v73 = a1 + a2;
  v10 = 0LL;
  v63 = v7;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  memset_thunk_772440563353939046(a6, 0, 0x40000uLL);
  v61 = v7 - 41;
  v12 = v73 - 5;
  v13 = 0LL;
  *(_BYTE *)(a3 + 4) = *v9;
  v14 = 2;
  v75 = 0LL;
  v66[0] = 0LL;
  v15 = 0;
  v66[1] = 0LL;
  v16 = v9;
  v67 = a2;
  v17 = (char *)(v9 + 1);
  v18 = (_BYTE *)(a3 + 5);
  v62 = v9;
  v19 = (_DWORD *)a3;
  v56 = (_DWORD *)a3;
  do
  {
    v20 = v12;
    if ( (unsigned __int64)(v16 + 0x2000) <= v12 )
      v20 = (unsigned __int64)(v16 + 0x2000);
    v21 = &v17[v64];
    v57 = v20;
    if ( v20 < (unsigned __int64)&v17[v64] )
      v21 = (char *)v20;
    v22 = v15 & 0x3FFF;
    v58 = (unsigned __int64)v21;
    v60 = v22;
    if ( (unsigned __int64)v16 < v20 )
    {
      v23 = &a6[8 * v22 + 0x40000];
      v24 = v22;
      do
      {
        v25 = v16 + 1;
        ++v24;
        v23 += 8;
        v26 = (unsigned __int16)XpressHashFunction[*v16] ^ (unsigned __int16)XpressHashFunction[v16[1] + 256] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v16[2] + 512];
        *((_QWORD *)v23 - 1) = *(_QWORD *)&a6[8 * v26];
        *(_QWORD *)&a6[8 * v26] = v16;
        v16 = v25;
      }
      while ( (unsigned __int64)v25 < v20 );
      LOWORD(v9) = v69;
      v19 = v56;
      v60 = v24;
      v13 = (char *)v75;
      v62 = v25;
    }
    while ( 1 )
    {
      v27 = v17;
      v59 = v17;
      if ( v17 >= v21 )
        break;
LABEL_17:
      v29 = v17 - 0x2000;
      v30 = *(_DWORD *)v17;
      v65 = v17 - 0x2000;
      v70 = *(_DWORD *)v17;
      v31 = *(_QWORD *)&a6[8 * (((_WORD)v17 - (_WORD)v9) & 0x3FFF) + 0x40000];
      if ( v31 < (unsigned __int64)(v17 - 0x2000) )
      {
LABEL_27:
        *v18++ = v30;
        ++v17;
        v39 = v18;
        if ( v14 <= 0 )
        {
          v18 += 4;
          *v19 = 2 * v14;
          v14 = 1;
          v19 = v39;
          v56 = v39;
          if ( (unsigned __int64)v18 >= v61 )
            goto LABEL_94;
        }
        else
        {
          v14 *= 2;
        }
      }
      else
      {
        v32 = 0LL;
        v33 = *(_DWORD *)v31 ^ v30;
        v34 = 3LL;
        if ( v33 )
        {
          v35 = (v33 & 0xFFFFFF) == 0;
          v36 = a6;
          if ( v35 )
            goto LABEL_45;
          v31 = *(_QWORD *)&a6[8 * (((_WORD)v31 - (_WORD)v9) & 0x3FFF) + 0x40000];
          if ( v31 < (unsigned __int64)v29 )
            goto LABEL_26;
          v37 = *(_DWORD *)v31 ^ v30;
          if ( v37 )
          {
            if ( (v37 & 0xFFFFFF) == 0 )
              goto LABEL_45;
            v31 = *(_QWORD *)&a6[8 * (((_WORD)v31 - (_WORD)v9) & 0x3FFF) + 0x40000];
            if ( v31 < (unsigned __int64)v29 )
              goto LABEL_26;
            v38 = *(_DWORD *)v31 ^ v30;
            if ( v38 )
            {
              if ( (v38 & 0xFFFFFF) == 0 )
              {
LABEL_45:
                v47 = v17 - 0x2000;
                v40 = v73;
                v10 = (__int64)&v17[-v31];
                goto LABEL_73;
              }
LABEL_26:
              v20 = v57;
              v21 = (char *)v58;
              goto LABEL_27;
            }
          }
          v27 = v17;
        }
        v40 = v73;
LABEL_33:
        v17 = v27;
        v41 = v27 + 4;
        for ( v31 += 4LL; ; v31 += 32LL )
        {
          v42 = v41 + 8;
          v43 = v41;
          if ( (unsigned __int64)(v41 + 8) >= v40 )
          {
            for ( ; (unsigned __int64)v41 < v40; ++v31 )
            {
              if ( *(_BYTE *)v41 != *(_BYTE *)v31 )
                break;
              v41 = (_DWORD *)((char *)v41 + 1);
            }
            goto LABEL_58;
          }
          v44 = *v41;
          v45 = *(_DWORD *)v31;
          if ( *v41 != *(_DWORD *)v31 )
            goto LABEL_54;
          v44 = v41[1];
          ++v41;
          v46 = *(_DWORD *)(v31 + 4);
          if ( v44 != v46 )
          {
            v31 += 4LL;
            goto LABEL_53;
          }
          v44 = v43[2];
          v41 = v43 + 2;
          v46 = *(_DWORD *)(v31 + 8);
          if ( v44 != v46 )
          {
            v31 += 8LL;
            goto LABEL_53;
          }
          v44 = v43[3];
          v41 = v43 + 3;
          v46 = *(_DWORD *)(v31 + 12);
          if ( v44 != v46 )
          {
            v31 += 12LL;
            goto LABEL_53;
          }
          v44 = v43[4];
          v41 = v43 + 4;
          v46 = *(_DWORD *)(v31 + 16);
          if ( v44 != v46 )
          {
            v31 += 16LL;
            goto LABEL_53;
          }
          v44 = v43[5];
          v41 = v43 + 5;
          v46 = *(_DWORD *)(v31 + 20);
          if ( v44 != v46 )
          {
            v31 += 20LL;
            goto LABEL_53;
          }
          v44 = v43[6];
          v41 = v43 + 6;
          v46 = *(_DWORD *)(v31 + 24);
          if ( v44 != v46 )
          {
            v31 += 24LL;
            goto LABEL_53;
          }
          v44 = v43[7];
          v41 = v43 + 7;
          v46 = *(_DWORD *)(v31 + 28);
          if ( v44 != v46 )
            break;
          v40 = v73;
          v41 = v42;
        }
        v31 += 28LL;
LABEL_53:
        LOBYTE(v45) = v46;
LABEL_54:
        if ( (_BYTE)v44 != (_BYTE)v45 )
        {
LABEL_57:
          v40 = v73;
          goto LABEL_58;
        }
        if ( *((_BYTE *)v41 + 1) != *(_BYTE *)(v31 + 1) )
        {
          v41 = (_DWORD *)((char *)v41 + 1);
          ++v31;
          goto LABEL_57;
        }
        v40 = v73;
        if ( *((_BYTE *)v41 + 2) == *(_BYTE *)(v31 + 2) )
        {
          v41 = (_DWORD *)((char *)v41 + 3);
          v31 += 3LL;
        }
        else
        {
          v41 = (_DWORD *)((char *)v41 + 2);
          v31 += 2LL;
        }
LABEL_58:
        v48 = (char *)v41 - v17;
        if ( (char *)v41 - v17 <= v34 )
        {
          v32 += v48;
        }
        else
        {
          v34 = (char *)v41 - v17;
          v10 = (__int64)v41 - v31;
          if ( v31 > (unsigned __int64)v17 )
          {
            LOWORD(v9) = v69;
            v19 = v56;
            v13 = (char *)v75;
            goto LABEL_61;
          }
        }
        LOWORD(v9) = v69;
        LOWORD(v31) = v31 - v48;
        v47 = v65;
        v19 = v56;
        v30 = v70;
        v13 = (char *)v75;
        v36 = a6;
        while ( (unsigned __int64)++v32 < 0x18 )
        {
LABEL_73:
          v31 = *(_QWORD *)&v36[8 * (((_WORD)v31 - (_WORD)v9) & 0x3FFF) + 0x40000];
          if ( v31 < (unsigned __int64)v47 )
            break;
          if ( v30 == *(_DWORD *)v31 )
          {
            v27 = v59;
            goto LABEL_33;
          }
        }
LABEL_61:
        v17 += v34;
        v49 = v34 - 3;
        v50 = 8 * v10 - 8;
        if ( v34 - 3 >= 7 )
        {
          v10 = v50 | 7;
          v51 = v34 - 10;
          *(_WORD *)v18 = v10;
          v18 += 2;
          v52 = v18;
          if ( v13 )
          {
            v53 = *v13;
            if ( v51 >= 0xF )
            {
              *v13 = v53 | 0xF0;
              v13 = 0LL;
LABEL_83:
              v75 = (__int64)v13;
              if ( v34 - 25 >= 0xFF )
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
                *v18++ = v34 - 25;
              }
              goto LABEL_88;
            }
            v75 = 0LL;
            *v13 = v53 | (16 * v51);
            v13 = 0LL;
          }
          else
          {
            v40 = v73;
            v13 = v18;
            if ( v51 >= 0xF )
            {
              *v18++ = 15;
              goto LABEL_83;
            }
            *v18++ = v51;
            v75 = (__int64)v52;
          }
        }
        else
        {
          v10 = v49 + v50;
          *(_WORD *)v18 = v10;
          v18 += 2;
        }
LABEL_88:
        if ( v14 <= 0 )
        {
          *v19 = 2 * v14 + 1;
          v14 = 1;
          v19 = v18;
          v56 = v18;
          v18 += 4;
        }
        else
        {
          v14 = 2 * v14 + 1;
        }
        if ( (unsigned __int64)v18 >= v61 )
          goto LABEL_95;
        v20 = v57;
        v21 = (char *)v58;
      }
    }
    if ( (unsigned __int64)v17 < v20 )
    {
      XpressCallback = RtlpMakeXpressCallback((__int64)v66, v20, (__int64)v17);
      v19 = v56;
      v21 = (char *)XpressCallback;
      v20 = v57;
      v58 = XpressCallback;
      v27 = v17;
      goto LABEL_17;
    }
    v12 = v73 - 5;
    v16 = v62;
    v15 = v60;
  }
  while ( (unsigned __int64)v17 < v73 - 5 );
LABEL_94:
  v40 = v73;
LABEL_95:
  if ( (unsigned __int64)v17 >= v40 )
  {
LABEL_101:
    if ( (unsigned __int64)v18 >= v63 )
      return 3221225507LL;
    for ( ; v14 > 0; v14 = 2 * v14 + 1 )
      ;
    v55 = (_DWORD)v18 - v71;
    *v19 = 2 * v14 + 1;
    *a5 = v55;
    if ( v55 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v18 < v63 )
    {
      v54 = *v17++;
      *v18++ = v54;
      if ( v14 <= 0 )
      {
        *v19 = 2 * v14;
        v14 = 1;
        v19 = v18;
        v18 += 4;
      }
      else
      {
        v14 *= 2;
      }
      if ( (unsigned __int64)v17 >= v40 )
        goto LABEL_101;
    }
    return 3221225507LL;
  }
}
