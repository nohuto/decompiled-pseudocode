/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x1402151E0
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x14097C090 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14097C810 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14097D0C0 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(CHAR *a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r14d
  ULONG v7; // edi
  int v9; // ebp
  unsigned int v11; // esi
  __int64 v12; // r13
  __int64 v13; // r11
  WCHAR *v14; // r9
  unsigned __int64 v15; // rax
  __int64 result; // rax
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-E8h] BYREF
  PCHAR UTF8StringDestination; // [rsp+38h] [rbp-E0h]
  __int64 v19; // [rsp+40h] [rbp-D8h]
  WCHAR UnicodeStringSource[64]; // [rsp+50h] [rbp-C8h] BYREF

  v5 = 0;
  v7 = a2;
  UTF8StringDestination = a1;
  v9 = 0;
  v19 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2) + 1200);
  while ( a5 && v7 )
  {
    UTF8StringActualByteCount = 0;
    if ( a5 >= 0x40 )
    {
      v11 = 64;
      if ( a5 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
        v11 = 63;
    }
    else
    {
      v11 = a5;
    }
    v12 = v19;
    v13 = v11;
    v14 = UnicodeStringSource;
    do
    {
      v15 = *(WCHAR *)((char *)v14 + a4 - (_QWORD)UnicodeStringSource);
      if ( (unsigned int)v15 >= 0x61 )
      {
        if ( (unsigned int)v15 > 0x7A )
        {
          if ( v12 && (unsigned __int16)v15 >= 0xC0u )
            LOWORD(v15) = *(_WORD *)(v12
                                   + 2
                                   * ((v15 & 0xF)
                                    + *(unsigned __int16 *)(v12
                                                          + 2LL
                                                          * (((unsigned __int8)v15 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v12 + 2 * (v15 >> 8))))))
                        + v15;
        }
        else
        {
          LOWORD(v15) = v15 - 32;
        }
      }
      *v14++ = v15;
      --v13;
    }
    while ( v13 );
    if ( RtlUnicodeToUTF8N(UTF8StringDestination, v7, &UTF8StringActualByteCount, UnicodeStringSource, 2 * v11) < 0 )
    {
      v9 += UTF8StringActualByteCount;
      v5 = -2147483643;
      break;
    }
    a4 += 2LL * v11;
    UTF8StringDestination += UTF8StringActualByteCount;
    v7 -= UTF8StringActualByteCount;
    v9 += UTF8StringActualByteCount;
    a5 -= v11;
  }
  result = v5;
  if ( a3 )
    *a3 = v9;
  return result;
}
