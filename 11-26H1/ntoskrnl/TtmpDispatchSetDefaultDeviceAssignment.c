/*
 * XREFs of TtmpDispatchSetDefaultDeviceAssignment @ 0x1407E8180
 * Callers:
 *     TtmDispatchApi @ 0x140A3A3D0 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407E7B48 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1407EA384 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDefaultDeviceAssignment(__int64 a1)
{
  void *v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = *(void **)(a1 + 8);
  Object = 0LL;
  v3 = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v7, &Object);
  v4 = v7;
  v5 = v3;
  if ( v3 >= 0 )
  {
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 4) & 0xFFFFF7FF | ((*(_BYTE *)(a1 + 16) != 0) << 11);
    TtmiLogSessionDeviceAssignmentPolicySet();
    v5 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDefaultDeviceAssignment", 700LL, (unsigned int)v3, (unsigned int)v3);
  }
  if ( v4 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
