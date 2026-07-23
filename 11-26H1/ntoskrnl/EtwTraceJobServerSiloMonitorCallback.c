/*
 * XREFs of EtwTraceJobServerSiloMonitorCallback @ 0x1406C8698
 * Callers:
 *     PspInvokeCreateCallback @ 0x140801A48 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x140801AAC (PspInvokeTerminateCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpCopyJobIdSafe @ 0x140B0522C (EtwpCopyJobIdSafe.c)
 *     EtwpCopyJobGuidSafe @ 0x140B06E70 (EtwpCopyJobGuidSafe.c)
 */

BOOLEAN __fastcall EtwTraceJobServerSiloMonitorCallback(int a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  __int64 *v7; // rbx
  BOOLEAN result; // al
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rax
  _KAFFINITY_EX *Affinity; // rcx
  int v14; // [rsp+48h] [rbp-39h] BYREF
  __int128 v15; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  int *v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  int *v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+100h] [rbp+7Fh] BYREF

  v21 = a4;
  v14 = 0;
  v15 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = ServerSiloCreateCallbackStop;
    }
    else if ( a1 == 2 )
    {
      v7 = ServerSiloTerminateCallbackStart;
    }
    else
    {
      v7 = (__int64 *)&ServerSiloTerminateCallbackStop;
    }
  }
  else
  {
    v7 = ServerSiloCreateCallbackStart;
  }
  result = EtwEventEnabled((REGHANDLE)stru_140F03830.Affinity, (PCEVENT_DESCRIPTOR)v7);
  if ( result )
  {
    EtwpCopyJobGuidSafe(&v15, a2);
    *(_QWORD *)&UserData.Size = 16LL;
    UserData.Ptr = (ULONGLONG)&v15;
    EtwpCopyJobIdSafe(&v14);
    v18 = 4LL;
    v17 = &v14;
    v9 = 2;
    if ( a1 == 1 )
    {
      v20 = 4LL;
      v19 = &v21;
      v9 = 3;
    }
    v10 = v9;
    v11 = v9 + 1;
    v10 *= 2LL;
    *(&UserData.Ptr + v10) = *((_QWORD *)a3 + 1);
    *(&UserData.Size + 2 * v10) = *a3;
    *(&UserData.Reserved + 2 * v10) = 0;
    v12 = 2LL * v11;
    *(&UserData.Ptr + v12) = (ULONGLONG)&EtwpNull;
    Affinity = stru_140F03830.Affinity;
    *((_QWORD *)&UserData.Size + v12) = 2LL;
    return EtwWriteEx((REGHANDLE)Affinity, (PCEVENT_DESCRIPTOR)v7, 0LL, 0, 0LL, 0LL, v11 + 1, &UserData);
  }
  return result;
}
