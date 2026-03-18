/*
 * XREFs of ?DxgUnicodeStringFromCharBuffer@@YAJAEAU_UNICODE_STRING@@PEADG@Z @ 0x1401B43EC
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401B4170 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgUnicodeStringFromCharBuffer(PUNICODE_STRING DestinationString, char *a2, USHORT a3)
{
  unsigned __int64 i; // rax
  struct _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return -1073741811;
  for ( i = 0LL; i < a3; ++i )
  {
    if ( !a2[i] )
      break;
  }
  SourceString.Buffer = a2;
  SourceString.MaximumLength = a3;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  SourceString.Length = i;
  return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
}
