/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x140401EA0
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x140400550 (RtlCompressBufferXpressLz.c)
 *     RtlCompressBufferProgress @ 0x140617A80 (RtlCompressBufferProgress.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140401B40 (RtlpMakeXpressCallback.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  __int16 v21; // r9
  unsigned __int64 v22; // r11
  char *v23; // rax
  __int64 v24; // r9
  char *v25; // r8
  unsigned __int64 v26; // rcx
  _DWORD *v27; // r10
  _QWORD *v28; // r9
  char *v29; // r13
  int v30; // r11d
  char *v31; // r8
  unsigned __int64 v32; // rdx
  int v33; // ecx
  _DWORD *v34; // rcx
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rcx
  int v37; // eax
  int v38; // r9d
  int v39; // r10d
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  int v45; // eax
  int *v46; // rcx
  __int64 v47; // r9
  __int16 v48; // r10
  char *v49; // rax
  char v50; // al
  unsigned __int64 XpressCallback; // rax
  int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  char v56; // dl
  unsigned int v57; // ebx
  __int64 v58; // [rsp+20h] [rbp-C8h]
  char *v59; // [rsp+28h] [rbp-C0h]
  _DWORD *v60; // [rsp+30h] [rbp-B8h]
  char *v61; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v62; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v63; // [rsp+48h] [rbp-A0h]
  __int16 v64; // [rsp+50h] [rbp-98h]
  unsigned __int64 v65; // [rsp+58h] [rbp-90h]
  unsigned __int64 v66; // [rsp+60h] [rbp-88h]
  unsigned __int64 v67; // [rsp+68h] [rbp-80h]
  unsigned __int64 v68; // [rsp+70h] [rbp-78h]
  unsigned __int64 v69; // [rsp+78h] [rbp-70h]
  unsigned __int64 v70; // [rsp+80h] [rbp-68h]
  unsigned __int64 v71; // [rsp+88h] [rbp-60h]
  _QWORD v72[2]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v73; // [rsp+A0h] [rbp-48h]
  int v74; // [rsp+A4h] [rbp-44h]
  __int16 v75; // [rsp+F0h] [rbp+8h]
  int v76; // [rsp+100h] [rbp+18h]

  v76 = a3;
  v75 = a1;
  v9 = a1 + a2;
  v10 = a3 + a4;
  v59 = 0LL;
  v74 = 0;
  v13 = (unsigned __int8 *)a1;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( a1 <= 0x2001 )
    return 3221225659LL;
  v15 = a6;
  memset_0(a6, 0, 0x40000uLL);
  v16 = v9 - 5;
  v61 = 0LL;
  if ( !a7 || (v17 = a9, a9 > a2) )
  {
    v17 = a2;
    a9 = a2;
  }
  v72[0] = a7;
  v18 = (_BYTE *)(a3 + 5);
  v19 = (char *)(v13 + 1);
  v72[1] = a8;
  v20 = 2;
  *(_BYTE *)(a3 + 4) = *v13;
  v60 = (_DWORD *)a3;
  v21 = 0;
  v73 = v17;
  while ( 2 )
  {
    v22 = v16;
    if ( (unsigned __int64)(v13 + 0x2000) <= v16 )
      v22 = (unsigned __int64)(v13 + 0x2000);
    v23 = &v19[v17];
    v63 = v22;
    if ( v22 < (unsigned __int64)v23 )
      v23 = (char *)v22;
    v24 = v21 & 0x3FFF;
    v62 = (unsigned __int64)v23;
    v64 = v24;
    if ( (unsigned __int64)v13 < v22 )
    {
      v25 = (char *)&v15[v24 + 0x8000];
      do
      {
        LOWORD(v24) = v24 + 1;
        v25 += 8;
        v26 = (unsigned __int16)XpressHashFunction[v13[1] + 256] ^ (unsigned __int16)XpressHashFunction[*v13] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v13[2] + 512];
        *((_QWORD *)v25 - 1) = v15[v26];
        v15[v26] = v13++;
      }
      while ( (unsigned __int64)v13 < v22 );
      v64 = v24;
LABEL_19:
      v23 = (char *)v62;
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
      XpressCallback = RtlpMakeXpressCallback((__int64)v72, v22, (__int64)v19);
      v27 = v60;
      v28 = a6;
      v62 = XpressCallback;
LABEL_22:
      v30 = *(_DWORD *)v19;
      v31 = v19 - 0x2000;
      v32 = v28[(((unsigned __int16)v19 - v75) & 0x3FFF) + 0x8000];
      if ( v32 >= (unsigned __int64)(v19 - 0x2000) )
      {
        v33 = *(_DWORD *)v32 ^ v30;
        if ( !v33 )
          goto LABEL_28;
        if ( (v33 & 0xFFFFFF) == 0 )
          goto LABEL_86;
        v32 = v28[(((unsigned __int16)v32 - v75) & 0x3FFF) + 0x8000];
        if ( v32 >= (unsigned __int64)v31 )
        {
          v52 = *(_DWORD *)v32 ^ v30;
          if ( !v52 )
            goto LABEL_28;
          if ( (v52 & 0xFFFFFF) == 0 )
          {
LABEL_86:
            v48 = v75;
            v41 = (unsigned __int64)&v19[-v32];
            v49 = v19 - 0x2000;
            v59 = &v19[-v32];
            v58 = 0LL;
            v35 = 3LL;
            goto LABEL_53;
          }
          v32 = v28[(((unsigned __int16)v32 - v75) & 0x3FFF) + 0x8000];
          if ( v32 >= (unsigned __int64)v31 )
          {
            v53 = *(_DWORD *)v32 ^ v30;
            if ( !v53 )
            {
LABEL_28:
              v35 = 3LL;
              v58 = 0LL;
LABEL_29:
              v19 = v29;
              v36 = (unsigned __int64)(v29 + 4);
              for ( v32 += 4LL; ; v32 += 32LL )
              {
                v70 = v36;
                v69 = v36;
                v68 = v36;
                v67 = v36;
                v66 = v36;
                v65 = v36;
                v71 = v36 + 32;
                if ( v36 + 32 >= v9 )
                  break;
                v37 = *(_DWORD *)v36;
                v38 = *(_DWORD *)v32;
                if ( *(_DWORD *)v36 != *(_DWORD *)v32 )
                  goto LABEL_36;
                v37 = *(_DWORD *)(v36 + 4);
                v36 += 4LL;
                v39 = *(_DWORD *)(v32 + 4);
                if ( v37 != v39 )
                {
                  v32 += 4LL;
                  goto LABEL_35;
                }
                v39 = *(_DWORD *)(v32 + 8);
                v36 = v65 + 8;
                v37 = *(_DWORD *)(v65 + 8);
                if ( v37 != v39 )
                {
                  v32 += 8LL;
LABEL_35:
                  LOBYTE(v38) = v39;
LABEL_36:
                  if ( (_BYTE)v37 == (_BYTE)v38 )
                  {
                    if ( *(_BYTE *)(v36 + 1) == *(_BYTE *)(v32 + 1) )
                    {
                      if ( *(_BYTE *)(v36 + 2) == *(_BYTE *)(v32 + 2) )
                      {
                        v36 += 3LL;
                        v32 += 3LL;
                      }
                      else
                      {
                        v36 += 2LL;
                        v32 += 2LL;
                      }
                    }
                    else
                    {
                      ++v36;
                      ++v32;
                    }
                  }
                  goto LABEL_40;
                }
                v39 = *(_DWORD *)(v32 + 12);
                v36 = v66 + 12;
                v37 = *(_DWORD *)(v66 + 12);
                if ( v37 != v39 )
                {
                  v32 += 12LL;
                  goto LABEL_35;
                }
                v39 = *(_DWORD *)(v32 + 16);
                v36 = v67 + 16;
                v37 = *(_DWORD *)(v67 + 16);
                if ( v37 != v39 )
                {
                  v32 += 16LL;
                  goto LABEL_35;
                }
                v39 = *(_DWORD *)(v32 + 20);
                v36 = v68 + 20;
                v37 = *(_DWORD *)(v68 + 20);
                if ( v37 != v39 )
                {
                  v32 += 20LL;
                  goto LABEL_35;
                }
                v39 = *(_DWORD *)(v32 + 24);
                v36 = v69 + 24;
                v37 = *(_DWORD *)(v69 + 24);
                if ( v37 != v39 )
                {
                  v32 += 24LL;
                  goto LABEL_35;
                }
                v39 = *(_DWORD *)(v32 + 28);
                v36 = v70 + 28;
                v37 = *(_DWORD *)(v70 + 28);
                if ( v37 != v39 )
                {
                  v32 += 28LL;
                  goto LABEL_35;
                }
                v36 = v71;
              }
              for ( ; v36 < v9; ++v32 )
              {
                if ( *(_BYTE *)v36 != *(_BYTE *)v32 )
                  break;
                ++v36;
              }
LABEL_40:
              v40 = v36 - (_QWORD)v29;
              if ( v36 - (unsigned __int64)v29 <= v35 )
              {
                v47 = v40 + v58;
              }
              else
              {
                v41 = v36 - v32;
                v35 = v40;
                v59 = (char *)v41;
                if ( v32 > (unsigned __int64)v29 )
                  goto LABEL_42;
                v47 = v58;
              }
              v48 = v75;
              LOWORD(v32) = v32 - v40;
              v49 = v31;
              while ( 1 )
              {
                v41 = (unsigned __int64)v59;
                v58 = v47 + 1;
                if ( (unsigned __int64)(v47 + 1) >= 0x18 )
                  break;
LABEL_53:
                v32 = a6[(((unsigned __int16)v32 - v48) & 0x3FFF) + 0x8000];
                v47 = v58;
                if ( v32 < (unsigned __int64)v49 )
                  break;
                if ( v30 == *(_DWORD *)v32 )
                  goto LABEL_29;
              }
LABEL_42:
              v19 += v35;
              v42 = v35 - 3;
              v43 = 8 * v41 - 8;
              if ( v35 - 3 >= 7 )
              {
                v54 = v43 | 7;
                *(_WORD *)v18 = v54;
                v18 += 2;
                v59 = (char *)v54;
                v55 = v35 - 10;
                if ( v61 )
                {
                  v56 = *v61;
                  if ( v55 < 0xF )
                  {
                    *v61 = v56 | (16 * v55);
                    v61 = 0LL;
                    goto LABEL_44;
                  }
                  *v61 = v56 | 0xF0;
                  v61 = 0LL;
                }
                else
                {
                  v61 = v18;
                  if ( v55 < 0xF )
                  {
                    *v18++ = v55;
                    goto LABEL_44;
                  }
                  *v18++ = 15;
                }
                if ( v35 - 25 >= 0xFF )
                {
                  *v18 = -1;
                  if ( v42 >= 0x10000 )
                  {
                    *(_WORD *)(v18 + 1) = 0;
                    *(_DWORD *)(v18 + 3) = v42;
                    v18 += 7;
                  }
                  else
                  {
                    *(_WORD *)(v18 + 1) = v42;
                    v18 += 3;
                  }
                }
                else
                {
                  *v18++ = v35 - 25;
                }
              }
              else
              {
                v44 = v42 + v43;
                *(_WORD *)v18 = v44;
                v18 += 2;
                v59 = (char *)v44;
              }
LABEL_44:
              v45 = 2 * v20 + 1;
              if ( v20 > 0 )
              {
                v20 = 2 * v20 + 1;
              }
              else
              {
                v46 = v60;
                v20 = 1;
                v60 = v18;
                v18 += 4;
                *v46 = v45;
              }
              if ( (unsigned __int64)v18 < v10 - 41 )
              {
                v22 = v63;
                goto LABEL_19;
              }
              v27 = v60;
              goto LABEL_64;
            }
            if ( (v53 & 0xFFFFFF) == 0 )
              goto LABEL_86;
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
        v27 = v34;
        if ( (unsigned __int64)v18 >= v10 - 41 )
          goto LABEL_64;
        v23 = (char *)v62;
        v22 = v63;
      }
      else
      {
        v22 = v63;
        v20 *= 2;
        v23 = (char *)v62;
      }
    }
    v21 = v64;
    v16 = v9 - 5;
    v15 = a6;
    v17 = a9;
    if ( (unsigned __int64)v19 < v9 - 5 )
      continue;
    break;
  }
LABEL_64:
  if ( (unsigned __int64)v19 >= v9 )
  {
LABEL_69:
    if ( (unsigned __int64)v18 >= v10 )
      return 3221225507LL;
    for ( ; v20 > 0; v20 = 2 * v20 + 1 )
      ;
    v57 = (_DWORD)v18 - v76;
    *v27 = 2 * v20 + 1;
    *a5 = v57;
    if ( v57 < 8 )
      *a5 = 8;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v18 < v10 )
    {
      v50 = *v19++;
      *v18++ = v50;
      if ( v20 <= 0 )
      {
        *v27 = 2 * v20;
        v20 = 1;
        v27 = v18;
        v18 += 4;
      }
      else
      {
        v20 *= 2;
      }
      if ( (unsigned __int64)v19 >= v9 )
        goto LABEL_69;
    }
    return 3221225507LL;
  }
}
