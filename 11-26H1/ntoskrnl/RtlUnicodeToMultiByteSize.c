/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x14097CA40
 * Callers:
 *     wcstombs @ 0x14053AB30 (wcstombs.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140806090 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x140844070 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1408448F0 (NtSetSystemEnvironmentValue.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14097B090 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14097E750 (RtlUpcaseUnicodeStringToOemString.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 *     RtlUnicodeStringToOemString @ 0x140B3EDD0 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v7; // edx
  ULONG v8; // ebx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v10; // rax
  NTSTATUS result; // eax
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( BytesInUnicodeString )
    {
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
      return 0;
    }
    else
    {
      result = 0;
      *BytesInMultiByteString = 0;
    }
  }
  else
  {
    _InterlockedOr(v12, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v8 = BytesInUnicodeString >> 1;
    Flink = CurrentServerSiloGlobals[67].Flink;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) == (_WORD)v7 )
    {
      v7 = v8;
    }
    else
    {
      for ( ; v8; --v8 )
      {
        v10 = *UnicodeString++;
        v7 += (HIBYTE(*((_WORD *)&Flink->Flink + v10)) != 0) + 1;
      }
    }
    *BytesInMultiByteString = v7;
    return 0;
  }
  return result;
}
