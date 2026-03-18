/*
 * XREFs of CmpTraceHiveFlushWrotePrimaryFile @ 0x140AAB810
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x140AAAADC (HvWriteHivePrimaryFile.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveFlushWrotePrimaryFile(int a1, int a2)
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
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_WROTE_PRIMARY_FILE;
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
