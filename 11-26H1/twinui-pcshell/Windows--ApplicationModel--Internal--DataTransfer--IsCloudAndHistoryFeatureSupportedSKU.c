/*
 * XREFs of Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU @ 0x1802182DC
 * Callers:
 *     ?UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180218278 (-UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU()
{
  DWORD v1; // [rsp+50h] [rbp+8h] BYREF

  if ( !byte_1808DCC6C )
  {
    v1 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Clipboard",
      L"IsCloudAndHistoryFeatureAvailable",
      0x10010u,
      0LL,
      &dword_1808DCC68,
      &v1);
    byte_1808DCC6C = 1;
  }
  return dword_1808DCC68 != 0;
}
