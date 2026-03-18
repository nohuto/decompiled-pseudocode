/*
 * XREFs of DxgkSetHwProtectionTeardownRecovery @ 0x1400795F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetHwProtectionTeardownRecovery(void *Src)
{
  struct DXGPROCESS *Current; // rax
  __int64 CurrentProcess; // rax
  __int64 v3; // rax
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  RtlCopyFromUser(&v5, Src, 8uLL);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64 *))(*((_QWORD *)Current + 11) + 448LL))(&v5);
  CurrentProcess = PsGetCurrentProcess();
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  WdLogGlobalForLineNumber = 1714;
  v3 = PsGetCurrentProcess();
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x 0x%I64x encountered exception",
    -1073741811LL,
    v3,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
