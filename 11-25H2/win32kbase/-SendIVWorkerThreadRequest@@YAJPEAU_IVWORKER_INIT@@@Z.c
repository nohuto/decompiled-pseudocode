/*
 * XREFs of ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x14021A0D4
 * Callers:
 *     IVStartupWorkerThread @ 0x1400CED18 (IVStartupWorkerThread.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     InitCreateSystemThreadsMsg @ 0x14012AF00 (InitCreateSystemThreadsMsg.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall SendIVWorkerThreadRequest(struct _IVWORKER_INIT *a1)
{
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  int v8; // edi
  _BYTE v9[8]; // [rsp+30h] [rbp-3E8h] BYREF
  union _LARGE_INTEGER v10; // [rsp+38h] [rbp-3E0h] BYREF
  _DWORD v11[240]; // [rsp+40h] [rbp-3D8h] BYREF

  memset(v11, 0, 0x3B8uLL);
  if ( (unsigned int)InitCreateSystemThreadsMsg(v11, 8u, (__int64)a1) )
  {
    LOBYTE(v2) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v9, v2);
    v10.QuadPart = 952LL;
    UserSessionState = W32GetUserSessionState(v5, v4);
    v8 = LpcSendWaitReceivePort(*(_QWORD *)(UserSessionState + 71288), 0x20000LL, v11, v11, &v10, 0LL);
    if ( v8 >= 0 )
      KeWaitForSingleObject(*(PVOID *)a1, WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v9, v7);
    return (unsigned int)v8;
  }
  else
  {
    GreDeleteFastMutex(*(char **)a1);
    *(_QWORD *)a1 = 0LL;
    GreDeleteFastMutex(*((char **)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
    return 3221225495LL;
  }
}
