/*
 * XREFs of ?BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@_N@Z @ 0x1805EF298
 * Callers:
 *     _lambda_03899bd9ba5a14c04410ab955a36d1b6_::operator() @ 0x1805EDF2C (_lambda_03899bd9ba5a14c04410ab955a36d1b6_--operator().c)
 *     _lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator() @ 0x1805EDF54 (_lambda_0d53fb9086cf6d11ab0e5935486144eb_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_InitCoro$2 @ 0x1805EF034 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_I.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync(
        __int64 a1,
        _BYTE *a2,
        char a3)
{
  void *v5; // rax
  int v7; // [rsp+108h] [rbp+10h] BYREF
  char v8; // [rsp+110h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0xC0uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__InitCoro_2(
    &v7,
    (__int64)v5,
    a2,
    &v8,
    a1);
  return a2;
}
