/*
 * XREFs of DxgkInvalidateHwContextCB @ 0x140075270
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkInvalidateHwContextCB(__int64 a1)
{
  __int64 DxgAdapter; // rdi
  __int64 v3; // rcx

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 874;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      874LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a1);
  if ( !*(_QWORD *)(DxgAdapter + 3168) )
  {
    WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 884;
  }
  if ( *(int *)(DxgAdapter + 2776) < 9472 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 887;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAdapter->GetDriverCaps()->WDDMVersion >= DXGKDDI_WDDMv2_5",
      887LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 3168) + 736LL)
                                                                  + 8LL)
                                                      + 272LL))(
             v3,
             *(unsigned int *)(a1 + 16));
  else
    return 0LL;
}
