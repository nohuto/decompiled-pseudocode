/*
 * XREFs of LdrpOpenKey @ 0x1800DC350
 * Callers:
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112ED0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180125768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014EF30 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

__int64 __fastcall LdrpOpenKey(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v5[1] = a2;
  v5[2] = a1;
  *a4 = 0LL;
  v5[0] = 48LL;
  v5[3] = 64LL;
  v6 = 0LL;
  return NtOpenKey(a4, a3, v5);
}
