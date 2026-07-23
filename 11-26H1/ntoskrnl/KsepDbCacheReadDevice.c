/*
 * XREFs of KsepDbCacheReadDevice @ 0x1409D6A58
 * Callers:
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KseShimDatabaseClose @ 0x1409D5D2C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x1409D6414 (KseShimDatabaseOpen.c)
 *     KsepCacheDeviceFree @ 0x1409D6B70 (KsepCacheDeviceFree.c)
 *     KsepStringDuplicate @ 0x1409D73AC (KsepStringDuplicate.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409D767C (KsepDbCacheReadDeviceInternal.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(__int64 a1, __int64 *a2)
{
  __int64 Paged; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int DeviceInternal; // ebx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  LIST_ENTRY *v15; // rsi
  struct _LIST_ENTRY *Blink; // rcx
  int v18; // eax
  LIST_ENTRY *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = 0LL;
  *a2 = 0LL;
  Paged = KsepPoolAllocatePaged();
  v5 = Paged;
  if ( !Paged )
    return (unsigned int)-1073741801;
  v6 = (_QWORD *)(Paged + 56);
  v6[1] = v6;
  *v6 = v6;
  DeviceInternal = KsepStringDuplicate(v5 + 40, a1);
  if ( DeviceInternal < 0 )
    goto LABEL_10;
  v11 = KseShimDatabaseOpen(&v19, v7, v9, v10);
  v15 = v19;
  DeviceInternal = v11;
  if ( v11 < 0 )
    goto LABEL_7;
  DeviceInternal = KsepDbCacheReadDeviceInternal(v19->Flink, &KsepShimDbLock.FirstArgument, a1, v5);
  if ( (int)(DeviceInternal + 0x80000000) >= 0 && DeviceInternal != -1073741275 )
    goto LABEL_7;
  Blink = v15[3].Blink;
  if ( !Blink )
    goto LABEL_6;
  v18 = KsepDbCacheReadDeviceInternal(Blink, &KsepShimDbLock.FirstArgument, a1, v5);
  if ( v18 >= 0 )
  {
    DeviceInternal = 0;
LABEL_17:
    *a2 = v5;
    v5 = 0LL;
    goto LABEL_7;
  }
  if ( DeviceInternal != -1073741275 )
  {
LABEL_6:
    if ( DeviceInternal < 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
  DeviceInternal = v18;
LABEL_7:
  if ( v15 )
    KseShimDatabaseClose((__int64)v15, v12, v13, v14);
  if ( v5 )
LABEL_10:
    KsepCacheDeviceFree(v5);
  return (unsigned int)DeviceInternal;
}
