/*
 * XREFs of CmpTraceHiveFlushWroteLogFile @ 0x140AA8D1C
 * Callers:
 *     HvWriteLogFile @ 0x140AA7DD4 (HvWriteLogFile.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveFlushWroteLogFile(__int64 a1, int a2)
{
  BOOLEAN result; // al
  int v3; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  int *v6; // [rsp+58h] [rbp-18h]
  __int64 v7; // [rsp+60h] [rbp-10h]
  int v8; // [rsp+88h] [rbp+18h] BYREF

  v8 = a2;
  v3 = 1;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_WROTE_LOG_FILE;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Ptr = (ULONGLONG)&v3;
    *(_QWORD *)&UserData.Size = 4LL;
    v6 = &v8;
    v7 = 4LL;
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
  }
  return result;
}
