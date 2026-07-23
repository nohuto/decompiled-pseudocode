/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1403F3C50
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x1403F22F0 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x14061AAD0 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x1403F38F0 (RtlpMakeXpressCallback.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  unsigned __int8 *v13; // r15
  _QWORD *v15; // r12
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  _BYTE *v18; // rbx
  char *v19; // rdi
  int v20; // esi
  __int16 v21; // r10
  unsigned __int64 v22; // r11
  char *v23; // rax
  __int64 v24; // r10
  char *v25; // r9
  unsigned __int64 v26; // rdx
  _DWORD *v27; // r9
  _QWORD *v28; // r10
  char *v29; // r13
  int v30; // r11d
  char *v31; // r8
  unsigned __int64 v32; // rdx
  int v33; // ecx
  _DWORD *v34; // rcx
  __int64 v35; // r9
  __int16 v36; // r10
  char *v37; // rax
  __int64 v38; // r12
  char *v39; // rcx
  _DWORD *v40; // rcx
  _DWORD *v41; // r12
  int v42; // eax
  int v43; // r9d
  int v44; // r10d
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  int v49; // eax
  int *v50; // rcx
  _DWORD *v51; // r11
  char v52; // al
  unsigned __int64 XpressCallback; // rax
  int v54; // eax
  int v55; // eax
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  char v58; // dl
  unsigned int v59; // ebx
  _DWORD *v60; // [rsp+20h] [rbp-C8h]
  __int64 v61; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+30h] [rbp-B8h]
  char *v63; // [rsp+38h] [rbp-B0h]
  char *v64; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v65; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+50h] [rbp-98h]
  __int16 v67; // [rsp+58h] [rbp-90h]
  _DWORD *v68; // [rsp+88h] [rbp-60h]
  _QWORD v69[2]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v70; // [rsp+A0h] [rbp-48h]
  int v71; // [rsp+A4h] [rbp-44h]
  __int16 v72; // [rsp+F0h] [rbp+8h]
  int v73; // [rsp+100h] [rbp+18h]

  v73 = a3;
  v72 = a1;
  v9 = a1 + a2;
  v10 = a3 + a4;
  v63 = 0LL;
  v71 = 0;
  v13 = (unsigned __int8 *)a1;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  v15 = a6;
  memset_0(a6, 0, 0x40000uLL);
  v16 = v9 - 5;
  v64 = 0LL;
  if ( !a7 || (v17 = a9, a9 > a2) )
  {
    v17 = a2;
    a9 = a2;
  }
  v69[0] = a7;
  v18 = (_BYTE *)(a3 + 5);
  v19 = (char *)(v13 + 1);
  v69[1] = a8;
  v20 = 2;
  *(_BYTE *)(a3 + 4) = *v13;
  v21 = 0;
  v60 = (_DWORD *)a3;
  v70 = v17;
  while ( 2 )
  {
    v22 = v16;
    if ( (unsigned __int64)(v13 + 0x2000) <= v16 )
      v22 = (unsigned __int64)(v13 + 0x2000);
    v23 = &v19[v17];
    v66 = v22;
    if ( v22 < (unsigned __int64)v23 )
      v23 = (char *)v22;
    v24 = v21 & 0x3FFF;
    v65 = (unsigned __int64)v23;
    v67 = v24;
    if ( (unsigned __int64)v13 < v22 )
    {
      v25 = (char *)&v15[v24 + 0x8000];
      do
      {
        LOWORD(v24) = v24 + 1;
        v25 += 8;
        v26 = (unsigned __int16)XpressHashFunction[*v13] ^ (unsigned __int16)XpressHashFunction[v13[1] + 256] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v13[2] + 512];
        *((_QWORD *)v25 - 1) = v15[v26];
        v15[v26] = v13++;
      }
      while ( (unsigned __int64)v13 < v22 );
      v67 = v24;
LABEL_19:
      v23 = (char *)v65;
    }
    v27 = v60;
    v28 = a6;
    while ( 1 )
    {
      v29 = v19;
      if ( v19 < v23 )
        goto LABEL_22;
      if ( (unsigned __int64)v19 >= v22 )
        break;
      XpressCallback = RtlpMakeXpressCallback((__int64)v69, v22, (__int64)v19);
      v27 = v60;
      v28 = a6;
      v65 = XpressCallback;
LABEL_22:
      v30 = *(_DWORD *)v19;
      v31 = v19 - 0x2000;
      v32 = v28[(((unsigned __int16)v19 - v72) & 0x3FFF) + 0x8000];
      if ( v32 >= (unsigned __int64)(v19 - 0x2000) )
      {
        v61 = 0LL;
        v33 = *(_DWORD *)v32 ^ v30;
        v62 = 3LL;
        if ( !v33 )
          goto LABEL_33;
        if ( (v33 & 0xFFFFFF) == 0 )
          goto LABEL_83;
        v32 = v28[(((unsigned __int16)v32 - v72) & 0x3FFF) + 0x8000];
        if ( v32 >= (unsigned __int64)v31 )
        {
          v54 = *(_DWORD *)v32 ^ v30;
          if ( !v54 )
            goto LABEL_96;
          if ( (v54 & 0xFFFFFF) == 0 )
          {
LABEL_83:
            v36 = v72;
            v39 = &v19[-v32];
            v38 = 3LL;
            v63 = &v19[-v32];
            v61 = 0LL;
            v37 = v19 - 0x2000;
            v62 = 3LL;
            goto LABEL_31;
          }
          v32 = v28[(((unsigned __int16)v32 - v72) & 0x3FFF) + 0x8000];
          if ( v32 >= (unsigned __int64)v31 )
          {
            v55 = *(_DWORD *)v32 ^ v30;
            if ( !v55 )
            {
LABEL_96:
              v62 = 3LL;
              v61 = 0LL;
LABEL_33:
              v19 = v29;
              v40 = v29 + 4;
              for ( v32 += 4LL; ; v32 += 32LL )
              {
                v41 = v40;
                v68 = v40 + 8;
                if ( (unsigned __int64)(v40 + 8) >= v9 )
                  break;
                v42 = *v40;
                v43 = *(_DWORD *)v32;
                if ( *v40 != *(_DWORD *)v32 )
                  goto LABEL_40;
                v42 = v40[1];
                ++v40;
                v44 = *(_DWORD *)(v32 + 4);
                if ( v42 != v44 )
                {
                  v32 += 4LL;
                  goto LABEL_39;
                }
                v42 = v41[2];
                v40 = v41 + 2;
                v44 = *(_DWORD *)(v32 + 8);
                if ( v42 != v44 )
                {
                  v32 += 8LL;
LABEL_39:
                  LOBYTE(v43) = v44;
LABEL_40:
                  if ( (_BYTE)v42 == (_BYTE)v43 )
                  {
                    if ( *((_BYTE *)v40 + 1) == *(_BYTE *)(v32 + 1) )
                    {
                      if ( *((_BYTE *)v40 + 2) == *(_BYTE *)(v32 + 2) )
                      {
                        v40 = (_DWORD *)((char *)v40 + 3);
                        v32 += 3LL;
                      }
                      else
                      {
                        v40 = (_DWORD *)((char *)v40 + 2);
                        v32 += 2LL;
                      }
                    }
                    else
                    {
                      v40 = (_DWORD *)((char *)v40 + 1);
                      ++v32;
                    }
                  }
                  goto LABEL_44;
                }
                v42 = v41[3];
                v40 = v41 + 3;
                v44 = *(_DWORD *)(v32 + 12);
                if ( v42 != v44 )
                {
                  v32 += 12LL;
                  goto LABEL_39;
                }
                v42 = v41[4];
                v40 = v41 + 4;
                v44 = *(_DWORD *)(v32 + 16);
                if ( v42 != v44 )
                {
                  v32 += 16LL;
                  goto LABEL_39;
                }
                v42 = v41[5];
                v40 = v41 + 5;
                v44 = *(_DWORD *)(v32 + 20);
                if ( v42 != v44 )
                {
                  v32 += 20LL;
                  goto LABEL_39;
                }
                v42 = v41[6];
                v40 = v41 + 6;
                v44 = *(_DWORD *)(v32 + 24);
                if ( v42 != v44 )
                {
                  v32 += 24LL;
                  goto LABEL_39;
                }
                v42 = v41[7];
                v40 = v41 + 7;
                v44 = *(_DWORD *)(v32 + 28);
                if ( v42 != v44 )
                {
                  v32 += 28LL;
                  goto LABEL_39;
                }
                v40 = v68;
              }
              for ( ; (unsigned __int64)v40 < v9; ++v32 )
              {
                if ( *(_BYTE *)v40 != *(_BYTE *)v32 )
                  break;
                v40 = (_DWORD *)((char *)v40 + 1);
              }
LABEL_44:
              v45 = (char *)v40 - v29;
              if ( (char *)v40 - v29 <= v62 )
              {
                v35 = v45 + v61;
              }
              else
              {
                v39 = (char *)v40 - v32;
                v62 = v45;
                v63 = v39;
                v38 = v45;
                if ( v32 > (unsigned __int64)v29 )
                  goto LABEL_46;
                v35 = v61;
              }
              v36 = v72;
              LOWORD(v32) = v32 - v45;
              v37 = v31;
              while ( 1 )
              {
                v38 = v62;
                v39 = v63;
                v61 = v35 + 1;
                if ( (unsigned __int64)(v35 + 1) >= 0x18 )
                  break;
LABEL_31:
                v32 = a6[(((unsigned __int16)v32 - v36) & 0x3FFF) + 0x8000];
                v35 = v61;
                if ( v32 < (unsigned __int64)v37 )
                  break;
                if ( v30 == *(_DWORD *)v32 )
                  goto LABEL_33;
              }
LABEL_46:
              v19 += v38;
              v46 = v38 - 3;
              v47 = 8LL * (_QWORD)v39 - 8;
              if ( (unsigned __int64)(v38 - 3) < 7 )
              {
                v48 = v46 + v47;
                *(_WORD *)v18 = v48;
                v18 += 2;
                v63 = (char *)v48;
                goto LABEL_48;
              }
              v56 = v47 | 7;
              *(_WORD *)v18 = v56;
              v18 += 2;
              v63 = (char *)v56;
              v57 = v38 - 10;
              if ( v64 )
              {
                v58 = *v64;
                if ( v57 < 0xF )
                {
                  *v64 = v58 | (16 * v57);
                  v64 = 0LL;
LABEL_48:
                  v49 = 2 * v20 + 1;
                  if ( v20 > 0 )
                  {
                    v20 = 2 * v20 + 1;
                  }
                  else
                  {
                    v50 = v60;
                    v20 = 1;
                    v60 = v18;
                    v18 += 4;
                    *v50 = v49;
                  }
                  if ( (unsigned __int64)v18 < v10 - 41 )
                  {
                    v22 = v66;
                    goto LABEL_19;
                  }
                  goto LABEL_73;
                }
                *v64 = v58 | 0xF0;
                v64 = 0LL;
              }
              else
              {
                v64 = v18;
                if ( v57 < 0xF )
                {
                  *v18++ = v57;
                  goto LABEL_48;
                }
                *v18++ = 15;
              }
              if ( (unsigned __int64)(v38 - 25) >= 0xFF )
              {
                *v18 = -1;
                if ( v46 >= 0x10000 )
                {
                  *(_WORD *)(v18 + 1) = 0;
                  *(_DWORD *)(v18 + 3) = v46;
                  v18 += 7;
                }
                else
                {
                  *(_WORD *)(v18 + 1) = v46;
                  v18 += 3;
                }
              }
              else
              {
                *v18++ = v38 - 25;
              }
              goto LABEL_48;
            }
            if ( (v55 & 0xFFFFFF) == 0 )
              goto LABEL_83;
          }
        }
      }
      *v18++ = v30;
      ++v19;
      v34 = v18;
      if ( v20 <= 0 )
      {
        *v27 = 2 * v20;
        v18 += 4;
        v60 = v34;
        v20 = 1;
        v51 = v34;
        if ( (unsigned __int64)v18 >= v10 - 41 )
          goto LABEL_62;
        v23 = (char *)v65;
        v27 = v34;
        v22 = v66;
      }
      else
      {
        v22 = v66;
        v20 *= 2;
        v23 = (char *)v65;
      }
    }
    v21 = v67;
    v16 = v9 - 5;
    v15 = a6;
    v17 = a9;
    if ( (unsigned __int64)v19 < v9 - 5 )
      continue;
    break;
  }
LABEL_73:
  v51 = v60;
LABEL_62:
  if ( (unsigned __int64)v19 >= v9 )
  {
LABEL_67:
    if ( (unsigned __int64)v18 >= v10 )
      return 3221225507LL;
    for ( ; v20 > 0; v20 = 2 * v20 + 1 )
      ;
    v59 = (_DWORD)v18 - v73;
    *v51 = 2 * v20 + 1;
    *a5 = v59;
    if ( v59 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v18 < v10 )
    {
      v52 = *v19++;
      *v18++ = v52;
      if ( v20 <= 0 )
      {
        *v51 = 2 * v20;
        v20 = 1;
        v51 = v18;
        v18 += 4;
      }
      else
      {
        v20 *= 2;
      }
      if ( (unsigned __int64)v19 >= v9 )
        goto LABEL_67;
    }
    return 3221225507LL;
  }
}
