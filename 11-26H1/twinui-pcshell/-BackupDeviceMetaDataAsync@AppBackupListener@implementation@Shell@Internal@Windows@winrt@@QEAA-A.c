/*
 * XREFs of ?BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@_N@Z @ 0x180613D6C
 * Callers:
 *     _lambda_03899bd9ba5a14c04410ab955a36d1b6_::operator() @ 0x180612AA8 (_lambda_03899bd9ba5a14c04410ab955a36d1b6_--operator().c)
 *     _lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator() @ 0x180612AD0 (_lambda_0d53fb9086cf6d11ab0e5935486144eb_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1 @ 0x180613B80 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2,
        char a3)
{
  void (__fastcall **v7)(__int64); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(__int64))operator new(0xC0uLL);
  v7[21] = a1;
  *((_BYTE *)v7 + 176) = a3;
  *v7 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 160) = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__ResumeCoro_1((__int64)v7);
  return a2;
}
