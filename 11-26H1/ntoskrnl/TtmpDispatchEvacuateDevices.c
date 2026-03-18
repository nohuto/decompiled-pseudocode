/*
 * XREFs of TtmpDispatchEvacuateDevices @ 0x1407E7F68
 * Callers:
 *     TtmDispatchApi @ 0x140A3A3D0 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiEvacuateDevices @ 0x1407E51B0 (TtmiEvacuateDevices.c)
 *     TtmiScheduleSessionWorker @ 0x1407E67A4 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407E7B48 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchEvacuateDevices(__int64 a1)
{
  void *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(void **)(a1 + 8);
  v5 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(v1, 0, 1, &v5, &Object);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( TtmiEvacuateDevices(v5, (__int64)Object) )
      TtmiScheduleSessionWorker(v5, 1);
    v3 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchEvacuateDevices", 608LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v5 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
