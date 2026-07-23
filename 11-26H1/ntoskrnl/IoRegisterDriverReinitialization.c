/*
 * XREFs of IoRegisterDriverReinitialization @ 0x1407990E0
 * Callers:
 *     DifIoRegisterDriverReinitializationWrapper @ 0x140661980 (DifIoRegisterDriverReinitializationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertTailList @ 0x1405CD2BC (IopInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
    IopInterlockedInsertTailList((__int64)&IopDriverReinitializeQueueHead, Pool2);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}
