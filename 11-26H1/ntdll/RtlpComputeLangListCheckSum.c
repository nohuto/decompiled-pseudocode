/*
 * XREFs of RtlpComputeLangListCheckSum @ 0x180054740
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x180025100 (RtlUpcaseUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025D10 (RtlAnsiStringToUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlIntegerToChar @ 0x1800557B0 (RtlIntegerToChar.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpComputeLangListCheckSum(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned int i; // r12d
  unsigned __int16 *v5; // rdx
  int v6; // ecx
  CHAR *v7; // rcx
  size_t v8; // rax
  LCID v9; // ecx
  wchar_t *Buffer; // rbx
  __int64 v11; // rsi
  unsigned int v12; // r9d
  wchar_t *v13; // r10
  unsigned __int64 v14; // rax
  __int16 v15; // r8
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int16 v19; // cx
  const void *v20; // r14
  unsigned __int64 v21; // r15
  __int64 Length; // r9
  unsigned __int8 *v23; // r8
  int result; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rax
  _UNICODE_STRING String; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  CHAR v31[16]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h]
  _WORD v34[88]; // [rsp+70h] [rbp-90h] BYREF

  v2 = 0LL;
  memset_thunk_772440563353939046(v34, 0, 0xAAuLL);
  String = 0LL;
  if ( !a1 )
    return -1073741811;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&DestinationString.Length = v3;
  if ( !v3 )
    return -1073741811;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
  {
    *(_OWORD *)v31 = 0LL;
    v5 = (unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL * i);
    v6 = *v5;
    v32 = 0LL;
    v33 = 0;
    if ( v6 == 1 )
    {
      *(_WORD *)&v31[4] = v5[2];
    }
    else
    {
      if ( !v6 )
        continue;
      v16 = v6 - 2;
      if ( !v16 )
      {
        v7 = (CHAR *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL) + 28LL * (__int16)v5[2]);
        goto LABEL_8;
      }
      if ( v16 != 1 )
        return -1073741595;
      *(_WORD *)&v31[6] = v5[2];
    }
    v7 = v31;
LABEL_8:
    v8 = *((__int16 *)v7 + 3);
    if ( (__int16)v8 > 0 )
    {
      v17 = *(_QWORD *)(v3 + 32);
      *(_OWORD *)v31 = 0LL;
      v18 = *(__int16 *)(*(_QWORD *)(v17 + 16) + 2 * v8);
      v19 = 0;
      v20 = (const void *)(*(_QWORD *)(v17 + 24) + 2 * v18);
      LOWORD(v8) = 0;
      if ( v20 )
      {
        v8 = wcslen((const wchar_t *)(*(_QWORD *)(v17 + 24) + 2 * v18));
        if ( v8 > 0x7FFE )
          return -1073741562;
        LOWORD(v8) = 2 * v8;
        v19 = v8;
      }
      LODWORD(v8) = (unsigned __int16)v8;
      String.MaximumLength = 170;
      Buffer = v34;
      if ( v19 > 0xAAu )
        LODWORD(v8) = 170;
      String.Buffer = v34;
      v11 = (unsigned __int16)v8;
      String.Length = v8;
      v21 = (unsigned int)v8;
      memmove(v34, v20, (unsigned int)v8);
      if ( (unsigned __int64)(v11 + 2) <= 0xAA )
        v34[v21 >> 1] = 0;
    }
    else
    {
      v9 = *((unsigned __int16 *)v7 + 2);
      String.Buffer = v34;
      *(_DWORD *)&String.Length = 11141120;
      if ( !RtlLCIDToCultureName(v9, &String) )
        return -1073741595;
      Buffer = String.Buffer;
      LOWORD(v11) = String.Length;
    }
    if ( v2 )
    {
      RtlUpcaseUnicodeString(&String, &String, 0);
      Length = String.Length;
      v23 = (unsigned __int8 *)String.Buffer;
      if ( String.Length >= 8uLL )
      {
        v26 = (unsigned __int64)String.Length >> 3;
        Length = String.Length - 8 * v26;
        do
        {
          v27 = v23[6]
              + 37 * (v23[5] + 37 * (v23[4] + 37 * (v23[3] + 37 * (v23[2] + 37 * (v23[1] + 37 * (*v23 + 37 * v2))))));
          v28 = v23[7];
          v23 += 8;
          v2 = v28 + 37 * v27;
          --v26;
        }
        while ( v26 );
      }
      if ( Length != 2 )
      {
        switch ( Length )
        {
          case 1LL:
            goto LABEL_38;
          case 3LL:
            goto LABEL_58;
          case 4LL:
            goto LABEL_57;
          case 5LL:
            goto LABEL_56;
          case 6LL:
            goto LABEL_55;
          case 7LL:
            LODWORD(v2) = *v23++ + 37 * v2;
LABEL_55:
            LODWORD(v2) = *v23++ + 37 * v2;
LABEL_56:
            LODWORD(v2) = *v23++ + 37 * v2;
LABEL_57:
            LODWORD(v2) = *v23++ + 37 * v2;
LABEL_58:
            LODWORD(v2) = *v23++ + 37 * v2;
            break;
          default:
            goto LABEL_39;
        }
      }
      LODWORD(v2) = *v23++ + 37 * v2;
LABEL_38:
      LODWORD(v2) = *v23 + 37 * v2;
LABEL_39:
      v2 = (unsigned int)v2;
    }
    else
    {
      v12 = 314159;
      v13 = &Buffer[(unsigned __int64)(unsigned __int16)v11 >> 1];
      if ( Buffer < v13 )
      {
        while ( 1 )
        {
          v14 = *Buffer;
          if ( (unsigned int)v14 < 0x61 )
            goto LABEL_21;
          if ( (unsigned int)v14 > 0x7A )
            break;
          LOBYTE(v15) = v14 - 32;
          LOWORD(v14) = v14 - 32;
LABEL_16:
          ++Buffer;
          v12 = BYTE1(v14) + 37 * ((unsigned __int8)v15 + 37 * v12);
          if ( Buffer >= v13 )
            goto LABEL_17;
        }
        if ( qword_1801C5038 && (unsigned __int16)v14 >= 0xC0u )
        {
          v15 = *(_WORD *)(qword_1801C5038
                         + 2
                         * ((v14 & 0xF)
                          + *(unsigned __int16 *)(qword_1801C5038
                                                + 2LL
                                                * (((unsigned __int8)v14 >> 4)
                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v14 >> 8))))))
              + v14;
          LOWORD(v14) = v15;
          goto LABEL_16;
        }
LABEL_21:
        LOBYTE(v15) = *Buffer;
        goto LABEL_16;
      }
LABEL_17:
      v2 = v12;
    }
    v3 = *(_QWORD *)&DestinationString.Length;
  }
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  DestinationString.Buffer = (wchar_t *)(a1 + 44);
  *(_DWORD *)&DestinationString.Length = 1310720;
  result = RtlIntegerToChar(v2, 0x10u, 33, v31);
  if ( result >= 0 )
  {
    String.MaximumLength = 33;
    String.Buffer = (wchar_t *)v31;
    v25 = -1LL;
    do
      ++v25;
    while ( v31[v25] );
    String.Length = v25;
    return RtlAnsiStringToUnicodeString(&DestinationString, (PCANSI_STRING)&String, 0);
  }
  return result;
}
