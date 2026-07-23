/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x1800AD6E0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToAscii @ 0x1800ADCE0 (RtlIdnToAscii.c)
 *     RtlpNameprepAsciiWorker @ 0x1800ADDE0 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlpGetNormalization @ 0x1800AD560 (RtlpGetNormalization.c)
 *     RtlNormalizeString @ 0x1800ADEF0 (RtlNormalizeString.c)
 *     RtlpNormalizeStringWorker @ 0x1800ADF80 (RtlpNormalizeStringWorker.c)
 *     FindEmailAt @ 0x1800AE33C (FindEmailAt.c)
 *     punycode_encode @ 0x1800AEE44 (punycode_encode.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

int __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        int *a5,
        char a6,
        wchar_t *DestinationString,
        __int64 a8,
        _WORD *Src)
{
  int v9; // ebp
  int v11; // r12d
  int v12; // r13d
  bool v13; // dl
  int v14; // ebx
  unsigned __int16 *v15; // rax
  __int64 v16; // rcx
  bool v17; // r11
  unsigned int v18; // r10d
  unsigned __int16 *v19; // rsi
  unsigned __int16 *v20; // rdi
  unsigned __int16 *v21; // r8
  unsigned __int16 *v22; // rdx
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // edi
  LONG v26; // ebx
  WCHAR *v27; // r9
  LONG v28; // eax
  int result; // eax
  bool v30; // zf
  wchar_t v31; // ax
  LONG v32; // edi
  int EmailAt; // eax
  bool v34; // zf
  unsigned __int16 v35; // ax
  int v36; // eax
  int v37; // ecx
  __int64 v38; // rax
  LONG DestinationStringLength; // [rsp+30h] [rbp-58h] BYREF
  int v40; // [rsp+34h] [rbp-54h]
  __int64 v41; // [rsp+38h] [rbp-50h] BYREF
  __int64 v42; // [rsp+40h] [rbp-48h]
  char v43; // [rsp+98h] [rbp+10h]
  void *v44; // [rsp+A8h] [rbp+20h]
  char v45; // [rsp+C8h] [rbp+40h]

  v44 = a4;
  v9 = a3;
  if ( !a2 )
    return -1073741811;
  if ( a3 < -1 )
    return -1073741811;
  if ( !a5 )
    return -1073741811;
  v11 = *a5;
  if ( *a5 < 0 || v11 > 0 && !a4 )
    return -1073741811;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return -1073741811;
  v45 = 0;
  v12 = a1 & 4;
  v40 = a1 & 1;
  v13 = v12 != 0;
  v14 = a1 & 2;
  v43 = v14 != 0;
  if ( a3 != -1 )
    goto LABEL_14;
  v15 = a2;
  v16 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v16;
  }
  while ( v16 );
  if ( !v16 )
    return -1073741811;
  v9 = 0x7FFFFFFF - v16 + 1;
  v13 = v12 != 0;
