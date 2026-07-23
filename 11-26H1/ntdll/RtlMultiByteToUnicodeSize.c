/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x18009ED20
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x18009EC30 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v4; // eax
  NTSTATUS result; // eax
  __int64 v7; // rcx
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  _InterlockedOr(v8, 0);
  if ( CodePageTable.CodePage != 0xFDE9 && GlobalRtlNlsState.CodePage != 0xFDE9 )
  {
    _InterlockedOr(v8, 0);
    v4 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( BytesInMultiByteString-- )
      {
        v7 = *(unsigned __int8 *)MultiByteString++;
        if ( *(_WORD *)(qword_1801C5020 + 2 * v7) )
        {
          if ( !BytesInMultiByteString )
          {
            *BytesInUnicodeString = v4 + 2;
            return 0;
          }
          --BytesInMultiByteString;
          ++MultiByteString;
        }
        v4 += 2;
      }
    }
    else
    {
      v4 = 2 * BytesInMultiByteString;
    }
    *BytesInUnicodeString = v4;
    return 0;
  }
  if ( BytesInMultiByteString )
  {
    RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    return 0;
  }
  result = 0;
  *BytesInUnicodeString = 0;
  return result;
}
