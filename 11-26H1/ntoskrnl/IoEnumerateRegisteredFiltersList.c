/*
 * XREFs of IoEnumerateRegisteredFiltersList @ 0x140B40870
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopGetFsRegistrationInProgress @ 0x140533B84 (IopGetFsRegistrationInProgress.c)
 */

NTSTATUS __stdcall IoEnumerateRegisteredFiltersList(
        PDRIVER_OBJECT *DriverObjectList,
        ULONG DriverObjectListSize,
        PULONG ActualNumberDriverObjects)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebx
  NTSTATUS i; // edi
  PVOID *v10; // rax
  ULONG v11; // esi
  bool v12; // cf
  PVOID *v13; // rbx

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      i = -1073741267;
      goto LABEL_4;
    }
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  }
  v10 = (PVOID *)IopFsNotifyChangeQueueHead;
  v11 = DriverObjectListSize >> 3;
  while ( v10 != &IopFsNotifyChangeQueueHead )
  {
    v10 = (PVOID *)*v10;
    ++v7;
  }
  v12 = v11 < v7;
  *ActualNumberDriverObjects = v7;
  v13 = (PVOID *)IopFsNotifyChangeQueueHead;
  for ( i = v12 ? 0xC0000023 : 0; v11; --v11 )
  {
    if ( v13 == &IopFsNotifyChangeQueueHead )
      break;
    PsReferenceSiloContext(v13[2]);
    *DriverObjectList++ = (PDRIVER_OBJECT)v13[2];
    v13 = (PVOID *)*v13;
  }
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_4:
  KeLeaveCriticalRegion();
  return i;
}
