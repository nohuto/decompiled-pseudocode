/*
 * XREFs of AslStringAnsiToUnicode @ 0x140887EBC
 * Callers:
 *     AslpFileGet16BitDescription @ 0x14088C260 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x14088C348 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x14088C914 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x14088CEC4 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlMultiByteToUnicodeSize @ 0x14096B6A0 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const char *a2)
{
  __int64 v3; // rcx
  ULONG v4; // esi
  NTSTATUS v5; // edi
  const char *v6; // r9
  int v7; // r8d
  __int64 v8; // rcx
  wchar_t *Buffer; // rbx
  UNICODE_STRING v11; // [rsp+30h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  ULONG BytesInUnicodeString; // [rsp+70h] [rbp+20h] BYREF

  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, a2);
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, DestinationString.Buffer, DestinationString.Length);
  v4 = BytesInUnicodeString + 2;
  *a1 = 0LL;
  v11 = 0LL;
  if ( v4 <= 0xFFFF )
  {
    v11.Buffer = (wchar_t *)AslAlloc(v3, v4);
    Buffer = v11.Buffer;
    if ( !v11.Buffer )
    {
      v5 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslStringAnsiToUnicode", 404, (unsigned int)"Out of memory");
      goto LABEL_9;
    }
    v11.MaximumLength = v4;
    v11.Length = 0;
    v5 = RtlAnsiStringToUnicodeString(&v11, &DestinationString, 0);
    if ( v5 >= 0 )
    {
      Buffer = 0LL;
      *a1 = v11.Buffer;
      v5 = 0;
      goto LABEL_9;
    }
    v6 = "RtlAnsiStringToUnicodeString failed [%x]";
    v7 = 413;
  }
  else
  {
    v5 = -1073741811;
    v6 = "Ansi string is too long to convert at %d";
    v7 = 397;
  }
  AslLogCallPrintf(1, (unsigned int)"AslStringAnsiToUnicode", v7, (_DWORD)v6);
  Buffer = v11.Buffer;
LABEL_9:
  AslFree(v8, Buffer);
  return (unsigned int)v5;
}
