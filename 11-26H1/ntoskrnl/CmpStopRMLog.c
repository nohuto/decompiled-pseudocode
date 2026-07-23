/*
 * XREFs of CmpStopRMLog @ 0x1408B2FF0
 * Callers:
 *     CmShutdownCmRM @ 0x1408B5760 (CmShutdownCmRM.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     LockRMLog @ 0x1408B3D64 (LockRMLog.c)
 *     CmpLogCheckpoint @ 0x1408B3F84 (CmpLogCheckpoint.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStopRMLog(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  CmpLockRegistry();
  LockRMLog(a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      CmpLogCheckpoint(a1, v2, 0LL);
      ClfsDeleteMarshallingArea(*(PVOID *)(a1 + 96));
      *(_QWORD *)(a1 + 96) = 0LL;
    }
    if ( a1 != *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] && *(_QWORD *)(a1 + 16) == a1 + 16 )
      ClfsDeleteLogByPointer(*(PLOG_FILE_OBJECT *)(a1 + 88));
    ClfsCloseLogFileObject(*(PLOG_FILE_OBJECT *)(a1 + 88));
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegion();
  return CmpUnlockRegistry(v3);
}
