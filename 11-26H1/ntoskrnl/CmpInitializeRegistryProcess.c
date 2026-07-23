/*
 * XREFs of CmpInitializeRegistryProcess @ 0x14085D3B4
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ExInitializeLookasideListEx @ 0x140492AD0 (ExInitializeLookasideListEx.c)
 *     CmSiProcessTupleInitialize @ 0x1406E7B30 (CmSiProcessTupleInitialize.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1406E7B50 (CmSiProcessTupleStartFromHandle.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E7C88 (CmSiSetProcessWorkingSetMaximum.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x140728340 (ZwSetInformationProcess.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     CmpCreateRegistryProcessToken @ 0x14085D1A0 (CmpCreateRegistryProcessToken.c)
 *     CmpCreateRegistryThread @ 0x14085D308 (CmpCreateRegistryThread.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 */

__int64 CmpInitializeRegistryProcess()
{
  HANDLE v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  int RegistryThread; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  HANDLE ProcessInformation[2]; // [rsp+60h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF
  HANDLE ProcessHandle; // [rsp+98h] [rbp+28h] BYREF
  HANDLE v11; // [rsp+A0h] [rbp+30h] BYREF

  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v11 = 0LL;
  *(_OWORD *)ProcessInformation = 0LL;
  CmSiProcessTupleInitialize();
  RegistryThread = CmpCreateRegistryProcessToken(&Object, v1, v2, v3);
  if ( RegistryThread >= 0 )
  {
    RegistryThread = PsCreateMinimalProcess(
                       (__int64)PsInitialSystemProcess,
                       (__int64)&KiSystemServiceTraceCallbackLock.WriteOperationCount,
                       0LL,
                       BYTE2(PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]),
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       0LL,
                       &ProcessHandle);
    if ( RegistryThread < 0
      || (RegistryThread = ObOpenObjectByPointer(
                             Object,
                             0x200u,
                             0LL,
                             1u,
                             (POBJECT_TYPE)SeTokenObjectType,
                             0,
                             ProcessInformation),
          RegistryThread < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      RegistryThread = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( RegistryThread >= 0 )
      {
        RegistryThread = CmSiProcessTupleStartFromHandle(v5, v0);
        if ( RegistryThread >= 0 )
        {
          v0 = 0LL;
          CmSiSetProcessWorkingSetMaximum();
          KeInitializeEvent((PRKEVENT)&CmpFreezeListLock.QuantumTarget, SynchronizationEvent, 0);
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
  if ( ProcessInformation[0] )
    ZwClose(ProcessInformation[0]);
  if ( v11 )
    ZwClose(v11);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)RegistryThread;
}
