/*
 * XREFs of PspExitLastThread @ 0x140A41964
 * Callers:
 *     PsTerminateMinimalProcess @ 0x1407FA5A8 (PsTerminateMinimalProcess.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 * Callees:
 *     KeForceResumeProcess @ 0x140203144 (KeForceResumeProcess.c)
 *     KeQuerySystemTimePrecise @ 0x14021B070 (KeQuerySystemTimePrecise.c)
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     KeQuerySystemTimeUnsafe @ 0x1404B2F74 (KeQuerySystemTimeUnsafe.c)
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x1408129B0 (SeAuditProcessExit.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     LpcExitProcess @ 0x140A41C24 (LpcExitProcess.c)
 *     ExpWnfDeleteProcessContext @ 0x140A41EC4 (ExpWnfDeleteProcessContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140A435C0 (SeAuditingWithTokenForSubcategory.c)
 *     PspExitProcess @ 0x140A43620 (PspExitProcess.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspExitLastThread(__int64 a1, char a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v5; // rsi
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  ULONG_PTR v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v12; // rcx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  void *v15; // rcx
  struct _KTHREAD *v16; // r15
  _QWORD *i; // rdi
  __int64 ProcessServerSilo; // rax
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+38h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h]
  int v26; // [rsp+50h] [rbp-28h]

  v5 = 0LL;
  v23 = 0LL;
  v24 = 0uLL;
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
          v25 = a3;
          v26 = 0;
          PsInvokeWin32Callout(0, &v24, 0, 0LL);
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
            KeQuerySystemTimePrecise(&v23);
            v22 = v23;
          }
          else
          {
            v22 = MEMORY[0xFFFFF78000000014];
          }
          *(_QWORD *)(a3 + 1472) = v22;
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
        PspRundownSingleProcess((PRKPROCESS)a3, 1, v13, v14);
        LpcExitProcess(a3);
        v15 = *(void **)(a3 + 1480);
        if ( v15 )
        {
          ExFreePoolWithTag(v15, 0);
          *(_QWORD *)(a3 + 1480) = 0LL;
        }
        break;
    }
  }
  else
  {
    v16 = KeGetCurrentThread();
    if ( !a2 )
      PspLockProcessExclusive(a3, (__int64)v16, a3, (struct _KLOCK_ENTRIES *)a4);
    KeForceResumeProcess(a3);
    if ( *(_DWORD *)(a3 + 1364) == 259 )
    {
      v21 = a5;
      if ( a5 == -1073741749 )
        v21 = *(_DWORD *)(a3 + 908);
      *(_DWORD *)(a3 + 1364) = v21;
    }
    for ( i = *(_QWORD **)(a3 + 880); i != (_QWORD *)(a3 + 880); i = (_QWORD *)*i )
    {
      if ( i - 175 != (_QWORD *)a4
        && !(unsigned __int8)*((_DWORD *)i - 349)
        && ObReferenceObjectSafeWithTag((__int64)(i - 175), 0x65547350u) )
      {
        PspUnlockProcessExclusive(a3, (__int64)v16);
        KeWaitForSingleObject(i - 175, Executive, 0, 0, 0LL);
        if ( v5 )
          ObfDereferenceObjectWithTag(v5, 0x65547350u);
        v5 = i - 175;
        PspLockProcessExclusive(a3, (__int64)v16, v19, v20);
      }
    }
    PspUnlockProcessExclusive(a3, (__int64)v16);
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x65547350u);
  }
}
