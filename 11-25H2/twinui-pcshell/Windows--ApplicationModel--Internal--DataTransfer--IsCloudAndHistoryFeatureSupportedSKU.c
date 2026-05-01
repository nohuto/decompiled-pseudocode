/*
 * XREFs of Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU @ 0x180206DDC
 * Callers:
 *     ?UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180206D78 (-UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU()
{
  DWORD v1; // [rsp+50h] [rbp+8h] BYREF

  if ( !byte_18089C5C4 )
  {
    v1 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Clipboard",
      L"IsCloudAndHistoryFeatureAvailable",
      0x10010u,
      0LL,
      &dword_18089C5C0,
      &v1);
    byte_18089C5C4 = 1;
  }
  return dword_18089C5C0 != 0;
}
