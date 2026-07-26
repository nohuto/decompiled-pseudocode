/*
 * XREFs of ?ndisReleaseStackTrace@@YAXK@Z @ 0x1400669D0
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x140007300 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x140169880 (-ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseStackTrace(ULONG_PTR Signature)
{
  ULONG_PTR v1; // rbx
  KIRQL v2; // di
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v3; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v4; // rbx
  int Flink; // r8d
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = (unsigned int)Signature;
  if ( byte_14011E738 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisStackTraces);
    if ( (_DWORD)v1 == 1 )
    {
      --dword_14011E768;
    }
    else
    {
      memset(&Context, 0, sizeof(Context));
      v3 = RtlLookupEntryHashTable(&HashTable, v1, &Context);
      v4 = v3;
      if ( v3 )
      {
        Flink = (int)v3[1].Linkage.Flink;
        LODWORD(v3[1].Linkage.Flink) = Flink ^ (Flink ^ (Flink - 1)) & 0x3FFFFFFF;
        if ( ((Flink - 1) & 0x3FFFFFFF) == 0 )
        {
          RtlRemoveEntryHashTable(&HashTable, v3, &Context);
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
    if ( v2 != 0xFF )
      KeReleaseSpinLock(&ndisStackTraces, v2);
  }
}
