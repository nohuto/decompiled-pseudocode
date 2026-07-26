/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x140161C10
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x140161530 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x140137910 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x14014B470 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014B4F8 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x140161630 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

struct NDIS_BIND_FILTER_DRIVER **__fastcall ndisBindGetFilterDriver(
        struct NDIS_BIND_FILTER_DRIVER **a1,
        _GUID *a2,
        char a3)
{
  __int64 v3; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  struct NDIS_BIND_FILTER_DRIVER *v13; // rbx
  struct NDIS_BIND_FILTER_DRIVER *v14; // rcx
  __int64 v15; // rdi
  KLockHolder v16; // [rsp+20h] [rbp-48h] BYREF
  struct NDIS_BIND_FILTER_DRIVER *v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = qword_14011F6D8;
  v16.m_Lock = (KPushLockBase *)qword_14011F6D8;
  KeEnterCriticalRegion();
  v16.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v7 = qword_14011F6D8;
  v8 = 0LL;
  v16.m_State = Exclusive;
  v9 = *(unsigned int *)(qword_14011F6D8 + 28);
  while ( v8 != v9 )
  {
    if ( v8 >= *(unsigned int *)(v7 + 28) )
      __fastfail(5u);
    v10 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v8);
    v17 = (struct NDIS_BIND_FILTER_DRIVER *)v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 64));
    v11 = *(_QWORD *)(v10 + 24) - *(_QWORD *)&a2->Data1;
    if ( !v11 )
      v11 = *(_QWORD *)(v10 + 32) - *(_QWORD *)a2->Data4;
    if ( !v11 )
    {
      if ( !a3 || ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)v10) )
      {
        v17 = 0LL;
        *a1 = (struct NDIS_BIND_FILTER_DRIVER *)v10;
LABEL_11:
        KRef<NDIS_BIND_FILTER_DRIVER>::unref((__int64 *)&v17);
        ExReleasePushLockExclusiveEx(v3, 0LL);
        KeLeaveCriticalRegion();
        return a1;
      }
      goto LABEL_22;
    }
    KRef<NDIS_BIND_FILTER_DRIVER>::unref((__int64 *)&v17);
    ++v8;
  }
  v17 = 0LL;
  if ( !KRef<NDIS_BIND_FILTER_DRIVER>::allocate<>(&v17) )
  {
    *a1 = 0LL;
    goto LABEL_11;
  }
  v13 = v17;
  v14 = v17;
  v17->Guid = *a2;
  if ( ndisBindReadFilterDriverConfiguration(v14) )
  {
    v15 = qword_14011F6D8;
    if ( Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::grow(
           (unsigned int *)(qword_14011F6D8 + 24),
           (unsigned int)(*(_DWORD *)(qword_14011F6D8 + 28) + 1)) )
    {
      *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8LL * *(unsigned int *)(v15 + 28)) = v13;
      _InterlockedIncrement((volatile signed __int32 *)&v13[1].DriverReady);
      ++*(_DWORD *)(v15 + 28);
      v17 = 0LL;
      *a1 = v13;
      goto LABEL_23;
    }
  }
LABEL_22:
  *a1 = 0LL;
LABEL_23:
  KRef<NDIS_BIND_FILTER_DRIVER>::unref((__int64 *)&v17);
  KLockHolder::~KLockHolder(&v16);
  return a1;
}
