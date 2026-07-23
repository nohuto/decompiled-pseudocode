/*
 * XREFs of CmpHiveCacheSubscribePnpNotifications @ 0x14085DBB0
 * Callers:
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 */

__int64 __fastcall CmpHiveCacheSubscribePnpNotifications(void **a1, __int64 a2, __int64 a3)
{
  void *v3; // rcx
  NTSTATUS v6; // eax
  PVOID v7; // r14
  NTSTATUS v8; // edi
  int v9; // eax
  struct _LIST_ENTRY *Blink; // r9
  PVOID v11; // r8
  PVOID EventCategoryData; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  EventCategoryData = 0LL;
  v6 = ObReferenceObjectByHandle(
         v3,
         0,
         (POBJECT_TYPE)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink,
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
  Blink = WheapPfaLock.WaitListEntry.Blink;
  v11 = EventCategoryData;
  *(_QWORD *)(a2 + 352) = EventCategoryData;
  v8 = IoRegisterPlugPlayNotification(
         EventCategoryTargetDeviceChange,
         0,
         v11,
         (PDRIVER_OBJECT)Blink,
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
