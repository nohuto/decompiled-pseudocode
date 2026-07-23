/*
 * XREFs of WheapLogProcessTerminateEvent @ 0x1406DB58C
 * Callers:
 *     WheaTerminateProcess @ 0x14084E8F0 (WheaTerminateProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapLogProcessTerminateEvent(int a1, __int64 a2, int a3)
{
  int v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  const WCHAR *v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]

  v4 = a1;
  UserData.Ptr = (ULONGLONG)&v4;
  v6 = a2;
  v9 = &SourceString;
  v7 = a3;
  v8 = 0;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 2LL;
  return EtwWriteEx(
           *(REGHANDLE *)&CmpContextListLock.SchedulerApcFill5[80],
           &EVENT_WHEA_PROCESS_TERMINATE,
           0LL,
           0,
           0LL,
           0LL,
           3u,
           &UserData);
}
