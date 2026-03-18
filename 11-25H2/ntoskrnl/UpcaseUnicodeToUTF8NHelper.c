/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x14030F8DC
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x1408E6250 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1408E6D40 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1408E7AB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlUnicodeToUTF8N @ 0x1408E71D0 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  int v6; // esi
  _DWORD *v8; // r12
  unsigned int v12; // ebx
  struct _LIST_ENTRY *v13; // r12
  __int64 v14; // r11
  WCHAR *v15; // r9
  unsigned __int64 v16; // r8
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-E8h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+38h] [rbp-E0h]
  _DWORD *v20; // [rsp+40h] [rbp-D8h]
  WCHAR UnicodeStringSource[64]; // [rsp+50h] [rbp-C8h] BYREF

  v5 = 0;
  v20 = a3;
  v6 = 0;
  v8 = a3;
  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  while ( a5 && UTF8StringMaxByteCount )
  {
    UTF8StringActualByteCount = 0;
    if ( a5 >= 0x40 )
    {
      v12 = 64;
      if ( a5 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
        v12 = 63;
    }
    else
    {
      v12 = a5;
    }
    v13 = Flink;
    v14 = v12;
    v15 = UnicodeStringSource;
    do
    {
      v16 = *(WCHAR *)((char *)v15 + a4 - (_QWORD)UnicodeStringSource);
      if ( (unsigned int)v16 >= 0x61 )
      {
        if ( (unsigned int)v16 > 0x7A )
        {
          if ( v13 && (unsigned __int16)v16 >= 0xC0u )
            LOWORD(v16) = *((_WORD *)&v13->Flink
                          + (v16 & 0xF)
                          + *((unsigned __int16 *)&v13->Flink
                            + ((unsigned __int8)v16 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&v13->Flink + (v16 >> 8))))
                        + v16;
        }
        else
        {
          LOWORD(v16) = v16 - 32;
        }
      }
      *v15++ = v16;
      --v14;
    }
    while ( v14 );
    v8 = v20;
    if ( RtlUnicodeToUTF8N(
           UTF8StringDestination,
           UTF8StringMaxByteCount,
           &UTF8StringActualByteCount,
           UnicodeStringSource,
           2 * v12) < 0 )
    {
      v6 += UTF8StringActualByteCount;
      v5 = -2147483643;
      break;
    }
    UTF8StringDestination += UTF8StringActualByteCount;
    UTF8StringMaxByteCount -= UTF8StringActualByteCount;
    v6 += UTF8StringActualByteCount;
    a5 -= v12;
    a4 += 2LL * v12;
  }
  if ( v8 )
    *v8 = v6;
  return v5;
}
