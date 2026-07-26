/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1400743C0
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x140151564 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x140151730 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x14015189C (PpRegStateUpdateStackCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x140151BB0 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x140151C10 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x140151F5C (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x140152000 (CmRegUtilWstrValueSetWstrString.c)
 *     ndisMiniportQueryDeviceProperty @ 0x140167FF0 (ndisMiniportQueryDeviceProperty.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x14016C590 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v3; // rax
  NTSTATUS result; // eax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx

  if ( SourceString )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( SourceString[v3] );
    if ( v3 > 0x7FFE )
      return -1073741562;
    v5 = 2 * v3;
    v6 = v5 + 2;
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  DestinationString->Length = v5;
  result = 0;
  DestinationString->MaximumLength = v6;
  DestinationString->Buffer = (wchar_t *)SourceString;
  return result;
}
