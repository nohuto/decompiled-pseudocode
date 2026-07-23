/*
 * XREFs of AdtpSubstituteDriveLetter @ 0x140979DD4
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     AdtpLookupDriveLetter @ 0x140979E48 (AdtpLookupDriveLetter.c)
 */

void *__fastcall AdtpSubstituteDriveLetter(UNICODE_STRING *a1)
{
  void *result; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // bx
  size_t v5; // r8

  result = (void *)AdtpLookupDriveLetter(a1);
  if ( (_BYTE)result )
  {
    Buffer = a1->Buffer;
    Length = a1->Length;
    v5 = a1->Length;
    *Buffer = 0;
    Buffer[1] = 58;
    result = memmove(Buffer + 2, Buffer, v5);
    a1->Length = Length + 4;
  }
  return result;
}
