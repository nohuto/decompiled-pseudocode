/*
 * XREFs of VidMmOpenFenceStorageSlot @ 0x1400A63E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidMmOpenFenceStorageSlot(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *a1;
  if ( v4 )
  {
    if ( a3 )
      a2 = *(_QWORD *)(*(_QWORD *)a2 + 40520LL);
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 8LL))(v4, a2, a1);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2710;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
}
