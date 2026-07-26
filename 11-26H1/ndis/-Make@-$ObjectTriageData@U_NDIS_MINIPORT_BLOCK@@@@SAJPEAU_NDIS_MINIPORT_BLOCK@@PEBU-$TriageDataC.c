/*
 * XREFs of ?Make@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140093E88
 * Callers:
 *     ndisRegisterMiniportTriageData @ 0x14009480C (ndisRegisterMiniportTriageData.c)
 * Callees:
 *     ??$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA?AV?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@K_K@Z @ 0x140001964 (--$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA-AV-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@.c)
 *     ??4?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400931A0 (--4-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@Q.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140093C2C (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAJPEBU-$TriageDataCollect.c)
 *     ?reset@?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@QEAAXXZ @ 0x140094AF0 (-reset@-$unique_any_array_ptr@U-$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollect.c)
 *     ?reset@?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAXPEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x140094B2C (-reset@-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wist.c)
 *     ?reset@?$unique_ptr@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U?$KFreePoolNP@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@@@wistd@@QEAAXPEAV?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@Z @ 0x140094B58 (-reset@-$unique_ptr@V-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U-$KFreePoolNP@V-$ObjectTriageDat.c)
 *     ?Register@TriageData@@IEAAJXZ @ 0x1400E7C48 (-Register@TriageData@@IEAAJXZ.c)
 */

__int64 __fastcall ObjectTriageData<_NDIS_MINIPORT_BLOCK>::Make(
        __int64 a1,
        _DWORD *a2,
        TriageData *a3,
        TriageData **a4)
{
  unsigned int v6; // r9d
  unsigned __int64 v7; // rcx
  _DWORD *v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  ULONG v13; // edi
  __int64 *SizedPoolPtr; // rax
  PKTRIAGE_DUMP_DATA_ARRAY v15; // rbx
  NTSTATUS v16; // eax
  __int64 Pool2; // rax
  TriageData *v18; // rbx
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  void *v21; // [rsp+28h] [rbp-18h] BYREF
  __int64 v22; // [rsp+30h] [rbp-10h]
  TriageData *v23; // [rsp+70h] [rbp+30h] BYREF
  PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray; // [rsp+78h] [rbp+38h] BYREF

  v23 = a3;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v6 = 0;
  v21 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  KtriageDumpDataArray = 0LL;
  v8 = a2;
  v23 = 0LL;
  do
  {
    v9 = v6 + *v8;
    if ( v9 < v6 )
      goto LABEL_16;
    ++v7;
    v8 += 4;
    v6 = v9;
  }
  while ( v7 < 0x23 );
  v11 = ObjectTriageData<_NDIS_MINIPORT_BLOCK>::DuplicateCollectorsArray(a2, (size_t)a2, &v21);
  if ( v11 )
    goto LABEL_17;
  v12 = 16LL * v9;
  if ( v12 > 0xFFFFFFFF || (v13 = v12 + 48, (int)v12 + 48 < (unsigned int)v12) )
  {
LABEL_16:
    v11 = -1073741675;
  }
  else
  {
    SizedPoolPtr = MakeSizedPoolPtrNP<_KTRIAGE_DUMP_DATA_ARRAY>(&v20, v10, v13);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::operator=(
      (__int64)&KtriageDumpDataArray,
      SizedPoolPtr);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(&v20, 0LL);
    v15 = KtriageDumpDataArray;
    if ( KtriageDumpDataArray )
    {
      v16 = KeInitializeTriageDumpDataArray(KtriageDumpDataArray, v13);
      if ( v16 )
      {
LABEL_11:
        v11 = v16;
        goto LABEL_17;
      }
      Pool2 = ExAllocatePool2(64LL, 112LL, 1918133326LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = v15;
        KtriageDumpDataArray = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_OWORD *)(Pool2 + 48) = 0LL;
        *(_BYTE *)(Pool2 + 64) = 0;
        *(_QWORD *)(Pool2 + 72) = Pool2;
        *(_QWORD *)(Pool2 + 80) = ObjectTriageData<_NDIS_MINIPORT_BLOCK>::Callback;
        *(_QWORD *)Pool2 = &ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::`vftable';
        *(_QWORD *)(Pool2 + 88) = v21;
        *(_QWORD *)(Pool2 + 96) = v22;
        *(_BYTE *)(Pool2 + 60) = 0;
        v21 = 0LL;
        v22 = 0LL;
        *(_QWORD *)(Pool2 + 104) = a1;
        wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(&v23);
        v18 = v23;
        v16 = TriageData::Register(v23);
        if ( !v16 )
        {
          v23 = 0LL;
          *a4 = v18;
          wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(&v23);
          wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
            &KtriageDumpDataArray,
            0LL);
          wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset(&v21);
          return 0LL;
        }
        goto LABEL_11;
      }
    }
    v11 = -1073741670;
  }
LABEL_17:
  wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(&v23);
  wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(&KtriageDumpDataArray, 0LL);
  wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset(&v21);
  return v11;
}
