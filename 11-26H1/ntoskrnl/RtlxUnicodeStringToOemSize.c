/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x14097CB20
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1404D8D14 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG UnicodeStringByteCount; // edi
  wchar_t *Buffer; // rbx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v4; // edx
  ULONG v5; // edi
  struct _LIST_ENTRY *Flink; // r8
  __int64 v8; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+40h] [rbp+8h] BYREF

  UnicodeStringByteCount = UnicodeString->Length;
  Buffer = UnicodeString->Buffer;
  UTF8StringActualByteCount = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( UnicodeStringByteCount )
    {
      RtlUnicodeToUTF8N(0LL, 0, &UTF8StringActualByteCount, Buffer, UnicodeStringByteCount);
      return UTF8StringActualByteCount + 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    _InterlockedOr(v9, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v5 = UnicodeStringByteCount >> 1;
    Flink = CurrentServerSiloGlobals[67].Flink;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) == (_WORD)v4 )
    {
      return v5 + 1;
    }
    else
    {
      for ( ; v5; --v5 )
      {
        v8 = *Buffer++;
        v4 += (HIBYTE(*((_WORD *)&Flink->Flink + v8)) != 0) + 1;
      }
      return v4 + 1;
    }
  }
}
