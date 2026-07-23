/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x1800333F0
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A3DE0 (RtlSetCurrentDirectory_U.c)
 *     RtlIsDosDeviceName_U @ 0x1800D4440 (RtlIsDosDeviceName_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800A4BA0 (RtlEqualUnicodeString.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1801141C0 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     iswdigit @ 0x18012AAF0 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__m128i *a1)
{
  __int16 v1; // r8
  unsigned int v2; // ebx
  _WORD *v3; // rdx
  __int16 v4; // r10
  __m128i v5; // xmm0
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // xmm0_8
  unsigned __int16 *v10; // rdi
  __int16 v11; // cx
  int v12; // r15d
  _WORD *i; // rax
  __int16 v14; // cx
  wchar_t *v15; // rax
  __int16 v16; // cx
  unsigned __int16 v17; // cx
  __int16 Buffer; // cx
  unsigned __int16 v20; // cx
  __int16 v21; // ax
  unsigned __int16 v22; // ax
  unsigned __int16 *v23; // rcx
  unsigned __int64 v24; // r8
  unsigned __int16 *v25; // rax
  int v26; // ebp
  __int16 v27; // si
  __int64 v28; // rcx
  unsigned __int16 *v29; // r10
  char *v30; // r11
  __int16 v31; // ax
  __int16 v32; // ax
  _UNICODE_STRING *v33; // rdx
  _UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1->m128i_i16[0];
  v2 = 0;
  v3 = (_WORD *)a1->m128i_i64[1];
  v4 = 0;
  if ( a1->m128i_i16[0] >= 2u && (*v3 == 92 || *v3 == 47) && (unsigned __int16)v1 >= 4u )
  {
    v31 = v3[1];
    if ( v31 == 92 || v31 == 47 )
    {
      if ( (unsigned __int16)v1 < 6u )
        return 0LL;
      v32 = v3[2];
      if ( v32 != 46 && v32 != 63 )
        return 0LL;
      if ( v1 != 6 )
        return 0LL;
    }
  }
  v5 = *a1;
  v6 = (unsigned int)_mm_cvtsi128_si32(*a1);
  String1 = (_UNICODE_STRING)*a1;
  v7 = (unsigned __int16)v6;
  v8 = (unsigned __int16)v6;
  LOWORD(v8) = (unsigned __int16)v6 >> 1;
  if ( !((unsigned __int16)v6 >> 1) )
    return 0LL;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  v10 = (unsigned __int16 *)v9;
  if ( *(_WORD *)(v9 + 2LL * (unsigned __int16)v8 - 2) == 58 )
  {
    v6 = (unsigned int)(unsigned __int16)v6 - 2;
    v4 = 1;
    LOWORD(v8) = v8 - 1;
    if ( !(_WORD)v8 )
      return 0LL;
  }
  do
  {
    v11 = *(_WORD *)(v9 + 2LL * (unsigned __int16)v8 - 2);
    if ( v11 != 46 && v11 != 32 )
      break;
    LOWORD(v6) = v6 - 2;
    ++v4;
    LOWORD(v8) = v8 - 1;
  }
  while ( (_WORD)v8 );
  v12 = 0;
  if ( (_WORD)v8 )
  {
    for ( i = (_WORD *)(v9 + 2 * ((unsigned __int16)v8 - 1LL)); ; --i )
    {
      if ( (unsigned __int64)i < v9 )
      {
        v6 = 40965LL;
        goto LABEL_23;
      }
      v14 = *i;
      if ( *i == 92 || v14 == 47 || v14 == 58 && i == (_WORD *)(v9 + 2) )
        break;
    }
    v15 = i + 1;
    v2 = 1;
    if ( (unsigned __int64)v15 >= v9 + (v7 & 0xFFFFFFFFFFFFFFFEuLL) )
      return 0LL;
    v16 = *v15 | 0x20;
    if ( v16 == 108 )
    {
      v6 = 40965LL;
    }
    else
    {
      v17 = v16 - 97;
      if ( v17 > 0xFu )
        return 0LL;
      v6 = 40965LL;
      if ( !_bittest((const int *)&v6, v17) )
        return 0LL;
    }
    Buffer = (__int16)String1.Buffer;
    v12 = (_DWORD)v15 - LODWORD(String1.Buffer);
    String1.Buffer = v15;
    v10 = v15;
    v20 = v7 + Buffer - (_WORD)v15;
    v8 = v20;
    LOWORD(v8) = (v20 >> 1) - v4;
    String1.Length = v20 - 2 * v4;
LABEL_23:
    v21 = *v10 | 0x20;
    if ( v21 != 108 )
    {
      v22 = v21 - 97;
      if ( v22 > 0xFu || !_bittest((const int *)&v6, v22) )
        return 0LL;
    }
  }
  v23 = v10;
  v24 = (unsigned __int64)&v10[(unsigned __int16)v8];
  while ( (unsigned __int64)v23 < v24 )
  {
    if ( *v23 == 46 || *v23 == 58 )
    {
      v24 = (unsigned __int64)(v23 + 1);
      v8 = (unsigned __int64)&v10[(unsigned __int16)v8];
      while ( v24 < v8 )
      {
        if ( *(_WORD *)v24 != 32 )
        {
          v2 |= 2u;
          goto LABEL_35;
        }
        v24 += 2LL;
      }
      break;
    }
    ++v23;
  }
LABEL_35:
  if ( v23 > v10 )
  {
    do
    {
      v25 = v23 - 1;
      if ( *(v23 - 1) != 32 )
        break;
      --v23;
    }
    while ( v25 > v10 );
  }
  v26 = (unsigned __int16)(v23 - v10);
  v27 = 2 * v26;
  String1.Length = 2 * v26;
  if ( v26 == 3 )
  {
    if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosNULDevice, 1u) )
    {
      v2 |= 4u;
      goto LABEL_65;
    }
    if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosPRNDevice, 1u)
      || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosAUXDevice, 1u) )
    {
      goto LABEL_65;
    }
    v33 = (_UNICODE_STRING *)&RtlpDosCONDevice;
