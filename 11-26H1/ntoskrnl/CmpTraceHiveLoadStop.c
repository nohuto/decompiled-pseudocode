/*
 * XREFs of CmpTraceHiveLoadStop @ 0x14093E0A0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveLoadStop(int a1)
{
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_LOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Ptr = (ULONGLONG)&v4;
    *(_QWORD *)&UserData.Size = 4LL;
    return EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 1u, &UserData);
  }
  return result;
}
