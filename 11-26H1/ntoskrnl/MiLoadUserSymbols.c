/*
 * XREFs of MiLoadUserSymbols @ 0x140B560FC
 * Callers:
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     DbgUnicodeStringToAnsiString @ 0x1404D8D14 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadUserImageSymbols @ 0x14061AFF0 (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

void __fastcall MiLoadUserSymbols(__int64 a1)
{
  ULONG_PTR v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  UnicodeString = 0LL;
  v2 = MiReferenceControlAreaFile(a1);
  v3 = v2;
  if ( *(_WORD *)(v2 + 88) )
  {
    v4 = DbgUnicodeStringToAnsiString((PANSI_STRING)&UnicodeString, (PCUNICODE_STRING)(v2 + 88));
    MiDereferenceControlAreaFile(a1, v3);
    if ( v4 )
    {
      DbgLoadUserImageSymbols();
      RtlFreeAnsiString(&UnicodeString);
    }
  }
  else
  {
    MiDereferenceControlAreaFile(a1, v2);
  }
}
