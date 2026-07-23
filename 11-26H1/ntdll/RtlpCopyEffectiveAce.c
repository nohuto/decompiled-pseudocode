/*
 * XREFs of RtlpCopyEffectiveAce @ 0x18004B420
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x18004AF80 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x18004BDC0 (RtlpCopyAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x18004C420 (RtlEqualPrefixSid.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        unsigned __int16 *Src,
        char a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  __int64 v16; // r14
  __int64 v17; // rax
  char v19; // r12
  _BYTE *v20; // rdx
  __int64 v21; // r9
  unsigned __int8 v22; // cl
  __int64 v23; // rsi
  unsigned int v24; // r12d
  unsigned __int16 *v25; // rdi
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // r14d
  int v29; // r14d
  _BYTE *v30; // rax
  char *v31; // rdx
  char *v32; // r15
  unsigned int v33; // r12d
  char *v34; // rbx
  int v35; // esi
  _BYTE *v36; // rcx
  int v38; // eax
  BOOLEAN v39; // al
  int v40; // r8d
  int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  int v44; // edx
  __int64 v45; // rax
  char *v46; // rcx
  int v47; // r12d
  int v48; // r14d
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // rax
  int v53; // eax
  unsigned int i; // edx
  _QWORD *v55; // r14
  __int64 v56; // rax
  char v58; // [rsp+30h] [rbp-C9h]
  unsigned int Size; // [rsp+38h] [rbp-C1h]
  char *Srca; // [rsp+40h] [rbp-B9h]
  unsigned __int8 *v61; // [rsp+48h] [rbp-B1h]
  int v62; // [rsp+58h] [rbp-A1h]
  unsigned __int16 *v63; // [rsp+68h] [rbp-91h]
  unsigned __int16 *v64; // [rsp+70h] [rbp-89h]
  char *v66; // [rsp+88h] [rbp-71h]
  int Sid2; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v68; // [rsp+A4h] [rbp-55h]
  char v69[8]; // [rsp+D0h] [rbp-29h] BYREF
  int v70; // [rsp+D8h] [rbp-21h]

  v16 = a6;
  v17 = a7;
  if ( !a6 )
    v16 = (__int64)a4;
  v19 = a2;
  v20 = a15;
  if ( !a7 )
    v17 = (__int64)a5;
  v21 = a13;
  v63 = (unsigned __int16 *)v17;
  v58 = 0;
  Sid2 = 257;
  v68 = 50331648LL;
  v64 = (unsigned __int16 *)v16;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v22 = *(_BYTE *)Src;
  v23 = Src[1];
  if ( v22 > 0xAu && (unsigned __int8)(v22 - 13) > 1u )
  {
    if ( v23 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      memmove(*a11, Src, Src[1]);
      v21 = a13;
      goto LABEL_42;
    }
LABEL_55:
    v36 = a16;
    *a16 = 1;
    goto LABEL_47;
  }
  v61 = 0LL;
  v66 = 0LL;
  v62 = 0;
  if ( v22 <= 3u )
  {
    v24 = 8;
    Srca = (char *)Src;
    Size = 8;
    v25 = Src + 4;
    goto LABEL_10;
  }
  if ( (unsigned __int8)(v22 - 9) <= 1u )
    goto LABEL_71;
  if ( v22 >= 0xDu )
  {
    if ( v22 <= 0xEu )
    {
LABEL_71:
      v25 = Src + 4;
      v24 = 8;
      Srca = (char *)Src;
      Size = 8;
      v43 = 4 * *((unsigned __int8 *)Src + 9) + 8;
      v66 = (char *)Src + v43 + 8;
      v62 = v23 - v43 - 8;
      goto LABEL_10;
    }
    goto LABEL_74;
  }
  if ( v22 == 4 )
  {
    v61 = (unsigned __int8 *)(Src + 6);
    Size = 12;
    v47 = 4 * *((unsigned __int8 *)Src + 13);
    v48 = v47 + 8;
    v25 = (unsigned __int16 *)((char *)Src + (unsigned int)(v47 + 8) + 12);
    if ( !RtlEqualPrefixSid(Src + 6, &Sid2) )
    {
      v20 = a15;
      v24 = v47 + 20;
      Size = v48 + 12;
      v61 = 0LL;
      goto LABEL_94;
    }
    v49 = *((_DWORD *)Src + 5);
    if ( !v49 )
    {
      v61 = a4;
      v53 = a4[1];
      goto LABEL_92;
    }
    v50 = v49 - 1;
    if ( v50 )
    {
      v51 = v50 - 1;
      if ( !v51 )
      {
        v52 = (__int64)v64;
        goto LABEL_90;
      }
      if ( v51 == 1 )
      {
        v52 = (__int64)v63;
LABEL_90:
        v61 = (unsigned __int8 *)v52;
        v53 = *(unsigned __int8 *)(v52 + 1);
LABEL_92:
        v20 = a15;
        LODWORD(v23) = v23 + 4 * v53 - 4;
        *a15 = 1;
        goto LABEL_93;
      }
    }
    else
    {
      v52 = (__int64)a5;
      if ( a5 )
        goto LABEL_90;
    }
    v20 = a15;
    if ( !*a15 )
    {
      v24 = v47 + 20;
      v61 = 0LL;
      Size = v24;
      goto LABEL_94;
    }
LABEL_93:
    v24 = 12;
LABEL_94:
    v21 = a13;
    Srca = (char *)Src;
    goto LABEL_10;
  }
LABEL_74:
  v44 = *((_DWORD *)Src + 2);
  v45 = 14LL;
  if ( (v44 & 2) == 0 )
    v45 = 6LL;
  v25 = &Src[8 * (*((_DWORD *)Src + 2) & 1) + v45];
  v24 = v45 * 2 + 16 * (*((_DWORD *)Src + 2) & 1);
  Size = v24;
  if ( (v44 & 2) != 0 )
  {
    if ( (*((_DWORD *)Src + 2) & 1) != 0 )
      v46 = (char *)(Src + 14);
    else
      v46 = (char *)(Src + 6);
  }
  else
  {
    v46 = 0LL;
  }
  Srca = (char *)Src;
  if ( a14 )
  {
    Srca = (char *)Src;
    if ( v46 )
    {
      if ( a9 )
      {
        for ( i = 0; i < a10; ++i )
        {
          v55 = *(_QWORD **)(a9 + 8LL * i);
          v56 = *(_QWORD *)v46 - *v55;
          if ( *(_QWORD *)v46 == *v55 )
            v56 = *((_QWORD *)v46 + 1) - v55[1];
          if ( !v56 )
          {
            *a14 = 1;
            if ( a3 )
            {
              v58 = 1;
              Srca = (char *)Src;
            }
            else
            {
              *a15 = 1;
              if ( (Src[4] & 1) != 0 )
              {
                v24 -= 16;
                LODWORD(v23) = v23 - 16;
                Size = v24;
                memmove(v69, Src, v24);
                v70 &= ~2u;
                Srca = v69;
              }
              else
              {
                v24 -= 20;
                LODWORD(v23) = v23 - 20;
                Size = v24;
                memmove(v69, Src, v24);
                Srca = v69;
                v69[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
              }
              v21 = a13;
            }
            goto LABEL_80;
          }
        }
      }
      LODWORD(v23) = 0;
      goto LABEL_49;
    }
  }
LABEL_80:
  v20 = a15;
LABEL_10:
  if ( !(_DWORD)v23 )
    goto LABEL_41;
  v26 = *((_DWORD *)Src + 1);
  if ( v26 < 0 )
    v26 |= *a8;
  if ( (v26 & 0x40000000) != 0 )
    v26 |= a8[1];
  if ( (v26 & 0x20000000) != 0 )
    v26 |= a8[2];
  if ( (v26 & 0x10000000) != 0 )
    v26 |= a8[3];
  v27 = *(unsigned __int8 *)Src;
  if ( !(_BYTE)v27 || (unsigned __int8)v27 <= 0xAu && (v40 = 1650, _bittest(&v40, v27)) )
    v28 = v26 & a8[3] & 0xFFFFFFF;
  else
    v28 = v26 & (a8[3] & 0xEFFFFFF | 0x1000000);
  if ( v28 != *((_DWORD *)Src + 1) )
    *v20 = 1;
  v29 = v28 & 0x11FFFFF;
  if ( !v29 )
  {
    v39 = RtlEqualPrefixSid(v25, &Sid2);
    v21 = a13;
    if ( !v39 )
    {
      LODWORD(v23) = 0;
      goto LABEL_41;
    }
  }
  if ( *(_BYTE *)v25 != 1
    || *((_BYTE *)v25 + 2)
    || *((_BYTE *)v25 + 3)
    || *((_BYTE *)v25 + 4)
    || *((_BYTE *)v25 + 5)
    || *((_BYTE *)v25 + 6)
    || *((_BYTE *)v25 + 7) != 3
    || *((_BYTE *)v25 + 1) != 1 )
  {
    goto LABEL_31;
  }
  v38 = *((_DWORD *)v25 + 2);
  if ( !v38 )
  {
    v25 = (unsigned __int16 *)a4;
    v30 = a15;
    LODWORD(v23) = v23 + 4 * a4[1] - 4;
    *a15 = 1;
    goto LABEL_32;
  }
  v41 = v38 - 1;
  if ( v41 )
  {
    v42 = v41 - 1;
    if ( v42 )
    {
      if ( v42 == 1 )
      {
        v25 = v63;
        v30 = a15;
        LODWORD(v23) = v23 + 4 * *((unsigned __int8 *)v63 + 1) - 4;
        *a15 = 1;
        goto LABEL_32;
      }
LABEL_31:
      v30 = a15;
      goto LABEL_32;
    }
    v25 = v64;
    v30 = a15;
    LODWORD(v23) = v23 + 4 * *((unsigned __int8 *)v64 + 1) - 4;
    *a15 = 1;
  }
  else
  {
    if ( !a5 )
      goto LABEL_31;
    v25 = a5;
    v30 = a15;
    LODWORD(v23) = v23 + 4 * *((unsigned __int8 *)a5 + 1) - 4;
    *a15 = 1;
  }
LABEL_32:
  if ( v58 && *v30 )
  {
    if ( (Src[4] & 1) != 0 )
    {
      LODWORD(v23) = v23 - 16;
      Size = v24 - 16;
      memmove(v69, Src, v24 - 16);
      v70 &= ~2u;
      v31 = v69;
      v21 = a13;
    }
    else
    {
      LODWORD(v23) = v23 - 20;
      Size = v24 - 20;
      memmove(v69, Src, v24 - 20);
      v21 = a13;
      v31 = v69;
      v69[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
    }
  }
  else
  {
    v31 = Srca;
  }
  v32 = (char *)*a11;
  v33 = v23;
  if ( !*a11 || (unsigned int)v23 > v21 + *(unsigned __int16 *)(v21 + 2) - (_QWORD)v32 )
    goto LABEL_55;
  memmove(*a11, v31, Size);
  v34 = &v32[Size];
  if ( v61 )
  {
    memmove(v34, v61, 4LL * v61[1] + 8);
    v34 += 4 * v61[1] + 8;
  }
  memmove(v34, v25, 4LL * *((unsigned __int8 *)v25 + 1) + 8);
  v35 = (_DWORD)v34 + 4 * (*((unsigned __int8 *)v25 + 1) + 2);
  if ( v66 && v62 > 0 )
  {
    memmove(&v34[4 * *((unsigned __int8 *)v25 + 1) + 8], v66, v62);
    v35 += v62;
  }
  LODWORD(v23) = v35 - *(_DWORD *)a11;
  if ( v33 < (unsigned int)v23 )
    return 0;
  v21 = a13;
  *((_WORD *)*a11 + 1) = v23;
  *((_DWORD *)*a11 + 1) = v29;
LABEL_41:
  v19 = a2;
LABEL_42:
  v36 = a16;
  if ( !*a16 && (_DWORD)v23 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( v19 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(v21 + 4);
  }
LABEL_47:
  if ( (unsigned int)v23 <= 0xFFFF )
  {
    if ( *v36 )
    {
LABEL_50:
      *a12 = v23;
      return 1;
    }
LABEL_49:
    *a11 = (char *)*a11 + (unsigned int)v23;
    goto LABEL_50;
  }
  return 0;
}
