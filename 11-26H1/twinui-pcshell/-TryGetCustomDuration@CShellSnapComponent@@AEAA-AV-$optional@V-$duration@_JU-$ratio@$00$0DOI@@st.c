/*
 * XREFs of ?TryGetCustomDuration@CShellSnapComponent@@AEAA?AV?$optional@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@std@@PEBG@Z @ 0x1805A3444
 * Callers:
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A37B0 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 * Callees:
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 */

__int64 __fastcall CShellSnapComponent::TryGetCustomDuration(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 pcbData; // [rsp+50h] [rbp+8h] BYREF
  __int64 pvData; // [rsp+60h] [rbp+18h] BYREF

  pvData = a3;
  pcbData = a1;
  if ( dword_1808DEBE8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1808DEBE8);
    if ( dword_1808DEBE8 == -1 )
    {
      LODWORD(pvData) = 0;
      LODWORD(pcbData) = 4;
      RegGetValueW(
        HKEY_CURRENT_USER,
        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
        L"SnapIdRevokeDuration",
        0x10u,
        0LL,
        &pvData,
        (LPDWORD)&pcbData);
      dword_1808DEBEC = pvData;
      Init_thread_footer(&dword_1808DEBE8);
    }
  }
  if ( dword_1808DEBEC )
  {
    *(_QWORD *)a2 = (unsigned int)dword_1808DEBEC;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
