/*
 * XREFs of DxgkOpenAdapterFromHdc @ 0x1403C1680
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromHdc(__int64 a1)
{
  struct DXGPROCESS *Current; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
    return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 472LL))(a1);
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 740;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
