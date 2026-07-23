/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x18001F290
 * Callers:
 *     toupper @ 0x18012D5E0 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1801405A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18001FAC0 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // esi
  ULONG v8; // ebp
  CHAR *v9; // rdi
  unsigned __int16 *MultiByteTable; // r11
  _WORD *WideCharTable; // r10
  __int64 v12; // r15
  ULONG v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  NTSTATUS v17; // r15d
  ULONG v18; // r12d
  unsigned int v19; // r13d
  __int64 v20; // r10
  __int64 v21; // r13
  WCHAR *v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r15
  PCHAR v26; // r8
  __int64 i; // r12
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  unsigned __int16 v31; // r9
  __int16 v32; // dx
  unsigned int v33; // eax
  signed __int32 v34[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-D8h]
  ULONG UTF8StringActualByteCount; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v37; // [rsp+38h] [rbp-D0h]
  WCHAR UnicodeStringSource[64]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = BytesInUnicodeString >> 1;
  v8 = MaxBytesInMultiByteString;
  v9 = MultiByteString;
  _InterlockedOr(v34, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    v17 = 0;
    v18 = 0;
    v37 = qword_1801C5038;
    while ( v6 && v8 )
    {
      UTF8StringActualByteCount = 0;
      if ( v6 >= 0x40 )
      {
        v19 = 64;
        v35 = 64;
        if ( v6 != 64 )
        {
          if ( (unsigned int)UnicodeString[63] - 55296 <= 0x3FF )
            v19 = 63;
          v35 = v19;
        }
      }
      else
      {
        v19 = v6;
        v35 = v6;
      }
      v20 = v19;
      v21 = v37;
      v22 = UnicodeStringSource;
      do
      {
        v23 = *(WCHAR *)((char *)v22 + (char *)UnicodeString - (char *)UnicodeStringSource);
        if ( (unsigned int)v23 >= 0x61 )
        {
          if ( (unsigned int)v23 > 0x7A )
          {
            if ( v21 && (unsigned __int16)v23 >= 0xC0u )
              LOWORD(v23) = *(_WORD *)(v21
                                     + 2
                                     * ((v23 & 0xF)
                                      + *(unsigned __int16 *)(v21
                                                            + 2LL
                                                            * (((unsigned __int8)v23 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v21 + 2 * (v23 >> 8))))))
                          + v23;
          }
          else
          {
            LOWORD(v23) = v23 - 32;
          }
        }
        *v22++ = v23;
        --v20;
      }
      while ( v20 );
      v24 = v35;
      v17 = 0;
      if ( RtlUnicodeToUTF8N(v9, v8, &UTF8StringActualByteCount, UnicodeStringSource, 2 * v35) < 0 )
      {
        v18 += UTF8StringActualByteCount;
        v17 = -2147483643;
        break;
      }
      UnicodeString += v24;
      v9 += UTF8StringActualByteCount;
      v8 -= UTF8StringActualByteCount;
      v18 += UTF8StringActualByteCount;
      v6 -= v24;
    }
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = v18;
    return v17;
  }
  else
  {
    _InterlockedOr(v34, 0);
    MultiByteTable = GlobalRtlNlsState.MultiByteTable;
    WideCharTable = GlobalRtlNlsState.WideCharTable;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      v25 = qword_1801C5020;
      v26 = MultiByteString;
      for ( i = qword_1801C5038; v6; --v6 )
      {
        if ( !v8 )
          break;
        v28 = *UnicodeString++;
        v29 = WideCharTable[v28];
        v30 = *(unsigned __int16 *)(v25 + 2 * ((unsigned __int64)v29 >> 8));
        if ( (_WORD)v30 )
          v31 = GlobalRtlNlsState.DBCSOffsets[v30 + (unsigned __int8)v29];
        else
          v31 = MultiByteTable[(unsigned __int8)v29];
        if ( v31 >= 0x61u )
        {
          if ( v31 > 0x7Au )
          {
            if ( i && v31 >= 0xC0u )
              v31 += *(_WORD *)(i
                              + 2LL
                              * ((v31 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(i
                                                                   + 2LL
                                                                   * (((v31 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(i + 2 * ((unsigned __int64)v31 >> 8))))));
          }
          else
          {
            v31 -= 32;
          }
        }
        v32 = WideCharTable[v31];
        if ( HIBYTE(v32) )
        {
          v33 = v8--;
          if ( v33 < 2 )
            break;
          *v26++ = HIBYTE(v32);
        }
        *v26 = v32;
        --v8;
        ++v26;
      }
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = (_DWORD)v26 - (_DWORD)v9;
      return v8 < v6 ? 0x80000005 : 0;
    }
    else
    {
      v12 = qword_1801C5038;
      v13 = MaxBytesInMultiByteString;
      if ( v6 < MaxBytesInMultiByteString )
        v13 = BytesInUnicodeString >> 1;
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = v13;
      if ( v13 )
      {
        v14 = v13;
        do
        {
          v15 = MultiByteTable[*((unsigned __int8 *)WideCharTable + *UnicodeString)];
          if ( (unsigned int)v15 >= 0x61 )
          {
            if ( (unsigned int)v15 > 0x7A )
            {
              if ( v12 )
              {
                if ( (unsigned __int16)v15 >= 0xC0u )
                  LOWORD(v15) = *(_WORD *)(v12
                                         + 2
                                         * ((v15 & 0xF)
                                          + *(unsigned __int16 *)(v12
                                                                + 2LL
                                                                * (((unsigned __int8)v15 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(v12 + 2 * (v15 >> 8))))))
                              + v15;
              }
            }
            else
            {
              LOWORD(v15) = v15 - 32;
            }
          }
          ++UnicodeString;
          *v9++ = *((_BYTE *)WideCharTable + (unsigned __int16)v15);
          --v14;
        }
        while ( v14 );
      }
      return MaxBytesInMultiByteString < v6 ? 0x80000005 : 0;
    }
  }
}
