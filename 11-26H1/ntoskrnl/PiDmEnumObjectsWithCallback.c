/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x140967BEC
 * Callers:
 *     PiDmListInit @ 0x1407AA100 (PiDmListInit.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x140AAEBFC (PiDmGetObjectList.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403C1FD0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectAcquireSharedLock @ 0x140967DB8 (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1409A9FC0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409AA00C (PiDmObjectManagerAcquireSharedLock.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v6; // esi
  __int64 ObjectManagerForObjectType; // r14
  const wchar_t *v8; // rax
  __int64 *v9; // rax
  char v10; // bl
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v12; // rax
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-59h] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp-49h]
  int v19; // [rsp+78h] [rbp-41h]
  unsigned int v20; // [rsp+7Ch] [rbp-3Dh]

  v3 = 0LL;
  v6 = 0;
  memset_0(v17, 0, 0x70uLL);
  RestartKey[0] = 0LL;
  P = v17;
  DeleteCount = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1);
  v20 = a1;
  v19 = 0;
  v8 = L"\\\\?\\";
  if ( a1 != 3 )
    v8 = &word_140B8A320;
  v18 = v8;
  PiDmObjectManagerAcquireSharedLock(ObjectManagerForObjectType);
  v9 = (__int64 *)RtlEnumerateGenericTableLikeADirectory(
                    (PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104),
                    0LL,
                    0LL,
                    0,
                    RestartKey,
                    &DeleteCount,
                    &P);
  if ( v9 )
  {
    v3 = *v9;
    _InterlockedIncrement((volatile signed __int32 *)(*v9 + 8));
  }
  PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
  while ( v3 )
  {
    PiDmObjectAcquireSharedLock(v3);
    v10 = *(_BYTE *)(v3 + 32);
    CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)v3);
    if ( (v10 & 1) != 0 )
      v6 = guard_dispatch_icall_no_overrides(v3, a3);
    if ( v6 < 0 )
    {
      PiDmObjectRelease((unsigned int *)v3);
      return (unsigned int)v6;
    }
    P = (PVOID)v3;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)ObjectManagerForObjectType, 1u);
    v12 = (__int64 *)RtlEnumerateGenericTableLikeADirectory(
                       (PRTL_AVL_TABLE)(ObjectManagerForObjectType + 104),
                       0LL,
                       0LL,
                       1u,
                       RestartKey,
                       &DeleteCount,
                       &P);
    if ( v12 )
    {
      v3 = *v12;
      _InterlockedIncrement((volatile signed __int32 *)(*v12 + 8));
    }
    else
    {
      v3 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)ObjectManagerForObjectType);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PiDmObjectRelease((unsigned int *)P);
  }
  return (unsigned int)v6;
}
