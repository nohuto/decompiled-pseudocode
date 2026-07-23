/*
 * XREFs of PspExitLastThread @ 0x1409FD314
 * Callers:
 *     PsTerminateMinimalProcess @ 0x1407FFFD8 (PsTerminateMinimalProcess.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     KeForceResumeProcess @ 0x140203224 (KeForceResumeProcess.c)
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     KeQuerySystemTimeUnsafe @ 0x1404AC5F4 (KeQuerySystemTimeUnsafe.c)
 *     PspCatchCriticalBreak @ 0x140800248 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x140818810 (SeAuditProcessExit.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     LpcExitProcess @ 0x1409FD5D4 (LpcExitProcess.c)
 *     ExpWnfDeleteProcessContext @ 0x1409FD874 (ExpWnfDeleteProcessContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     PspExitProcess @ 0x1409FE380 (PspExitProcess.c)
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspExitLastThread(__int64 a1, char a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v5; // rsi
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  ULONG_PTR v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v12; // rcx
  void *v13; // rcx
  struct _KTHREAD *v14; // r15
  _QWORD *i; // rdi
  __int64 ProcessServerSilo; // rax
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  __int128 v22; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h]
  int v24; // [rsp+50h] [rbp-28h]

  v5 = 0LL;
  v21 = 0LL;
  v22 = 0uLL;
  if ( (_DWORD)a1 )
  {
    switch ( (_DWORD)a1 )
    {
      case 1:
        if ( (*(_DWORD *)(a3 + 500) & 0x2000) != 0 )
        {
          ProcessServerSilo = PsGetProcessServerSilo(a3);
          PspCatchCriticalBreak(1, (struct _KPROCESS *)a3, (const char *)(a3 + 824), ProcessServerSilo, a5);
        }
        break;
      case 2:
        if ( *(_QWORD *)(a3 + 664) )
        {
          v23 = a3;
          v24 = 0;
          PsInvokeWin32Callout(0, &v22, 0, 0LL);
        }
        break;
      case 3:
        if ( a4 )
        {
          *(_QWORD *)(a3 + 1472) = *(_QWORD *)(a4 + 1224);
        }
        else
        {
          if ( KeQuerySystemTimeUnsafe() )
          {
            KeQuerySystemTimePrecise(&v21);
            v20 = v21;
          }
          else
          {
            v20 = MEMORY[0xFFFFF78000000014];
          }
          *(_QWORD *)(a3 + 1472) = v20;
        }
        LOBYTE(a1) = 1;
        PspExitProcess(a1, a3);
        v10 = PsReferencePrimaryTokenWithTag(a3, 0x65547350u, v8, v9);
        if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(135LL, v10) )
          SeAuditProcessExit(a3, *(_DWORD *)(a3 + 1364));
        ObFastDereferenceObject((signed __int64 *)(a3 + 584), v10, 0x65547350u);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v12 = *(void **)(a3 + 1512);
        if ( v12 )
          ExpWnfDeleteProcessContext(v12);
        KeLeaveCriticalRegion();
        PspRundownSingleProcess((PRKPROCESS)a3);
        LpcExitProcess(a3);
        v13 = *(void **)(a3 + 1480);
        if ( v13 )
        {
          ExFreePoolWithTag(v13, 0);
          *(_QWORD *)(a3 + 1480) = 0LL;
        }
        break;
    }
  }
  else
  {
    v14 = KeGetCurrentThread();
    if ( !a2 )
      PspLockProcessExclusive(a3, (__int64)v14, a3, (struct _KLOCK_ENTRIES *)a4);
    KeForceResumeProcess(a3);
    if ( *(_DWORD *)(a3 + 1364) == 259 )
    {
      v19 = a5;
      if ( a5 == -1073741749 )
        v19 = *(_DWORD *)(a3 + 908);
      *(_DWORD *)(a3 + 1364) = v19;
    }
    for ( i = *(_QWORD **)(a3 + 880); i != (_QWORD *)(a3 + 880); i = (_QWORD *)*i )
    {
      if ( i - 175 != (_QWORD *)a4
        && !(unsigned __int8)*((_DWORD *)i - 349)
        && ObReferenceObjectSafeWithTag((__int64)(i - 175), 0x65547350u) )
      {
        PspUnlockProcessExclusive(a3, (__int64)v14);
        KeWaitForSingleObject(i - 175, Executive, 0, 0, 0LL);
        if ( v5 )
          ObfDereferenceObjectWithTag(v5, 0x65547350u);
        v5 = i - 175;
        PspLockProcessExclusive(a3, (__int64)v14, v17, v18);
      }
    }
    PspUnlockProcessExclusive(a3, (__int64)v14);
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x65547350u);
  }
}
