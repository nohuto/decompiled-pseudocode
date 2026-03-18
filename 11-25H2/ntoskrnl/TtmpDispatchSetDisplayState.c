/*
 * XREFs of TtmpDispatchSetDisplayState @ 0x14075C09C
 * Callers:
 *     TtmDispatchApi @ 0x140A2D58C (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14075B924 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiSetPendingOnOffRequest @ 0x140760454 (TtmiSetPendingOnOffRequest.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayState(__int64 a1)
{
  int v2; // eax
  int v3; // r8d
  unsigned int v4; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v7, &Object);
  v4 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 16);
    TtmiSetPendingOnOffRequest(v7, (_DWORD)Object, v3, *(_DWORD *)(a1 + 20), 1396986708);
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayState", 470LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v4;
}
