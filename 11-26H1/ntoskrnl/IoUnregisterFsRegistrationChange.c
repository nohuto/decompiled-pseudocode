/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x140796D10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *i; // rcx
  unsigned __int16 *v6; // rdx
  unsigned __int16 **v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16], 1u);
  for ( i = *(unsigned __int16 **)&IopSessionNotificationLock.Timer.Processor;
        i != &IopSessionNotificationLock.Timer.Processor;
        i = *(unsigned __int16 **)i )
  {
    if ( *((PDRIVER_OBJECT *)i + 2) == DriverObject && *((PDRIVER_FS_NOTIFICATION *)i + 3) == DriverNotificationRoutine )
    {
      v6 = *(unsigned __int16 **)i;
      if ( *(unsigned __int16 **)(*(_QWORD *)i + 8LL) != i || (v7 = (unsigned __int16 **)*((_QWORD *)i + 1), *v7 != i) )
        __fastfail(3u);
      *v7 = v6;
      *((_QWORD *)v6 + 1) = v7;
      ExFreePoolWithTag(i, 0);
      break;
    }
  }
  ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.SavedApcStateFill[16]);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(DriverObject);
}
