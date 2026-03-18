/*
 * XREFs of DestroyThreadsObjects @ 0x1400D0690
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     DestroyCacheDCEntries @ 0x14003B704 (DestroyCacheDCEntries.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     PopAndFreeW32ThreadLock @ 0x1400D0920 (PopAndFreeW32ThreadLock.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D096C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1401BF728 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyThreadsObjects(__int64 a1, __int64 a2)
{
  _QWORD **CurrentThreadWin32Thread; // rax
  _QWORD *v3; // rbx
  ULONG_PTR i; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 UserSessionState; // r15
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // r8d
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  int (*v22)(void); // rax
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64); // rax
  int (*v25)(void); // rax
  __int64 v26; // rdi
  void (__fastcall *v27)(__int64, __int64); // rax
  _BYTE v28[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+28h] [rbp-30h]

  CurrentThreadWin32Thread = (_QWORD **)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  DestroyCacheDCEntries((__int64)v3);
  for ( i = v3[56]; i; i = v3[56] )
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v3, i);
  while ( 1 )
  {
    v5 = v3[47];
    if ( !v5 )
      break;
    PopAndFreeW32ThreadLock(v5);
  }
  AtomicExecutionCheck::AtomicExecutionCheck(v28);
  if ( v3[149] )
  {
    v7 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48);
    v22 = *(int (**)(void))(v7 + 2640);
    if ( v22 )
    {
      if ( v22() >= 0 )
      {
        v23 = v3[149];
        v6 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48);
        v24 = *(void (__fastcall **)(__int64, __int64))(v6 + 2648);
        if ( v24 )
          v24(v23, 1LL);
      }
    }
    v3[149] = 0LL;
  }
  if ( v3[150] )
  {
    v7 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48);
    v25 = *(int (**)(void))(v7 + 2656);
    if ( v25 )
    {
      if ( v25() >= 0 )
      {
        v26 = v3[150];
        v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48);
        v27 = *(void (__fastcall **)(__int64, __int64))(v8 + 2664);
        if ( v27 )
          v27(v26, 1LL);
      }
    }
    v3[150] = 0LL;
  }
  UserSessionState = W32GetUserSessionState(v7, v6, v8);
  v15 = *(int *)(W32GetUserSessionState(v11, v10, v12) + 19848);
  if ( (int)v15 >= 0 )
  {
    v17 = 40 * v15;
    v18 = 32 * v15;
    do
    {
      v19 = v18 + *(_QWORD *)(UserSessionState + 19920);
      v20 = W32GetUserSessionState(v14, v13, v16);
      v14 = *(unsigned __int8 *)(v19 + 24);
      v13 = *(_QWORD *)(v20 + 19864);
      if ( (_BYTE)v14 )
      {
        if ( (*((_BYTE *)&unk_14025552C + 24 * v14) & 2) != 0 )
        {
          if ( (_BYTE)v14 == 2 )
          {
            v21 = *(_QWORD *)(v13 + v17);
            v14 = *(_QWORD *)(v21 + 80);
            if ( v14 )
            {
              if ( *(_QWORD **)(v14 + 16) == v3 )
              {
                *(_QWORD *)(v21 + 80) = 0LL;
                HMUnlockObject(v14, v13, v16);
              }
            }
          }
        }
        else if ( *(_QWORD **)(v13 + v17 + 8) == v3 && (*(_BYTE *)(v19 + 25) & 1) == 0 )
        {
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v19);
        }
      }
      v18 -= 32LL;
      v17 -= 40LL;
      LODWORD(v15) = v15 - 1;
    }
    while ( (int)v15 >= 0 );
  }
  if ( v28[0] )
    --*(_DWORD *)(v29 + 28);
}
