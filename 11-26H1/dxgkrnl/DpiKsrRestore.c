/*
 * XREFs of DpiKsrRestore @ 0x1402525F8
 * Callers:
 *     DpiInitializeGlobalState @ 0x14044C9F0 (DpiInitializeGlobalState.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ @ 0x140251218 (--1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ.c)
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x140251344 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z.c)
 */

void DpiKsrRestore()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // r8
  const wchar_t *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v6[256]; // [rsp+58h] [rbp-120h] BYREF
  __int64 *v7; // [rsp+158h] [rbp-20h]

  v5 = 0x2000000000LL;
  v7 = (__int64 *)v6;
  memset(v6, 0, sizeof(v6));
  v0 = KsrEnumeratePersistedMemory(&GUID_DXGK_KSR_MEMORY, DpiKsrEnumeratePersistedMemoryCallback, &v5);
  if ( v0 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 968;
LABEL_9:
    v1 = (unsigned int)v5;
    goto LABEL_10;
  }
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v0 = DpiClaimPersistedMemoryBlock(0LL, *v7, &GUID_DXGK_KSR_MEMORY);
      if ( v0 >= 0 )
      {
        DxgkLogInternalTriageEvent(0LL, 0x10000, -1, (__int64)L"KSR Restore was successful", 0LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_14;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1000;
    }
    else
    {
      v0 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 989;
    }
    goto LABEL_9;
  }
  WdLogSingleEntry0(4LL);
  v1 = 0LL;
  WdLogGlobalForLineNumber = 979;
LABEL_10:
  v2 = 0LL;
  v3 = L"No KSR blocks to enumerate";
  if ( v0 < 0 )
  {
    v2 = v0;
    v3 = L"KSR Restore failed - blocks enumerated %1, status %2";
  }
  DxgkLogInternalTriageEvent(0LL, 0x10000, -1, (__int64)v3, v1, v2, 0LL, 0LL, 0LL);
  LOBYTE(v4) = 1;
  KsrFreePersistedMemory(&GUID_DXGK_KSR_MEMORY, v4);
LABEL_14:
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v5);
}
