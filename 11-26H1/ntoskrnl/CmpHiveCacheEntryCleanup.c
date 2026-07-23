/*
 * XREFs of CmpHiveCacheEntryCleanup @ 0x14086815C
 * Callers:
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x14085DC80 (CmpMachineHiveCacheClaimEntry.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x14085DD0C (CmpMachineHiveCachePopulateEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1408683C0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1404A5588 (PnpUnregisterPlugPlayNotification.c)
 *     CmSiEventTupleCleanup @ 0x1404AE7AC (CmSiEventTupleCleanup.c)
 *     CmSiWaitForSingleEvent @ 0x1404C9C58 (CmSiWaitForSingleEvent.c)
 *     CmSiSetEvent @ 0x1406E7D40 (CmSiSetEvent.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetInformationObject @ 0x140728B40 (ZwSetInformationObject.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 */

void __fastcall CmpHiveCacheEntryCleanup(__int64 a1, int a2)
{
  __int64 v2; // rsi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  struct _LIST_ENTRY *v8; // rcx
  _OWORD *v9; // rdi
  struct _PRIVILEGE_SET *v10; // rcx
  void *v11; // rcx
  __int16 ObjectInformation; // [rsp+38h] [rbp+10h] BYREF

  v2 = 6LL;
  if ( a2 == 6 )
  {
    CmSiWaitForSingleEvent(a1 + 288);
    v9 = (_OWORD *)(a1 + 208);
    do
    {
      CmSiEventTupleCleanup((__int64)v9);
      *v9++ = 0LL;
      --v2;
    }
    while ( v2 );
    v10 = *(struct _PRIVILEGE_SET **)(a1 + 320);
    if ( v10 )
    {
      CmSiFreeMemory(v10);
      *(_QWORD *)(a1 + 320) = 0LL;
      *(_DWORD *)(a1 + 312) = 0;
    }
    v11 = *(void **)(a1 + 360);
    if ( v11 )
      NtClose(v11);
    *(_DWORD *)(a1 + 168) = 5;
  }
  else if ( *(_DWORD *)(a1 + 168) != 4 )
  {
    *(_DWORD *)(a1 + 172) = a2;
    v4 = *(void **)(a1 + 368);
    if ( v4 )
    {
      CmpDestroyHive(v4);
      *(_QWORD *)(a1 + 368) = 0LL;
    }
    v5 = *(void **)(a1 + 176);
    if ( v5 )
    {
      ObjectInformation = 0;
      ZwSetInformationObject(v5, ObjectHandleFlagInformation, &ObjectInformation, 2u);
      ZwClose(*(HANDLE *)(a1 + 176));
      *(_QWORD *)(a1 + 176) = 0LL;
    }
    v6 = *(void **)(a1 + 184);
    if ( v6 )
    {
      ObjectInformation = 0;
      ZwSetInformationObject(v6, ObjectHandleFlagInformation, &ObjectInformation, 2u);
      ZwClose(*(HANDLE *)(a1 + 184));
      *(_QWORD *)(a1 + 184) = 0LL;
    }
    v7 = *(void **)(a1 + 192);
    if ( v7 )
    {
      ObjectInformation = 0;
      ZwSetInformationObject(v7, ObjectHandleFlagInformation, &ObjectInformation, 2u);
      ZwClose(*(HANDLE *)(a1 + 192));
      *(_QWORD *)(a1 + 192) = 0LL;
    }
    v8 = *(struct _LIST_ENTRY **)(a1 + 344);
    if ( v8 )
    {
      PnpUnregisterPlugPlayNotification(v8, 1);
      *(_QWORD *)(a1 + 344) = 0LL;
    }
    CmSiSetEvent(a1 + 256);
    *(_DWORD *)(a1 + 168) = 4;
  }
}
