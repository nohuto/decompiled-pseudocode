/*
 * XREFs of RtlFindCharInUnicodeString @ 0x14080053C
 * Callers:
 *     LdrpGetResourceFileName @ 0x1406182E8 (LdrpGetResourceFileName.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x14047C1A0 (RtlValidateUnicodeString.c)
 */

NTSTATUS __fastcall RtlFindCharInUnicodeString(__int64 a1, const UNICODE_STRING *a2, __int64 a3, _WORD *a4)
{
  NTSTATUS result; // eax
  unsigned __int16 v7; // r8
  wchar_t *v8; // r9

  if ( !a4 )
    return -1073741811;
  *a4 = 0;
  result = RtlValidateUnicodeString(0, a2);
  if ( result >= 0 )
  {
    result = RtlValidateUnicodeString(0, &RtlNtPathSeperatorString);
    if ( result >= 0 )
    {
      v7 = a2->Length >> 1;
      v8 = &a2->Buffer[v7 - 1];
      if ( v7 )
      {
        while ( *v8 != *RtlNtPathSeperatorString.Buffer )
        {
          --v8;
          if ( !--v7 )
            return -1073741275;
        }
        result = 0;
        *a4 = 2 * v7 - 2;
      }
      else
      {
        return -1073741275;
      }
    }
  }
  return result;
}
