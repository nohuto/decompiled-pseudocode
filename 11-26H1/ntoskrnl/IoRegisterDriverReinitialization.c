/*
 * XREFs of IoRegisterDriverReinitialization @ 0x1407965B0
 * Callers:
 *     DifIoRegisterDriverReinitializationWrapper @ 0x14065DDA0 (DifIoRegisterDriverReinitializationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertTailList @ 0x1405CA9EC (IopInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __stdcall IoRegisterDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *Pool2; // rax

  PsReferenceSiloContext(DriverObject);
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    DriverObject->Flags |= 8u;
    Pool2[2] = DriverObject;
    Pool2[3] = DriverReinitializationRoutine;
    Pool2[4] = Context;
    IopInterlockedInsertTailList((__int64)&IopSessionNotificationLock.WaitBlock[0].SparePtr, Pool2);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}
