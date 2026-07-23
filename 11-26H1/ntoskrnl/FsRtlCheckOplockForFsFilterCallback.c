/*
 * XREFs of FsRtlCheckOplockForFsFilterCallback @ 0x140B3F290
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x14048BB5C (Feature_OpocksAndMappedSections__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall FsRtlCheckOplockForFsFilterCallback(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  PEVENT_DATA_DESCRIPTOR v10; // [rsp+20h] [rbp-168h]
  char v11[4]; // [rsp+60h] [rbp-128h] BYREF
  int v12; // [rsp+64h] [rbp-124h] BYREF
  int v13; // [rsp+68h] [rbp-120h] BYREF
  _DWORD v14[3]; // [rsp+6Ch] [rbp-11Ch] BYREF
  __int64 v15; // [rsp+78h] [rbp-110h] BYREF
  _QWORD v16[2]; // [rsp+80h] [rbp-108h] BYREF
  _BYTE v17[48]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-C8h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 *v20; // [rsp+100h] [rbp-88h]
  __int64 v21; // [rsp+108h] [rbp-80h]
  int *v22; // [rsp+110h] [rbp-78h]
  __int64 v23; // [rsp+118h] [rbp-70h]
  int *v24; // [rsp+120h] [rbp-68h]
  __int64 v25; // [rsp+128h] [rbp-60h]
  _DWORD *v26; // [rsp+130h] [rbp-58h]
  __int64 v27; // [rsp+138h] [rbp-50h]
  _QWORD *v28; // [rsp+140h] [rbp-48h]
  __int64 v29; // [rsp+148h] [rbp-40h]

  v5 = 0;
  v6 = *a1;
  v16[1] = *a1;
  if ( (a3 & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  Feature_OpocksAndMappedSections__private_ReportDeviceUsage();
  if ( v6 )
  {
    v11[0] = 0;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
    v11[0] = 1;
    if ( (*(_DWORD *)(v6 + 144) & 0x7000) != 0 )
    {
      memset_0(v17, 0, 0x48uLL);
      v17[0] = 4;
      v18 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a2 + 4) == 0xFF && *(_DWORD *)(a2 + 24) == 1 && (*(_DWORD *)(a2 + 28) & 0x44) != 0 )
      {
        if ( (unsigned int)dword_140E06B30 > 5 && tlgKeywordOn((__int64)&dword_140E06B30, 0x400000000000LL) )
        {
          v15 = 1LL;
          v20 = &v15;
          v21 = 8LL;
          v12 = 1;
          v22 = &v12;
          v23 = v9;
          v13 = v8;
          v24 = &v13;
          v25 = v9;
          v14[0] = *(_DWORD *)(v6 + 144);
          v26 = v14;
          v27 = v9;
          v16[0] = 0x1000000LL;
          v28 = v16;
          v29 = 8LL;
          tlgWriteAgg((__int64)&dword_140E06B30, (unsigned __int8 *)&word_140046FBA, v8, 7u, &v19);
        }
        LODWORD(v10) = 0;
        v5 = FsRtlpOplockBreakByCacheFlags(v6, (__int64)v17, 0LL, a3, (__int64)v10, 20480, 0LL, 0LL, 0LL, 0LL, v11, 0LL);
        v14[1] = v5;
      }
    }
    if ( v11[0] )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 152));
  }
  return v5;
}
