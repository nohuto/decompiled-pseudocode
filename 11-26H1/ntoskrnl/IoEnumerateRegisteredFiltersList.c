/*
 * XREFs of IoEnumerateRegisteredFiltersList @ 0x140B3E840
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IopGetFsRegistrationInProgress @ 0x140531684 (IopGetFsRegistrationInProgress.c)
 */

NTSTATUS __stdcall IoEnumerateRegisteredFiltersList(
        PDRIVER_OBJECT *DriverObjectList,
        ULONG DriverObjectListSize,
        PULONG ActualNumberDriverObjects)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebx
  NTSTATUS i; // edi
  struct _KTHREAD *v10; // rax
  ULONG v11; // esi
  bool v12; // cf
  struct _KTHREAD *v13; // rbx

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      i = -1073741267;
      goto LABEL_4;
    }
    ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
  }
  v10 = *(struct _KTHREAD **)&IopSessionNotificationLock.Timer.Processor;
  v11 = DriverObjectListSize >> 3;
  while ( v10 != (struct _KTHREAD *)&IopSessionNotificationLock.Timer.Processor )
  {
    v10 = *(struct _KTHREAD **)&v10->Header.Lock;
    ++v7;
  }
  v12 = v11 < v7;
  *ActualNumberDriverObjects = v7;
  v13 = *(struct _KTHREAD **)&IopSessionNotificationLock.Timer.Processor;
  for ( i = v12 ? 0xC0000023 : 0; v11; --v11 )
  {
    if ( v13 == (struct _KTHREAD *)&IopSessionNotificationLock.Timer.Processor )
      break;
    PsReferenceSiloContext(v13->Header.WaitListHead.Blink);
    *DriverObjectList++ = (PDRIVER_OBJECT)v13->Header.WaitListHead.Blink;
    v13 = *(struct _KTHREAD **)&v13->Header.Lock;
  }
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
LABEL_4:
  KeLeaveCriticalRegion();
  return i;
}
