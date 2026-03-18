/*
 * XREFs of CmpHiveCacheSubscribePnpNotifications @ 0x140857820
 * Callers:
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140862230 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 */

__int64 __fastcall CmpHiveCacheSubscribePnpNotifications(void **a1, __int64 a2, __int64 a3)
{
  void *v3; // rcx
  NTSTATUS v6; // eax
  PVOID v7; // r14
  NTSTATUS v8; // edi
  int v9; // eax
  struct _LIST_ENTRY *Flink; // r9
  PVOID v11; // r8
  PVOID EventCategoryData; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  EventCategoryData = 0LL;
  v6 = ObReferenceObjectByHandle(
         v3,
         0,
         **(POBJECT_TYPE **)&CmpCallbackListLock.ApcStateFill[40],
         0,
         &EventCategoryData,
         0LL);
  v7 = EventCategoryData;
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 16;
LABEL_5:
    SetFailureLocation(a3, 0, 39, v8, v9);
    ObfDereferenceObject(v7);
    return (unsigned int)v8;
  }
  Flink = WheapPfaLock.ApcState.ApcListHead[1].Flink;
  v11 = EventCategoryData;
  *(_QWORD *)(a2 + 352) = EventCategoryData;
  v8 = IoRegisterPlugPlayNotification(
         EventCategoryTargetDeviceChange,
         0,
         v11,
         (PDRIVER_OBJECT)Flink,
         CmpHiveCachePnpNotificationCallback,
         (PVOID)a2,
         (PVOID *)(a2 + 344));
  if ( v8 < 0 )
  {
    v9 = 32;
    goto LABEL_5;
  }
  return (unsigned int)v8;
}
