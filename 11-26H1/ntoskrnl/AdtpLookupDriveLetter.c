/*
 * XREFs of AdtpLookupDriveLetter @ 0x140979E48
 * Callers:
 *     AdtpSubstituteDriveLetter @ 0x140979DD4 (AdtpSubstituteDriveLetter.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

char __fastcall AdtpLookupDriveLetter(PCUNICODE_STRING String1, _WORD *a2, _WORD *a3)
{
  unsigned __int16 *v4; // rsi
  int i; // edi
  unsigned __int16 Length; // bp
  unsigned int v9; // eax
  _WORD *v10; // r14
  char result; // al

  v4 = (unsigned __int16 *)&unk_140FD8BE0;
  for ( i = 25; i >= 0; --i )
  {
    if ( *((_QWORD *)v4 + 1) )
    {
      Length = String1->Length;
      v9 = *v4;
      v10 = &DriveMappingArray[12 * i];
      if ( (unsigned __int16)v9 < String1->Length )
      {
        String1->Length = v9;
        if ( String1->Buffer[(unsigned __int64)v9 >> 1] == 92
          && RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v10 + 4), 1u) )
        {
          String1->Length = Length;
          result = 1;
          *a3 = DriveMappingArray[12 * i];
          *a2 = v10[4];
          return result;
        }
        String1->Length = Length;
      }
    }
    v4 -= 12;
  }
  return 0;
}
