/*
 * XREFs of TtmpDispatchSetInputWakeCapability @ 0x1407E8470
 * Callers:
 *     TtmDispatchApi @ 0x140A3A3D0 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiSetInputWakeCapability @ 0x1407E5490 (TtmiSetInputWakeCapability.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407E7B48 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetInputWakeCapability(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, &Object);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = TtmiSetInputWakeCapability(v6, (__int64)Object, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  else
    TtmiLogError("TtmpDispatchSetInputWakeCapability", 931LL, (unsigned int)v2, (unsigned int)v2);
  if ( v6 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
