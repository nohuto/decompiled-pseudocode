/*
 * XREFs of KsepDbCacheReadDevice @ 0x1409E6158
 * Callers:
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2C3B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409E5724 (KsepDbCacheReadDeviceInternal.c)
 *     KsepStringDuplicate @ 0x1409E5E2C (KsepStringDuplicate.c)
 *     KsepCacheDeviceFree @ 0x1409E6270 (KsepCacheDeviceFree.c)
 *     KseShimDatabaseOpen @ 0x1409E63D0 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x1409E6D54 (KseShimDatabaseClose.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(_WORD *a1, __int64 *a2)
{
  __int64 Paged; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  int DeviceInternal; // ebx
  int v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // rcx
  int v12; // eax
  __int64 *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
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
  v8 = KseShimDatabaseOpen(&v13);
  v9 = v13;
  DeviceInternal = v8;
  if ( v8 < 0 )
    goto LABEL_7;
  DeviceInternal = KsepDbCacheReadDeviceInternal(*v13, (__int64)&KsepShimDbLock.152, (__int64)a1, v5);
  if ( (int)(DeviceInternal + 0x80000000) >= 0 && DeviceInternal != -1073741275 )
    goto LABEL_7;
  v10 = v9[7];
  if ( !v10 )
    goto LABEL_6;
  v12 = KsepDbCacheReadDeviceInternal(v10, (__int64)&KsepShimDbLock.152, (__int64)a1, v5);
  if ( v12 >= 0 )
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
  DeviceInternal = v12;
LABEL_7:
  if ( v9 )
    KseShimDatabaseClose(v9);
  if ( v5 )
LABEL_10:
    KsepCacheDeviceFree(v5);
  return (unsigned int)DeviceInternal;
}
