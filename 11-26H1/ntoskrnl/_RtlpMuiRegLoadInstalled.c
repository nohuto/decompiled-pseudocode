/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x1408B00B4
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x1408AF5D8 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x140724EE4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _SafeAllocBlob @ 0x1407252C0 (_SafeAllocBlob.c)
 *     ZwQueryInstallUILanguage @ 0x14072AB60 (ZwQueryInstallUILanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1408ADCD8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegCreateStringPool @ 0x1408AE654 (RtlpMuiRegCreateStringPool.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1408AE700 (RtlpMuiRegFreeRegistryInfo.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408B0A68 (_RtlpMuiRegValidateInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int InstallUILanguage; // edi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 StringPool; // rax
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( PspSiloMonitorLock.CurrentRunTime )
  {
    InstallUILanguage = ZwQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_14;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  v9 = 0;
  v7 = SafeAllocBlob(0x18u, 4u, 0x1Cu, 0, 0, &v9);
  if ( v7 )
  {
    *(_DWORD *)v7 = v9;
    *(_QWORD *)(v7 + 16) = v7 + 24;
    *(_DWORD *)(v7 + 4) = 4;
  }
  *(_QWORD *)(a1 + 24) = v7;
  if ( !v7 )
  {
    InstallUILanguage = -1073741801;
LABEL_14:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(-1, -1);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_14;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(a1);
  if ( InstallUILanguage < 0 )
    goto LABEL_14;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_14;
  return result;
}
