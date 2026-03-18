/*
 * XREFs of DestroyThreadsObjects @ 0x140038840
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400395B0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140039698 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DestroyCacheDCEntries @ 0x140046CF0 (DestroyCacheDCEntries.c)
 *     PopAndFreeW32ThreadLock @ 0x1400A1AFC (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140157870 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rbx
  ULONG_PTR i; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  int (*v15)(void); // rax
  __int64 v16; // rdi
  void (__fastcall *v17)(__int64, __int64); // rax
  int (*v18)(void); // rax
  __int64 v19; // rdi
  void (__fastcall *v20)(__int64, __int64); // rax
  _BYTE v21[16]; // [rsp+20h] [rbp-38h] BYREF

  v0 = PtiCurrent();
  DestroyCacheDCEntries(v0);
  for ( i = *((_QWORD *)v0 + 57); i; i = *((_QWORD *)v0 + 57) )
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v0, i);
  while ( *((_QWORD *)v0 + 48) )
    PopAndFreeW32ThreadLock();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  if ( *((_QWORD *)v0 + 149) )
  {
    v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
    v15 = *(int (**)(void))(v3 + 3024);
    if ( v15 )
    {
      if ( v15() >= 0 )
      {
        v16 = *((_QWORD *)v0 + 149);
        v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
        v17 = *(void (__fastcall **)(__int64, __int64))(v2 + 3032);
        if ( v17 )
          v17(v16, 1LL);
      }
    }
    *((_QWORD *)v0 + 149) = 0LL;
  }
  if ( *((_QWORD *)v0 + 150) )
  {
    v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
    v18 = *(int (**)(void))(v3 + 3040);
    if ( v18 )
    {
      if ( v18() >= 0 )
      {
        v19 = *((_QWORD *)v0 + 150);
        v20 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3048LL);
        if ( v20 )
          v20(v19, 1LL);
      }
    }
    *((_QWORD *)v0 + 150) = 0LL;
  }
  UserSessionState = W32GetUserSessionState(v3, v2);
  v9 = *(int *)(W32GetUserSessionState(v6, v5) + 19816);
  if ( (int)v9 >= 0 )
  {
    v10 = 40 * v9;
    v11 = 32 * v9;
    do
    {
      v12 = v11 + *(_QWORD *)(UserSessionState + 19888);
      v13 = W32GetUserSessionState(v8, v7);
      v8 = *(unsigned __int8 *)(v12 + 24);
      v7 = *(_QWORD *)(v13 + 19832);
      if ( (_BYTE)v8 )
      {
        if ( (*((_BYTE *)&unk_14024703C + 24 * v8) & 2) != 0 )
        {
          if ( (_BYTE)v8 == 2 )
          {
            v14 = *(_QWORD *)(v7 + v10);
            v8 = *(_QWORD *)(v14 + 80);
            if ( v8 )
            {
              if ( *(struct tagTHREADINFO **)(v8 + 16) == v0 )
              {
                *(_QWORD *)(v14 + 80) = 0LL;
                HMUnlockObject((int *)v8, v7);
              }
            }
          }
        }
        else if ( *(struct tagTHREADINFO **)(v7 + v10 + 8) == v0 && (*(_BYTE *)(v12 + 25) & 1) == 0 )
        {
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v12);
        }
      }
      v11 -= 32LL;
      v10 -= 40LL;
      LODWORD(v9) = v9 - 1;
    }
    while ( (int)v9 >= 0 );
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
}
