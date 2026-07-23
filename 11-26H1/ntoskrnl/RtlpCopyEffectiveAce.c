/*
 * XREFs of RtlpCopyEffectiveAce @ 0x1408EA910
 * Callers:
 *     RtlpCopyAces @ 0x1408EA440 (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x1408EB060 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlEqualPrefixSid @ 0x1408EB66C (RtlEqualPrefixSid.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        char *Src,
        char a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
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
  __int64 v16; // rdi
  __int64 v17; // r12
  _BYTE *v19; // r10
  unsigned __int8 v20; // cl
  __int64 v21; // rbx
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  char *v26; // rcx
  _BYTE *v27; // rax
  unsigned __int8 *v28; // rdi
  char *v29; // rdx
  char *v30; // r12
  unsigned int v31; // r13d
  char *v32; // rbx
  int v33; // eax
  int v34; // r8d
  int v35; // eax
  int v36; // eax
  ULONG v37; // eax
  __int64 v38; // rcx
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // edx
  __int64 v43; // rax
  char *v44; // r11
  __int64 i; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  char v50; // [rsp+28h] [rbp-B1h]
  char *Sid1; // [rsp+30h] [rbp-A9h]
  unsigned int Size; // [rsp+40h] [rbp-99h]
  char *Srca; // [rsp+48h] [rbp-91h]
  int v55; // [rsp+50h] [rbp-89h]
  int v56; // [rsp+50h] [rbp-89h]
  unsigned __int8 *v57; // [rsp+58h] [rbp-81h]
  int v58; // [rsp+60h] [rbp-79h]
  char *v60; // [rsp+78h] [rbp-61h]
  int Sid2; // [rsp+88h] [rbp-51h] BYREF
  __int64 v62; // [rsp+8Ch] [rbp-4Dh]
  char v63[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v64; // [rsp+C0h] [rbp-19h]

  v16 = a6;
  v17 = a7;
  v19 = a15;
  if ( !a6 )
    v16 = (__int64)a4;
  if ( !a7 )
    v17 = (__int64)a5;
  v50 = 0;
  Sid2 = 257;
  v62 = 50331648LL;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v20 = *Src;
  v21 = *((unsigned __int16 *)Src + 1);
  if ( (unsigned __int8)*Src <= 8u || (unsigned __int8)(v20 - 11) > 1u && v20 < 0xFu )
  {
    v57 = 0LL;
    v60 = 0LL;
    v58 = 0;
    if ( v20 <= 3u )
    {
      Size = 8;
      Sid1 = Src + 8;
LABEL_24:
      Srca = Src;
      goto LABEL_25;
    }
    if ( (unsigned __int8)(v20 - 9) <= 1u || v20 >= 0xDu )
    {
      Size = 8;
      Sid1 = Src + 8;
      v60 = &Src[RtlLengthSid(Src + 8) + 8];
      v37 = RtlLengthSid(Src + 8);
      v19 = a15;
      v58 = v21 - v37 - 8;
      goto LABEL_24;
    }
    if ( v20 != 4 )
    {
      v42 = *((_DWORD *)Src + 2);
      v43 = 28LL;
      if ( (v42 & 2) == 0 )
        v43 = 12LL;
      Sid1 = &Src[16 * (v42 & 1) + v43];
      Size = v43 + 16 * (v42 & 1);
      if ( (v42 & 2) != 0 )
      {
        if ( (v42 & 1) != 0 )
          v44 = Src + 28;
        else
          v44 = Src + 12;
      }
      else
      {
        v44 = 0LL;
      }
      Srca = Src;
      if ( a14 )
      {
        Srca = Src;
        if ( v44 )
        {
          if ( a9 )
          {
            for ( i = 0LL; ; i = (unsigned int)(v56 + 1) )
            {
              v56 = i;
              if ( (unsigned int)i >= a10 )
                break;
              v46 = *(_QWORD **)(a9 + 8 * i);
              v47 = *(_QWORD *)v44 - *v46;
              if ( *(_QWORD *)v44 == *v46 )
                v47 = *((_QWORD *)v44 + 1) - v46[1];
              if ( !v47 )
              {
                *a14 = 1;
                if ( a3 )
                {
                  v50 = 1;
                  goto LABEL_24;
                }
                *a15 = 1;
                if ( (*((_DWORD *)Src + 2) & 1) != 0 )
                {
                  LODWORD(v21) = v21 - 16;
                  Size -= 16;
                  memmove(v63, Src, Size);
                  v64 &= ~2u;
                  v19 = a15;
                  Srca = v63;
                }
                else
                {
                  LODWORD(v21) = v21 - 20;
                  Size -= 20;
                  memmove(v63, Src, Size);
                  v19 = a15;
                  Srca = v63;
                  v63[0] = *((_BYTE *)RtlBaseAceType + (unsigned __int8)*Src);
                }
                goto LABEL_25;
              }
            }
          }
          LODWORD(v21) = 0;
          goto LABEL_19;
        }
      }
LABEL_25:
      if ( !(_DWORD)v21 )
        goto LABEL_12;
      v23 = *((_DWORD *)Src + 1);
      if ( v23 < 0 )
        v23 |= *a8;
      if ( (v23 & 0x40000000) != 0 )
        v23 |= a8[1];
      if ( (v23 & 0x20000000) != 0 )
        v23 |= a8[2];
      if ( (v23 & 0x10000000) != 0 )
        v23 |= a8[3];
      v24 = (unsigned __int8)*Src;
      if ( !(_BYTE)v24 || (unsigned __int8)v24 <= 0xAu && (v34 = 1650, _bittest(&v34, v24)) )
        v25 = v23 & a8[3] & 0xFFFFFFF;
      else
        v25 = v23 & (a8[3] & 0xEFFFFFF | 0x1000000);
      if ( v25 != *((_DWORD *)Src + 1) )
        *v19 = 1;
      v26 = Sid1;
      v55 = v25 & 0x11FFFFF;
      if ( (v25 & 0x11FFFFF) == 0 && !RtlEqualPrefixSid(Sid1, &Sid2) )
      {
        LODWORD(v21) = 0;
        goto LABEL_12;
      }
      if ( *v26 == 1 && !v26[2] && !v26[3] && !v26[4] && !v26[5] && !v26[6] && v26[7] == 3 && v26[1] == 1 )
      {
        v33 = *((_DWORD *)v26 + 2);
        if ( !v33 )
        {
          v28 = a4;
          v27 = a15;
          LODWORD(v21) = v21 + 4 * a4[1] - 4;
          *a15 = 1;
          goto LABEL_48;
        }
        v35 = v33 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( !v36 )
          {
            Sid1 = (char *)v16;
            v27 = a15;
            LODWORD(v21) = v21 + 4 * *(unsigned __int8 *)(v16 + 1) - 4;
            *a15 = 1;
            goto LABEL_47;
          }
          if ( v36 == 1 )
          {
            v28 = (unsigned __int8 *)v17;
            v27 = a15;
            LODWORD(v21) = v21 + 4 * *(unsigned __int8 *)(v17 + 1) - 4;
            *a15 = 1;
            goto LABEL_48;
          }
        }
        else if ( a5 )
        {
          v28 = a5;
          v27 = a15;
          LODWORD(v21) = v21 + 4 * a5[1] - 4;
          *a15 = 1;
          goto LABEL_48;
        }
      }
      v27 = a15;
LABEL_47:
      v28 = (unsigned __int8 *)Sid1;
LABEL_48:
      if ( v50 && *v27 )
      {
        if ( (*((_DWORD *)Src + 2) & 1) != 0 )
        {
          LODWORD(v21) = v21 - 16;
          Size -= 16;
          memmove(v63, Src, Size);
          v64 &= ~2u;
          v29 = v63;
        }
        else
        {
          LODWORD(v21) = v21 - 20;
          Size -= 20;
          memmove(v63, Src, Size);
          v29 = v63;
          v63[0] = *((_BYTE *)RtlBaseAceType + (unsigned __int8)*Src);
        }
      }
      else
      {
        v29 = Srca;
      }
      v30 = (char *)*a11;
      v31 = v21;
      if ( *a11 && (unsigned int)v21 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v30 )
      {
        memmove(*a11, v29, Size);
        v32 = &v30[Size];
        if ( v57 )
        {
          memmove(v32, v57, 4LL * v57[1] + 8);
          v32 += 4 * v57[1] + 8;
        }
        memmove(v32, v28, 4LL * v28[1] + 8);
        v21 = (__int64)&v32[4 * v28[1] + 8];
        if ( v60 && v58 > 0 )
        {
          memmove((void *)v21, v60, v58);
          LODWORD(v21) = v58 + v21;
        }
        LODWORD(v21) = v21 - *(_DWORD *)a11;
        if ( v31 < (unsigned int)v21 )
          return 0;
        *((_WORD *)*a11 + 1) = v21;
        *((_DWORD *)*a11 + 1) = v55;
        goto LABEL_12;
      }
LABEL_57:
      *a16 = 1;
      goto LABEL_17;
    }
    v57 = (unsigned __int8 *)(Src + 12);
    Size = 12;
    Sid1 = &Src[RtlLengthSid(Src + 12) + 12];
    if ( !RtlEqualPrefixSid(Src + 12, &Sid2) )
    {
      v19 = a15;
      goto LABEL_106;
    }
    v39 = *(_DWORD *)(v38 + 8);
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( !v41 )
        {
          v19 = a15;
          v57 = (unsigned __int8 *)v16;
          LODWORD(v21) = v21 + 4 * *(unsigned __int8 *)(v16 + 1) - 4;
          *a15 = 1;
          goto LABEL_24;
        }
        if ( v41 == 1 )
        {
          v19 = a15;
          v57 = (unsigned __int8 *)v17;
          LODWORD(v21) = v21 + 4 * *(unsigned __int8 *)(v17 + 1) - 4;
          *a15 = 1;
          goto LABEL_24;
        }
        goto LABEL_105;
      }
      v48 = (__int64)a5;
      if ( !a5 )
      {
LABEL_105:
        v19 = a15;
        if ( *a15 )
          goto LABEL_24;
LABEL_106:
        v57 = 0LL;
        Size = 4 * *(unsigned __int8 *)(v38 + 1) + 20;
        goto LABEL_24;
      }
    }
    else
    {
      v48 = (__int64)a4;
    }
    v19 = a15;
    v57 = (unsigned __int8 *)v48;
    v49 = *(unsigned __int8 *)(v48 + 1);
    *a15 = 1;
    LODWORD(v21) = v21 + 4 * v49 - 4;
    goto LABEL_24;
  }
  if ( v21 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    goto LABEL_57;
  memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
LABEL_12:
  if ( !*a16 && (_DWORD)v21 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(a13 + 4);
  }
LABEL_17:
  if ( (unsigned int)v21 <= 0xFFFF )
  {
    if ( *a16 )
    {
LABEL_20:
      *a12 = v21;
      return 1;
    }
LABEL_19:
    *a11 = (char *)*a11 + (unsigned int)v21;
    goto LABEL_20;
  }
  return 0;
}
