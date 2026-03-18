/*
 * XREFs of ?MulEnableDriver@@YAHKKPEAUtagDRVENABLEDATA@@@Z @ 0x1401F28D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MulEnableDriver(__int64 a1, __int64 a2, struct tagDRVENABLEDATA *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int (*v6)(void); // rax
  __int64 v7; // rcx
  void (__fastcall *v8)(__int128 **, unsigned int *); // rax
  unsigned int v9; // edx
  __int128 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm0
  __int64 result; // rax
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF
  __int128 *v16; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( RtlRunOnceBeginInitialize((PRTL_RUN_ONCE)(v4 + 3712), 0, 0LL) == 259 )
  {
    v6 = **(int (***)(void))(W32GetWin32kBaseApiSetTable(v5) + 24);
    if ( v6 && v6() >= 0 )
    {
      v16 = 0LL;
      v15 = 0;
      v8 = *(void (__fastcall **)(__int128 **, unsigned int *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 8LL);
      if ( v8 )
        v8(&v16, &v15);
      v9 = v15;
      if ( v15 )
      {
        v10 = v16;
        v11 = v4 - (_QWORD)v16;
        v12 = v15;
        do
        {
          v13 = *v10++;
          *(__int128 *)((char *)v10 + v11 + 3240) = v13;
          --v12;
        }
        while ( v12 );
      }
      *(_DWORD *)(v4 + 3704) += v9;
    }
    RtlRunOnceComplete((PRTL_RUN_ONCE)(v4 + 3712), 0, 0LL);
  }
  a3->pdrvfn = (DRVFN *)(v4 + 3160);
  result = 1LL;
  a3->c = *(_DWORD *)(v4 + 3704);
  a3->iDriverVersion = 196608;
  return result;
}
