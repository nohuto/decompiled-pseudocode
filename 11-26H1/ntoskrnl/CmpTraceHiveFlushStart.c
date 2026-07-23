/*
 * XREFs of CmpTraceHiveFlushStart @ 0x1408BA440
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveFlushStart(unsigned __int16 *a1, unsigned __int16 *a2, int a3)
{
  BOOLEAN result; // al
  ULONGLONG v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // r9d
  ULONGLONG v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // rax
  REGHANDLE v15; // rcx
  __int16 v16; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+58h] [rbp-9h] BYREF
  int v19; // [rsp+D8h] [rbp+77h] BYREF

  v19 = a3;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = 0;
    v16 = 0;
    if ( v6 )
    {
      UserData[0].Ptr = v6;
      v7 = 1;
      UserData[0].Size = *a1;
      UserData[0].Reserved = 0;
    }
    v8 = v7;
    v9 = v7 + 1;
    UserData[v8].Ptr = (ULONGLONG)&v16;
    *(_QWORD *)&UserData[v8].Size = 2LL;
    v10 = *((_QWORD *)a2 + 1);
    if ( v10 )
    {
      v11 = v9++;
      UserData[v11].Ptr = v10;
      UserData[v11].Size = *a2;
      *(&UserData[0].Reserved + 1 * v11) = 0;
    }
    v12 = v9;
    v13 = v9 + 1;
    UserData[v12].Ptr = (ULONGLONG)&v16;
    *(_QWORD *)&UserData[v12].Size = 2LL;
    v14 = v13;
    UserData[v14].Ptr = (ULONGLONG)&v19;
    v15 = EtwpRegTraceHandle;
    *(_QWORD *)&UserData[v14].Size = 4LL;
    return EtwWrite(v15, &EventDescriptor, 0LL, v13 + 1, UserData);
  }
  return result;
}
