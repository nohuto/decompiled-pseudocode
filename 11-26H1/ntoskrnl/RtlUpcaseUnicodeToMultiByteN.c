/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x14096C780
 * Callers:
 *     toupper @ 0x140537D60 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1408005F0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToUTF8NHelper @ 0x140214EB0 (UpcaseUnicodeToUTF8NHelper.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140215920 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14043D8B0 (UpcaseUnicodeToMultiByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x14096CC40 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
    return UpcaseUnicodeToUTF8NHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (__int64)UnicodeString,
             v6);
  _InterlockedOr(v12, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( WORD2(CurrentServerSiloGlobals[65].Flink) )
    return UpcaseUnicodeToMultiByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6);
  else
    return UpcaseUnicodeToSingleByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6,
             (__int64)CurrentServerSiloGlobals[67].Flink,
             (__int64)CurrentServerSiloGlobals[66].Blink);
}
