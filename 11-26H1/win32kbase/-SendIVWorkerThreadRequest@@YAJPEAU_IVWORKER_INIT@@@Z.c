/*
 * XREFs of ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x14021EA28
 * Callers:
 *     IVStartupWorkerThread @ 0x1401177AC (IVStartupWorkerThread.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     InitCreateSystemThreadsMsg @ 0x1401669E0 (InitCreateSystemThreadsMsg.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall SendIVWorkerThreadRequest(struct _IVWORKER_INIT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 UserSessionState; // rax
  int v13; // edx
  int v14; // edi
  int v15; // r8d
  _BYTE v16[8]; // [rsp+30h] [rbp-3E8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-3E0h] BYREF
  _DWORD v18[240]; // [rsp+40h] [rbp-3D8h] BYREF

  memset(v18, 0, 0x3B8uLL);
  if ( (unsigned int)InitCreateSystemThreadsMsg(v18, 8u, (__int64)a1) )
  {
    LOBYTE(v2) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v16, v2, v3, v4);
    v17 = 952LL;
    UserSessionState = W32GetUserSessionState(v10, v9, v11);
    v14 = LpcSendWaitReceivePort(*(_QWORD *)(UserSessionState + 71272), 0x20000LL, v18, v18, &v17, 0LL);
    if ( v14 >= 0 )
      KeWaitForSingleObject(*(PVOID *)a1, WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v16, v13, v15);
    return (unsigned int)v14;
  }
  else
  {
    GreDeleteFastMutex(*(char **)a1, v2, v3, v4);
    *(_QWORD *)a1 = 0LL;
    GreDeleteFastMutex(*((char **)a1 + 1), v5, v6, v7);
    result = 3221225495LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
