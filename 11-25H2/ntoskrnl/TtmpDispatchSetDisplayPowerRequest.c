/*
 * XREFs of TtmpDispatchSetDisplayPowerRequest @ 0x14075BFF0
 * Callers:
 *     TtmDispatchApi @ 0x140A2D58C (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     TtmiSetDisplayPowerRequest @ 0x14075A65C (TtmiSetDisplayPowerRequest.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14075B924 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayPowerRequest(__int64 a1)
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
    v3 = TtmiSetDisplayPowerRequest(v6, Object, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  else
    TtmiLogError("TtmpDispatchSetDisplayPowerRequest", 855LL, (unsigned int)v2, (unsigned int)v2);
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
