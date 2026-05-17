/*
 * XREFs of RtlReportCriticalFailure @ 0x18006F0F8
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     LdrpInitMuiCrits @ 0x180032024 (LdrpInitMuiCrits.c)
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlRandomEx @ 0x18006EC80 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x18006F490 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpReportHeapFailure @ 0x1800D229C (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlReportFatalFailure @ 0x180070DE8 (RtlReportFatalFailure.c)
 *     RtlIsAnyDebuggerPresent @ 0x180070E00 (RtlIsAnyDebuggerPresent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportCriticalFailure(int a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  _DWORD v8[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-B0h]
  void (__stdcall *v10)(PEXCEPTION_RECORD); // [rsp+40h] [rbp-A8h]
  int v11; // [rsp+48h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-98h]

  memset_thunk_772440563353939046(v8, 0, 0x98uLL);
  if ( (unsigned __int8)RtlIsAnyDebuggerPresent(v6) )
  {
    DbgPrintEx(101, 0, "Critical error detected %lx\n", a1);
    if ( a3 )
      __debugbreak();
  }
  v8[0] = a1;
  v8[1] = 1;
  v9 = 0LL;
  v10 = RtlRaiseException;
  v11 = 1;
  v12 = a2;
  return RtlReportFatalFailure(v8);
}
