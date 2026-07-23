/*
 * XREFs of CmInitServerSiloState @ 0x14085AEF4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     CmpInitSiloSupport @ 0x14085AF74 (CmpInitSiloSupport.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140A4B9C4 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A4C1F8 (CmpStartSiloRegistryNamespace.c)
 */

__int64 CmInitServerSiloState()
{
  __int64 v0; // r9
  int v1; // eax
  __int64 v2; // rdx
  struct _KTHREAD *v3; // rbx
  unsigned int v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  struct _KTHREAD *v8; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  v1 = CmpGetOrCreateContextForSiloNoRef(v0, &v8);
  if ( v1 >= 0 )
  {
    v3 = v8;
    if ( (int)CmpStartSiloRegistryNamespace(v8, v2, (unsigned int)v1) >= 0 )
    {
      KsepCacheLock(v3);
      LODWORD(v3->Header.WaitListHead.Flink) |= 1u;
      CmpUnlockSiloKeyLockTracker(v3);
    }
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
