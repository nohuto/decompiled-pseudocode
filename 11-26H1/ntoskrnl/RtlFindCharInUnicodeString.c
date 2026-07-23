/*
 * XREFs of RtlFindCharInUnicodeString @ 0x140805FDC
 * Callers:
 *     LdrpGetResourceFileName @ 0x14061B338 (LdrpGetResourceFileName.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x140475B10 (RtlValidateUnicodeString.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  NTSTATUS result; // eax
  unsigned __int16 v7; // r8
  wchar_t *v8; // r9

  if ( !NonInclusivePrefixLength )
    return -1073741811;
  *NonInclusivePrefixLength = 0;
  result = RtlValidateUnicodeString(0, StringToSearch);
  if ( result >= 0 )
  {
    result = RtlValidateUnicodeString(0, &RtlNtPathSeperatorString);
    if ( result >= 0 )
    {
      v7 = StringToSearch->Length >> 1;
      v8 = &StringToSearch->Buffer[v7 - 1];
      if ( v7 )
      {
        while ( *v8 != *RtlNtPathSeperatorString.Buffer )
        {
          --v8;
          if ( !--v7 )
            return -1073741275;
        }
        result = 0;
        *NonInclusivePrefixLength = 2 * v7 - 2;
      }
      else
      {
        return -1073741275;
      }
    }
  }
  return result;
}
