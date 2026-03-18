/*
 * XREFs of DxgkQueryRemoteVidPnSourceFromGdiDisplayName @ 0x140079530
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryRemoteVidPnSourceFromGdiDisplayName(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 CurrentProcess; // rax
  __int64 v4; // rax

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 456LL))(a1);
  CurrentProcess = PsGetCurrentProcess();
  WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
  WdLogGlobalForLineNumber = 1730;
  v4 = PsGetCurrentProcess();
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x 0x%I64x encountered exception",
    -1073741811LL,
    v4,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
