/*
 * XREFs of ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x180224CD4
 * Callers:
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x1801FD294 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x1802B60AC (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x18030CFB8 (--$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@Applicati.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY0L@$$CBGAEAJ@Z @ 0x18030D014 (--$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@Applicat.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::Initialize(PHKEY phkResult)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  HKEY v5; // rcx
  LSTATUS Key; // eax
  __int64 v8; // rcx
  HKEY v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  int v11; // [rsp+68h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+20h] BYREF

  hKey = 0LL;
  v11 = CreateShellSessionKey((unsigned int)phkResult, &hKey);
  v3 = v11;
  if ( v11 < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[11],long &>(
      v2,
      &v11);
    v4 = 15LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)v3);
    v5 = hKey;
    hKey = 0LL;
    if ( v5 )
      RegCloseKey(v5);
    return v3;
  }
  Key = RegCreateKeyExW(hKey, L"ApplicationViewManagement", 0, 0LL, 1u, 0xF003Fu, 0LL, phkResult, 0LL);
  v3 = Key;
  if ( Key > 0 )
    v3 = (unsigned __int16)Key | 0x80070000;
  v11 = v3;
  if ( (v3 & 0x80000000) != 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[7],long &>(
      v8,
      &v11);
    v4 = 32LL;
    goto LABEL_3;
  }
  v9 = hKey;
  hKey = 0LL;
  if ( v9 )
    RegCloseKey(v9);
  return 0LL;
}
