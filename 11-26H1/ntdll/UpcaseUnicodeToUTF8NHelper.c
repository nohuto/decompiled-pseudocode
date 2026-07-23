/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x18001EB00
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18009EE40 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18009F1E0 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18001FAC0 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // r14d
  _DWORD *v6; // r15
  int v8; // ebp
  __int64 result; // rax
  unsigned int v13; // esi
  __int64 v14; // r15
  __int64 v15; // r11
  WCHAR *v16; // r9
  unsigned __int64 v17; // r8
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-E0h]
  _DWORD *v20; // [rsp+40h] [rbp-D8h]
  WCHAR UnicodeStringSource[64]; // [rsp+50h] [rbp-C8h] BYREF

  v5 = 0;
  v6 = a3;
  v8 = 0;
  v20 = a3;
  v19 = qword_1801C5038;
  while ( a5 && UTF8StringMaxByteCount )
  {
    UTF8StringActualByteCount = 0;
    if ( a5 >= 0x40 )
    {
      v13 = 64;
      if ( a5 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
        v13 = 63;
    }
    else
    {
      v13 = a5;
    }
    v14 = v19;
    v15 = v13;
    v16 = UnicodeStringSource;
    do
    {
      v17 = *(WCHAR *)((char *)v16 + a4 - (_QWORD)UnicodeStringSource);
      if ( (unsigned int)v17 >= 0x61 )
      {
        if ( (unsigned int)v17 > 0x7A )
        {
          if ( v14 && (unsigned __int16)v17 >= 0xC0u )
            LOWORD(v17) = *(_WORD *)(v14
                                   + 2
                                   * ((v17 & 0xF)
                                    + *(unsigned __int16 *)(v14
                                                          + 2LL
                                                          * (((unsigned __int8)v17 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v14 + 2 * (v17 >> 8))))))
                        + v17;
        }
        else
        {
          LOWORD(v17) = v17 - 32;
        }
      }
      *v16++ = v17;
      --v15;
    }
    while ( v15 );
    v6 = v20;
    if ( RtlUnicodeToUTF8N(
           UTF8StringDestination,
           UTF8StringMaxByteCount,
           &UTF8StringActualByteCount,
           UnicodeStringSource,
           2 * v13) < 0 )
    {
      v8 += UTF8StringActualByteCount;
      v5 = -2147483643;
      break;
    }
    UTF8StringDestination += UTF8StringActualByteCount;
    UTF8StringMaxByteCount -= UTF8StringActualByteCount;
    v8 += UTF8StringActualByteCount;
    a5 -= v13;
    a4 += 2LL * v13;
  }
  result = v5;
  if ( v6 )
    *v6 = v8;
  return result;
}
