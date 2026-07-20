/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x14001D298
 * Callers:
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D0E8 (BasepOpenParentDirectoryNoRedirection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  size_t v3; // rdx
  USHORT MaximumLength; // ax
  PWSTR Buffer; // r9
  unsigned __int64 v6; // r10
  signed __int64 v7; // r9
  NTSTRSAFE_PWSTR v8; // rax

  v3 = cbDest >> 1;
  if ( !v3 || v3 > 0x7FFF )
    return -1073741811;
  if ( (SourceString->Length & 1) != 0
    || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
    || SourceString->Length > MaximumLength
    || MaximumLength == 0xFFFF
    || (Buffer = SourceString->Buffer) == 0LL && (SourceString->Length || MaximumLength) )
  {
    *pszDest = 0;
    return -1073741811;
  }
  v6 = ((unsigned __int64)SourceString->Length >> 1) - v3;
  v7 = (char *)Buffer - (char *)pszDest;
  do
  {
    if ( !(v6 + v3) )
      break;
    *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
    ++pszDest;
    --v3;
  }
  while ( v3 );
  v8 = pszDest - 1;
  if ( v3 )
    v8 = pszDest;
  *v8 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}