LABEL_64:
    if ( RtlEqualUnicodeString(&String1, v33, 1u) )
      goto LABEL_65;
    return 0LL;
  }
  if ( v26 == 4 )
  {
    if ( !iswdigit(v10[3]) || v10[3] == 48 )
      return 0LL;
    String1.Length = v27 - 2;
    if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosLPTDevice, 1u) )
      goto LABEL_65;
    v33 = (_UNICODE_STRING *)&RtlpDosCOMDevice;
    goto LABEL_64;
  }
  v28 = (unsigned int)(v26 - 6);
  if ( v26 == 6 )
  {
    if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosCONINDevice, 1u) )
      goto LABEL_65;
    return 0LL;
  }
  if ( v26 != 7 || v27 != 14 )
    return 0LL;
  v29 = v10 + 7;
  v30 = (char *)((char *)L"CONOUT$" - (char *)v10);
  while ( v10 < v29 )
  {
    v24 = *v10;
    v6 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v30);
    if ( (_WORD)v24 != (_WORD)v6 )
    {
      if ( (unsigned int)v24 >= 0x61 )
      {
        if ( (unsigned int)v24 > 0x7A )
        {
          if ( qword_1801C5038 && (unsigned __int16)v24 >= 0xC0u )
          {
            v8 = v24 & 0xF;
            v28 = (unsigned int)v8
                + *(unsigned __int16 *)(qword_1801C5038
                                      + 2LL
                                      * (((unsigned __int8)v24 >> 4)
                                       + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v24 >> 8))));
            LOWORD(v24) = *(_WORD *)(qword_1801C5038 + 2 * v28) + v24;
          }
        }
        else
        {
          LOWORD(v24) = v24 - 32;
        }
      }
      if ( (unsigned int)v6 >= 0x61 )
      {
        if ( (unsigned int)v6 > 0x7A )
        {
          if ( qword_1801C5038 )
          {
            if ( (unsigned __int16)v6 >= 0xC0u )
            {
              v8 = v6 & 0xF;
              v28 = (unsigned int)v8
                  + *(unsigned __int16 *)(qword_1801C5038
                                        + 2LL
                                        * (((unsigned __int8)v6 >> 4)
                                         + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v6 >> 8))));
              LOWORD(v6) = *(_WORD *)(qword_1801C5038 + 2 * v28) + v6;
            }
          }
        }
        else
        {
          LOWORD(v6) = v6 - 32;
        }
      }
      if ( (_WORD)v24 != (_WORD)v6 )
        return 0LL;
    }
    ++v10;
  }
LABEL_65:
  if ( v2 && (v2 < 4 || (v2 & 2) != 0) && !(unsigned __int8)RtlpAreLegacyDosDeviceNamesEnabled(v28, v8, v24, v6) )
    return 0LL;
  return (2 * v26) | (unsigned int)(v12 << 16);
}
