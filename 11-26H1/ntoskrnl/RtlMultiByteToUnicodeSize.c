/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x14097BFE0
 * Callers:
 *     AslStringAnsiToUnicode @ 0x14088E2B8 (AslStringAnsiToUnicode.c)
 *     RtlxOemStringToUnicodeSize @ 0x14097BFA0 (RtlxOemStringToUnicodeSize.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14097E170 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14097E860 (RtlOemStringToUnicodeString.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
 *     PopAnsiStringToUnicodeString @ 0x140AFF5C0 (PopAnsiStringToUnicodeString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x14097DB50 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v7; // edx
  __int16 v8; // r9
  struct _LIST_ENTRY *Blink; // r8
  __int64 v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    _InterlockedOr(v13, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    Blink = CurrentServerSiloGlobals[73].Blink;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) == v8 )
    {
      v7 = 2 * BytesInMultiByteString;
    }
    else
    {
      while ( BytesInMultiByteString-- )
      {
        v12 = *(unsigned __int8 *)MultiByteString++;
        if ( *((_WORD *)&Blink->Flink + v12) != v8 )
        {
          if ( !BytesInMultiByteString )
          {
            v7 += 2;
            break;
          }
          --BytesInMultiByteString;
          ++MultiByteString;
        }
        v7 += 2;
      }
    }
    *BytesInUnicodeString = v7;
  }
  return 0;
}
