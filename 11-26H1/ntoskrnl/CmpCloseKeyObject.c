/*
 * XREFs of CmpCloseKeyObject @ 0x140A59A10
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140265670 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmLockHive @ 0x1408C8694 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408C86FC (CmUnlockHive.c)
 *     CmpPostNotify @ 0x1408CAEE0 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1408D0CA0 (CmpSignalDeferredPosts.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // bl
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char IsKeyDeletedForKeyBody; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  ULONG_PTR v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  PVOID *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  PVOID P[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v27; // [rsp+50h] [rbp-9h] BYREF
  __int128 v28; // [rsp+60h] [rbp+7h] BYREF
  __int64 v29; // [rsp+70h] [rbp+17h]
  _OWORD v30[2]; // [rsp+78h] [rbp+1Fh] BYREF

  v29 = 0LL;
  v4 = 0;
  v28 = 0LL;
  v27 = 0LL;
  *(_OWORD *)P = 0LL;
  memset(v30, 0, sizeof(v30));
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v30, 0x20000uLL, a3);
    v4 = 1;
  }
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v28);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v27 + 1) = &v27;
    *(_QWORD *)&v27 = &v27;
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry(v7);
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v14 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v14);
      CmpUnlockRegistry(v23);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25);
    }
    else
    {
      CmLockHive(*(_QWORD *)(v14 + 32), v11, v12, v13);
      v17 = *(_QWORD *)(a2 + 16);
      if ( v17 && *(_QWORD *)(v17 + 16) != v17 + 16 )
        CmpPostNotify(v17, v15, v16, 0x10Bu, 0, (__int128 *)P, &v27);
      CmUnlockHive(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL));
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry(v18);
      while ( 1 )
      {
        v19 = (PVOID *)P[0];
        if ( P[0] == P )
          break;
        if ( *((PVOID **)P[0] + 1) != P || (v22 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
          __fastfail(3u);
        P[0] = *(PVOID *)P[0];
        *(_QWORD *)(v22 + 8) = P;
        ObDereferenceObjectDeferDelete(v19[2]);
        ExFreePoolWithTag(v19, 0);
      }
      CmpSignalDeferredPosts((_QWORD **)&v27);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21);
    }
  }
  if ( v4 && CmpTraceRoutine )
  {
    LOBYTE(v7) = 27;
    guard_dispatch_icall_no_overrides(v7, (__int64)v30);
  }
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v28);
}
