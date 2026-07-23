/*
 * XREFs of CmpHiveCachePnpNotificationCallback @ 0x1408683C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1408682FC (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x140868374 (CmpHiveCacheEntryLockRelease.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpHiveCachePnpNotificationCallback(PVOID NotificationStructure, _DWORD *Context)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  int v8; // eax
  char v9; // si
  void *v10; // rcx
  unsigned int v11; // edi
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v13);
  v4 = *(_QWORD *)(v3 + 4) - *(_QWORD *)&GUID_IO_VOLUME_LOCK.Data1;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !v4 )
    v4 = *(_QWORD *)(v3 + 12) - *(_QWORD *)GUID_IO_VOLUME_LOCK.Data4;
  if ( v4 )
  {
    v11 = 0;
  }
  else
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpHiveCacheEntryLockAcquire((__int64)Context, v5, v6, v7);
    v8 = Context[42];
    v9 = 1;
    if ( v8 == 3 || (unsigned int)(v8 - 4) <= 1 )
    {
      v11 = -1073741431;
      SetFailureLocation(0LL, 0, 43, -1073741431, 16);
    }
    else
    {
      v10 = (void *)*((_QWORD *)Context + 44);
      Context[42] = 3;
      ObfDereferenceObject(v10);
      CmpHiveCacheEntryLockRelease((__int64)Context);
      CmpHiveCacheEntryCleanup((__int64)Context, 5);
      v11 = 0;
      v9 = 0;
    }
    CmpDetachFromRegistryProcess(&ApcState);
    if ( v9 )
      CmpHiveCacheEntryLockRelease((__int64)Context);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v13);
  return v11;
}
