/*
 * XREFs of TtmpDispatchSetDisplayState @ 0x1407EDE54
 * Callers:
 *     TtmDispatchApi @ 0x1409F5FD0 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407ED6A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiSetPendingOnOffRequest @ 0x1407F1ED4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
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
    TtmiLogError("TtmpDispatchSetDisplayState", 468LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v7 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v4;
}
