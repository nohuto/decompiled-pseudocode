/*
 * XREFs of LdrpOpenKey @ 0x1408063C8
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1407202C4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140720514 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1408A7868 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadLanguageConfigList @ 0x1408A7A44 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 */

NTSTATUS __fastcall LdrpOpenKey(UNICODE_STRING *a1, void *a2, __int64 a3, HANDLE *a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a1;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a4 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a4, 0x20019u, &v5);
}
