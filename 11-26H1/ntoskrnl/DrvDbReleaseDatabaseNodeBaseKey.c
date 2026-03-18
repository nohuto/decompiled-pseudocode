/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x14091D48C
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x14089DBC4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140AFB0D0 (DrvDbGetObjectList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x14091E08C (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbReleaseDatabaseNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
  {
    v8 = ZwClose(a4);
    if ( v8 >= 0 )
      v8 = DrvDbUnloadDatabaseNode(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10);
  return (unsigned int)v8;
}
