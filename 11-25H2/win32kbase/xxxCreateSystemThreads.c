/*
 * XREFs of xxxCreateSystemThreads @ 0x140081E00
 * Callers:
 *     NtUserCreateSystemThreads @ 0x140133580 (NtUserCreateSystemThreads.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     IVWorkerThread @ 0x14021B528 (IVWorkerThread.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 xxxCreateSystemThreads()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 i; // rdx
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int (*v11)(void); // rax
  void (__fastcall *v12)(__int64); // rax
  int (*v13)(void); // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v0 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( PsGetCurrentProcess() == v0 )
  {
    v3 = W32GetUserSessionState(v2, v1) + 71296;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x1E )
        return 1LL;
      v5 = *(_QWORD *)(v3 + 24 * i);
      if ( v5 )
        break;
    }
    v6 = *(_DWORD *)(v3 + 24 * i + 16);
    *(_DWORD *)(v3 + 24 * i + 16) = 0;
    *(_QWORD *)(v3 + 24 * i) = 0LL;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v14, 1);
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( v9 )
        {
          if ( v9 == 4 )
            IVWorkerThread(v5);
        }
        else
        {
          xxxVideoPortCalloutThread(v5);
        }
        goto LABEL_10;
      }
      v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2152LL);
      if ( v11 && v11() >= 0 )
      {
        v12 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2160LL);
        goto LABEL_20;
      }
    }
    else
    {
      v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2104LL);
      if ( v13 && v13() >= 0 )
      {
        v12 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2112LL);
LABEL_20:
        if ( v12 )
          v12(v5);
      }
    }
LABEL_10:
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v14);
  }
  return 1LL;
}
