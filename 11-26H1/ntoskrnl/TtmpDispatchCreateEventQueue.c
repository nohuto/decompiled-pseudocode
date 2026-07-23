/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x1407ED894
 * Callers:
 *     TtmDispatchApi @ 0x1409F5FD0 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1407EC698 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407ED6A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateEventQueue @ 0x1407F2878 (TtmiCreateEventQueue.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx
  void *v4; // rdi
  int inserted; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  void *v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  v4 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Object[0] = 0LL;
  inserted = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v11, Object);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v7 = 304LL;
LABEL_3:
    TtmiLogError("TtmpDispatchCreateEventQueue", v7, (unsigned int)inserted, (unsigned int)inserted);
    goto LABEL_11;
  }
  v8 = TtmiCreateEventQueue(v11, &v12);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v4 = v12;
    inserted = TtmiWriteEnumerationEventsToQueue(v11, (__int64)v12);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 320LL;
      goto LABEL_3;
    }
    inserted = ObInsertObjectEx(v4, 0LL, 2031616LL, 0LL, 0, 0LL, &v13);
    v4 = 0LL;
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 338LL;
      goto LABEL_3;
    }
    v6 = 0;
    *a2 = v13;
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateEventQueue", 310LL, (unsigned int)v8, (unsigned int)v8);
    v4 = v12;
  }
LABEL_11:
  if ( v11 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v4 )
    ObfDereferenceObject(v4);
  return v6;
}
