/*
 * XREFs of CmpCloseKeyObject @ 0x140A66980
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140264BE0 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmLockHive @ 0x1408CEC48 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  char IsKeyDeletedForKeyBody; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  ULONG_PTR v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  PVOID *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  PVOID P[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v26; // [rsp+50h] [rbp-9h] BYREF
  __int128 v27; // [rsp+60h] [rbp+7h] BYREF
  __int64 v28; // [rsp+70h] [rbp+17h]
  _OWORD v29[2]; // [rsp+78h] [rbp+1Fh] BYREF

  v28 = 0LL;
  v4 = 0;
  v27 = 0LL;
  v26 = 0LL;
  *(_OWORD *)P = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v29, 0x20000uLL, a3);
    v4 = 1;
  }
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v27);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v26 + 1) = &v26;
    *(_QWORD *)&v26 = &v26;
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry(v8, v7, v9, v10);
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v17 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v17);
      CmpUnlockRegistry(v24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      CmLockHive(*(_QWORD *)(v17 + 32), v14, v15, v16);
      v20 = *(_QWORD *)(a2 + 16);
      if ( v20 && *(_QWORD *)(v20 + 16) != v20 + 16 )
        CmpPostNotify(v20, v18, v19, 0x10Bu, 0, (__int128 *)P, &v26);
      CmUnlockHive(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL));
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry(v21);
      while ( 1 )
      {
        v22 = (PVOID *)P[0];
        if ( P[0] == P )
          break;
        if ( *((PVOID **)P[0] + 1) != P || (v23 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
          __fastfail(3u);
        P[0] = *(PVOID *)P[0];
        *(_QWORD *)(v23 + 8) = P;
        ObDereferenceObjectDeferDelete(v22[2]);
        ExFreePoolWithTag(v22, 0);
      }
      CmpSignalDeferredPosts((_QWORD **)&v26);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  if ( v4 && CmpTraceRoutine )
  {
    LOBYTE(v8) = 27;
    guard_dispatch_icall_no_overrides(v8, (__int64)v29);
  }
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v27);
}
