/*
 * XREFs of CmpInitializeRegistryProcess @ 0x140857024
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     ExInitializeLookasideListEx @ 0x140498F80 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x1406E2E84 (CmSiProcessTupleInitialize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406E2EA4 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E2FDC (CmSiSetProcessWorkingSetMaximum.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x140723770 (ZwSetInformationProcess.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x140856E08 (CmpCreateRegistryProcessToken.c)
 *     CmpCreateRegistryThread @ 0x140856F70 (CmpCreateRegistryThread.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  void *v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  int RegistryThread; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  HANDLE Handle[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF
  void *v10; // [rsp+98h] [rbp+28h] BYREF
  HANDLE v11; // [rsp+A0h] [rbp+30h] BYREF

  Object = 0LL;
  v0 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  *(_OWORD *)Handle = 0LL;
  CmSiProcessTupleInitialize();
  RegistryThread = CmpCreateRegistryProcessToken(&Object, v1, v2, v3);
  if ( RegistryThread >= 0 )
  {
    RegistryThread = PsCreateMinimalProcess(
                       (__int64)PsInitialSystemProcess,
                       (__int64)&KiSystemServiceTraceCallbackLock.WriteTransferCount,
                       0LL,
                       BYTE2(PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]),
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       0LL,
                       &v10);
    if ( RegistryThread < 0
      || (RegistryThread = ObOpenObjectByPointer(Object, 0x200u, 0LL, 1u, (POBJECT_TYPE)SeTokenObjectType, 0, Handle),
          RegistryThread < 0) )
    {
      v0 = v10;
    }
    else
    {
      v0 = v10;
      RegistryThread = ZwSetInformationProcess((__int64)v10, 9LL);
      if ( RegistryThread >= 0 )
      {
        RegistryThread = CmSiProcessTupleStartFromHandle(v5, v0);
        if ( RegistryThread >= 0 )
        {
          v0 = 0LL;
          CmSiSetProcessWorkingSetMaximum();
          KeInitializeEvent((PRKEVENT)&CmpFreezeListLock.WaitBlockList, SynchronizationEvent, 0);
          RegistryThread = CmpCreateRegistryThread((__int64)&v11, v6, (__int64)CmpDummyThreadRoutine, 0LL);
          if ( RegistryThread >= 0 )
          {
            RegistryThread = ExInitializeLookasideListEx(
                               &CmpBounceBufferLookaside,
                               (PALLOCATE_FUNCTION_EX)CmpAllocatePoolLookaside,
                               (PFREE_FUNCTION_EX)CmSiFreeMemory,
                               PagedPool,
                               0,
                               0x1000uLL,
                               0x42424D43u,
                               0);
            if ( RegistryThread >= 0 )
              RegistryThread = 0;
          }
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v11 )
    ZwClose(v11);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)RegistryThread;
}
