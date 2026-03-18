/*
 * XREFs of xxxCreateSystemThreads @ 0x1401C2200
 * Callers:
 *     NtUserCreateSystemThreads @ 0x140173E20 (NtUserCreateSystemThreads.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1401746CC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     IVWorkerThread @ 0x14021F9FC (IVWorkerThread.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxCreateSystemThreads(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  int (*v10)(void); // rax
  __int64 v11; // rcx
  void (__fastcall *v12)(void *); // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF
  void *v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0;
  v16 = 0LL;
  v1 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v2) == v1 && (unsigned int)CSTPop(&v15, &v16, v3) )
  {
    LOBYTE(v4) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v14, v4, v5, v6);
    if ( v15 == 1 )
    {
      v12 = *(void (__fastcall **)(void *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 1880LL);
    }
    else
    {
      if ( v15 != 2 )
      {
        if ( v15 == 4 )
        {
          xxxVideoPortCalloutThread((PRKEVENT *)v16);
        }
        else if ( v15 == 8 )
        {
          IVWorkerThread(v16);
        }
        goto LABEL_15;
      }
      v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 1896LL);
      if ( !v10 || v10() < 0 )
      {
LABEL_15:
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v14, v7, v9);
        return 1LL;
      }
      v12 = *(void (__fastcall **)(void *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48) + 1904LL);
    }
    if ( v12 )
      v12(v16);
    goto LABEL_15;
  }
  return 1LL;
}
