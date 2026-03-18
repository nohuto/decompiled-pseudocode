/*
 * XREFs of ?MulEnableDriver@@YAHKKPEAUtagDRVENABLEDATA@@@Z @ 0x1401D2190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MulEnableDriver(__int64 a1, __int64 a2, struct tagDRVENABLEDATA *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int (*v7)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void (__fastcall *v10)(__int128 **, unsigned int *); // rax
  unsigned int v11; // edx
  __int128 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // xmm0
  __int64 result; // rax
  unsigned int v17; // [rsp+40h] [rbp+18h] BYREF
  __int128 *v18; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( RtlRunOnceBeginInitialize((PRTL_RUN_ONCE)(v4 + 3632), 0, 0LL) == 259 )
  {
    v7 = **(int (***)(void))(W32GetWin32kBaseApiSetTable(v6, v5) + 24);
    if ( v7 && v7() >= 0 )
    {
      v18 = 0LL;
      v17 = 0;
      v10 = *(void (__fastcall **)(__int128 **, unsigned int *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 24)
                                                               + 8LL);
      if ( v10 )
        v10(&v18, &v17);
      v11 = v17;
      if ( v17 )
      {
        v12 = v18;
        v13 = v4 - (_QWORD)v18;
        v14 = v17;
        do
        {
          v15 = *v12++;
          *(__int128 *)((char *)v12 + v13 + 3160) = v15;
          --v14;
        }
        while ( v14 );
      }
      *(_DWORD *)(v4 + 3624) += v11;
    }
    RtlRunOnceComplete((PRTL_RUN_ONCE)(v4 + 3632), 0, 0LL);
  }
  a3->pdrvfn = (DRVFN *)(v4 + 3080);
  result = 1LL;
  a3->c = *(_DWORD *)(v4 + 3624);
  a3->iDriverVersion = 196608;
  return result;
}
