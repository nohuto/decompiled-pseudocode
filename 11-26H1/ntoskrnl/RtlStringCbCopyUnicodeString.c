/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x140427D04
 * Callers:
 *     PoStoreRequester @ 0x1404263B8 (PoStoreRequester.c)
 *     PopSafeCopyUnicodeString @ 0x140427C60 (PopSafeCopyUnicodeString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140427DB0 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  NTSTATUS result; // eax
  __int64 v5; // r10
  char *v6; // r11
  wchar_t *Buffer; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int64 v10; // rdx
  char *v11; // rax

  if ( !(cbDest >> 1) || cbDest >> 1 > 0x7FFF )
    return -1073741811;
  result = RtlUnicodeStringValidateWorker(SourceString, cbDest, (ULONG)SourceString);
  if ( result >= 0 && SourceString )
  {
    Buffer = SourceString->Buffer;
    v8 = (unsigned __int64)SourceString->Length >> 1;
  }
  else
  {
    Buffer = 0LL;
    v8 = 0LL;
    if ( result < 0 )
    {
      *(_WORD *)v6 = 0;
      return result;
    }
  }
  v9 = v8 - v5;
  v10 = (char *)Buffer - v6;
  do
  {
    if ( !(v9 + v5) )
      break;
    *(_WORD *)v6 = *(_WORD *)&v6[v10];
    v6 += 2;
    --v5;
  }
  while ( v5 );
  v11 = v6 - 2;
  if ( v5 )
    v11 = v6;
  *(_WORD *)v11 = 0;
  return v5 == 0 ? 0x80000005 : 0;
}
