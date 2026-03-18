/*
 * XREFs of CmInitServerSiloState @ 0x140854BE4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 *     CmpInitSiloSupport @ 0x140854C64 (CmpInitSiloSupport.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x1409A604C (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140A30A64 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
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
