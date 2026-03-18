/*
 * XREFs of ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x140415458
 * Callers:
 *     DxgkInitializeDpi @ 0x140415440 (DxgkInitializeDpi.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14005565C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x14006CA04 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

NTSTATUS __fastcall DpiPersistence::SaveHKCUPathInSessionData(DpiPersistence *this)
{
  DXGGLOBAL *Global; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGSESSIONDATA *SessionData; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  NTSTATUS result; // eax
  void *v17; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  ULONG v19; // r8d
  __int64 v20; // rdi
  struct _UNICODE_STRING KeyPath; // [rsp+50h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v2, v3, v4);
  if ( SessionData )
  {
    KeyPath = 0LL;
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v17 = (void *)*((_QWORD *)SessionData + 2343);
      if ( v17 )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
        *((_DWORD *)SessionData + 4684) = 0;
        *((_QWORD *)SessionData + 2343) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionData, KeyPath.MaximumLength);
      v20 = (int)RtlUnicodeStringCopy(UserRegistryPath, &KeyPath, v19);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v20 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 497;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"RtlFreeUnicodeString failed: (Status = 0x%I64x)",
          v20,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return v20;
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 471;
    v15 = PsGetCurrentProcessSessionId(v12, v11, v13, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v15,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
  return result;
}
