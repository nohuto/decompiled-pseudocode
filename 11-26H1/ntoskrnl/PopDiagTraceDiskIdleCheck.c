/*
 * XREFs of PopDiagTraceDiskIdleCheck @ 0x1404EFCF0
 * Callers:
 *     PopScanIdleList @ 0x1404BFF50 (PopScanIdleList.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDiskIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  int *v7; // [rsp+58h] [rbp+7h]
  __int64 v8; // [rsp+60h] [rbp+Fh]
  int *v9; // [rsp+68h] [rbp+17h]
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  __int64 v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  __int64 v13; // [rsp+88h] [rbp+37h]
  __int64 v14; // [rsp+90h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v16; // [rsp+C0h] [rbp+6Fh] BYREF
  int v17; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v17 = a3;
  v16 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DISK_IDLE_CHECK);
    if ( (_BYTE)v3 )
    {
      UserData.Ptr = a1 + 24;
      *(_QWORD *)&UserData.Size = 8LL;
      v7 = &v16;
      v8 = 4LL;
      v9 = &v17;
      v10 = 4LL;
      v11 = a1 + 96;
      v13 = a1 + 100;
      v12 = 4LL;
      v14 = 4LL;
      LOBYTE(v3) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DISK_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v3;
}
