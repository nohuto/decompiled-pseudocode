/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x140799840
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rcx
  PVOID *v6; // rdx
  PVOID **v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  for ( i = (PVOID *)IopFsNotifyChangeQueueHead; i != &IopFsNotifyChangeQueueHead; i = (PVOID *)*i )
  {
    if ( i[2] == DriverObject && i[3] == DriverNotificationRoutine )
    {
      v6 = (PVOID *)*i;
      if ( *((PVOID **)*i + 1) != i || (v7 = (PVOID **)i[1], *v7 != i) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      ExFreePoolWithTag(i, 0);
      break;
    }
  }
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(DriverObject);
}
