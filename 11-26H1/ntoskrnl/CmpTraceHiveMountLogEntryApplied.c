/*
 * XREFs of CmpTraceHiveMountLogEntryApplied @ 0x14085B8EC
 * Callers:
 *     HvpApplyIncrementalLogFile @ 0x140ADD93C (HvpApplyIncrementalLogFile.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveMountLogEntryApplied(int a1, int a2)
{
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-30h] BYREF
  int *v5; // [rsp+50h] [rbp-20h]
  __int64 v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+80h] [rbp+10h] BYREF
  int v8; // [rsp+88h] [rbp+18h] BYREF

  v8 = a2;
  v7 = a1;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_LOG_ENTRY_APPLIED;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Ptr = (ULONGLONG)&v7;
    *(_QWORD *)&UserData.Size = 4LL;
    v5 = &v8;
    v6 = 4LL;
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
  }
  return result;
}
