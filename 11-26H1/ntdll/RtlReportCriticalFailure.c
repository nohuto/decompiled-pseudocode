/*
 * XREFs of RtlReportCriticalFailure @ 0x18008F548
 * Callers:
 *     LdrpInitMuiCrits @ 0x18001D184 (LdrpInitMuiCrits.c)
 *     EtwpRegisterProvider @ 0x180042360 (EtwpRegisterProvider.c)
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlRandomEx @ 0x18008F0D0 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x18008F8E0 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpReportHeapFailure @ 0x1800CFA0C (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlReportFatalFailure @ 0x180091238 (RtlReportFatalFailure.c)
 *     RtlIsAnyDebuggerPresent @ 0x180091250 (RtlIsAnyDebuggerPresent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportCriticalFailure(int a1, __int64 a2, int a3)
{
  _DWORD v7[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-B0h]
  void (__stdcall *v9)(PEXCEPTION_RECORD); // [rsp+40h] [rbp-A8h]
  int v10; // [rsp+48h] [rbp-A0h]
  __int64 v11; // [rsp+50h] [rbp-98h]

  memset_thunk_772440563353939046(v7, 0, 0x98uLL);
  if ( RtlIsAnyDebuggerPresent() )
  {
    DbgPrintEx(0x65u, 0, "Critical error detected %lx\n", a1);
    if ( a3 )
      __debugbreak();
  }
  v7[0] = a1;
  v7[1] = 1;
  v8 = 0LL;
  v9 = RtlRaiseException;
  v10 = 1;
  v11 = a2;
  return RtlReportFatalFailure(v7);
}