LABEL_14:
  if ( v9 > 0 && !a2[v9 - 1] )
  {
    v45 = 1;
    --v9;
  }
  v17 = v13;
  v42 = v9;
  LOWORD(v18) = 46;
  v19 = a2 - 1;
  v20 = &a2[v9];
  if ( v12 )
  {
    EmailAt = FindEmailAt(a2, (unsigned int)v9, 0LL);
    a4 = v44;
    v21 = &a2[EmailAt];
  }
  else
  {
    v21 = a2 - 1;
  }
  if ( v21 == v20 || v9 <= 0 )
    goto LABEL_33;
  v22 = a2;
  while ( v22 != v20 )
  {
    v18 = *v22;
    if ( v18 >= 0x7F )
      goto LABEL_33;
    v23 = 64;
    if ( !v17 )
      v23 = 46;
    if ( v18 == v23 )
    {
      if ( v17 )
      {
        if ( v22 == a2 )
          goto LABEL_33;
        if ( v22 == v21 - 1 )
          v17 = 0;
      }
      else if ( v22 == v19 + 1
             || (__int64)(((char *)v22 - (char *)v19) & 0xFFFFFFFFFFFFFFFEuLL) > 128
             || v14 && v22 > a2 && *(v22 - 1) == 45 )
      {
        goto LABEL_33;
      }
      v19 = v22++;
    }
    else
    {
      if ( v17 )
      {
        v34 = (_WORD)v18 == 0;
      }
      else
      {
        if ( !v14 )
          goto LABEL_46;
        if ( v18 != 45 )
        {
          if ( (unsigned __int16)(v18 - 45) > 0x2Du || (v24 = 0x3FFFFFF01FFBLL, !_bittest64(&v24, v18 - 45)) )
          {
            if ( (unsigned __int16)(v18 - 97) > 0x19u )
              goto LABEL_33;
          }
LABEL_46:
          if ( v18 < 0x20 )
            goto LABEL_33;
          goto LABEL_47;
        }
        v34 = v22 == v19 + 1;
      }
      if ( v34 )
        goto LABEL_33;
LABEL_47:
      ++v22;
    }
  }
  if ( !v17
    && ((__int64)(((char *)v20 - (char *)v19) & 0xFFFFFFFFFFFFFFFEuLL) > 128
     || v20 - v21 > ((_WORD)v18 == 46) + 255LL
     || v14 && (_WORD)v18 == 45) )
  {
LABEL_33:
    v25 = 0;
    v26 = 0;
    v27 = DestinationString;
    v28 = 511;
    if ( !v12 )
    {
LABEL_34:
      if ( v25 >= v9 )
      {
LABEL_38:
        if ( v26 > 0 )
        {
          v31 = DestinationString[v26 - 1];
          if ( v31 == 46 )
          {
            v35 = a2[v42 - 1];
            if ( v35 != 46 && v35 != 12290 && v35 != 0xFF0E && v35 != 0xFF61 )
            {
              *a5 = 0;
              return -1073740010;
            }
          }
          else if ( !v31 )
          {
            goto LABEL_77;
          }
        }
        DestinationStringLength = 515;
        result = punycode_encode(DestinationString, v12 != 0, v43);
        v32 = DestinationStringLength;
        if ( DestinationStringLength )
        {
          if ( !a6 )
          {
            if ( v45 )
            {
              if ( v26 > 511 )
                goto LABEL_77;
              v38 = v26++;
              DestinationString[v38] = 0;
            }
            if ( v44 && v11 )
            {
              if ( v26 > v11 )
                goto LABEL_111;
              memmove(v44, DestinationString, 2LL * v26);
            }
            *a5 = v26;
            return 0;
          }
          if ( !v45 )
            goto LABEL_44;
          if ( DestinationStringLength < 515 )
          {
            Src[DestinationStringLength] = 0;
            ++v32;
LABEL_44:
            if ( v44 && v11 )
            {
              if ( v32 > v11 )
                goto LABEL_111;
              memmove(v44, Src, 2LL * v32);
            }
            *a5 = v32;
            return 0;
          }
LABEL_77:
          *a5 = 0;
          return -1073740010;
        }
LABEL_84:
        *a5 = 0;
        return result;
      }
      DestinationStringLength = v28;
      result = RtlNormalizeString(((v40 ^ 1) << 8) + 13, &a2[v25], v9 - v25, v27, &DestinationStringLength);
      v30 = result == 0;
      if ( result >= 0 )
      {
        if ( DestinationStringLength )
        {
          v26 += DestinationStringLength;
          goto LABEL_38;
        }
        v30 = result == 0;
      }
      if ( !v30 && result != -1073741789 && result != -1073740009 && DestinationStringLength <= 0 )
        goto LABEL_84;
LABEL_83:
      result = -1073740010;
      goto LABEL_84;
    }
    v36 = FindEmailAt(a2, (unsigned int)v9, v21);
    v25 = v36;
    if ( !v36 )
      goto LABEL_77;
    v41 = 0LL;
    v26 = 511;
    DestinationStringLength = 511;
    if ( v36 < -1 )
    {
      result = -1073741811;
    }
    else
    {
      result = RtlpGetNormalization(1u, &v41);
      v37 = result;
      if ( result >= 0 )
      {
        result = RtlpNormalizeStringWorker(
                   v41,
                   (_DWORD)a2,
                   v25,
                   (_DWORD)DestinationString,
                   (__int64)&DestinationStringLength);
        v37 = result;
        if ( result >= 0 )
        {
          v26 = DestinationStringLength;
          if ( DestinationStringLength )
          {
            v27 = &DestinationString[DestinationStringLength];
            v28 = 511 - DestinationStringLength;
            goto LABEL_34;
          }
        }
        else
        {
          v26 = DestinationStringLength;
        }
        if ( !result )
          goto LABEL_83;
      }
      if ( v37 == -1073741789 || v37 == -1073740009 )
        goto LABEL_83;
    }
    if ( v26 > 0 )
    {
      result = -1073740010;
      *a5 = 0;
      return result;
    }
    goto LABEL_84;
  }
  if ( v45 )
    ++v9;
  if ( !a4 || !v11 )
  {
LABEL_63:
    *a5 = v9;
    return 0;
  }
  if ( v9 <= v11 )
  {
    memmove(a4, a2, 2LL * v9);
    goto LABEL_63;
  }
LABEL_111:
  *a5 = 0;
  return -1073741789;
}
