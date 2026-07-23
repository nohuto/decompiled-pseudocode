/*
 * XREFs of RtlDissectName @ 0x14041C3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlDissectName(UNICODE_STRING *Path, PUNICODE_STRING FirstName, PUNICODE_STRING RemainingName)
{
  __int64 v3; // r9
  unsigned int v4; // eax
  wchar_t *Buffer; // r11
  wchar_t v8; // di
  unsigned int i; // r8d
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // ax

  v3 = 0LL;
  v4 = Path->Length >> 1;
  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  if ( v4 )
  {
    Buffer = Path->Buffer;
    v8 = *Buffer;
    for ( i = *Buffer == 92; i < v4; ++i )
    {
      if ( Buffer[i] == 92 )
        break;
    }
    v10 = 2 * (i - (v8 == 92));
    FirstName->Length = v10;
    if ( v8 == 92 )
      v3 = 1LL;
    FirstName->MaximumLength = v10;
    FirstName->Buffer = &Buffer[v3];
    if ( i < v4 )
    {
      v11 = 2 * (v4 - i) - 2;
      RemainingName->Length = v11;
      RemainingName->MaximumLength = v11;
      RemainingName->Buffer = &Buffer[i + 1];
    }
  }
}
