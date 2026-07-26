/*
 * XREFs of ?Make@?$ObjectTriageData@X@@SAJPEAXPEBU?$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z @ 0x14009AD2C
 * Callers:
 *     ?ndisInitializeGlobalTriageData@@YAXXZ @ 0x14009AF20 (-ndisInitializeGlobalTriageData@@YAXXZ.c)
 * Callees:
 *     ??$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA?AV?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@K_K@Z @ 0x140001964 (--$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA-AV-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@.c)
 *     ??4?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400931A0 (--4-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@Q.c)
 *     ?reset@?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@QEAAXXZ @ 0x140094AF0 (-reset@-$unique_any_array_ptr@U-$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollect.c)
 *     ?reset@?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAXPEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x140094B2C (-reset@-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wist.c)
 *     ?reset@?$unique_ptr@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U?$KFreePoolNP@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@@@wistd@@QEAAXPEAV?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@Z @ 0x140094B58 (-reset@-$unique_ptr@V-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U-$KFreePoolNP@V-$ObjectTriageDat.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@X@@CAJPEBU?$TriageDataCollector@X@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@X@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@X@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x14009AC38 (-DuplicateCollectorsArray@-$ObjectTriageData@X@@CAJPEBU-$TriageDataCollector@X@@_KAEAV-$unique_a.c)
 *     ?Register@TriageData@@IEAAJXZ @ 0x1400E7C48 (-Register@TriageData@@IEAAJXZ.c)
 */

__int64 ObjectTriageData<void>::Make(void *a1, _DWORD *a2, ...)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // rcx
  _DWORD *v4; // r8
  unsigned int v5; // edi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  ULONG v9; // edi
  __int64 *SizedPoolPtr; // rax
  PKTRIAGE_DUMP_DATA_ARRAY v11; // rbx
  NTSTATUS v12; // eax
  __int64 Pool2; // rax
  struct TriageData *v14; // rbx
  void *v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h]
  void *v18; // [rsp+50h] [rbp+20h] BYREF
  PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray; // [rsp+60h] [rbp+30h] BYREF
  va_list KtriageDumpDataArraya; // [rsp+60h] [rbp+30h]
  TriageData *v21; // [rsp+68h] [rbp+38h] BYREF
  va_list va1; // [rsp+68h] [rbp+38h]
  va_list va2; // [rsp+70h] [rbp+40h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(KtriageDumpDataArraya, a2);
  KtriageDumpDataArray = va_arg(va1, PKTRIAGE_DUMP_DATA_ARRAY);
  va_copy(va2, va1);
  v21 = va_arg(va2, TriageData *);
  v18 = a1;
  ndisGlobalTriageData = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v16 = 0LL;
  v2 = 0;
  v17 = 0LL;
  v3 = 0LL;
  KtriageDumpDataArray = 0LL;
  v4 = a2;
  v21 = 0LL;
  do
  {
    v5 = v2 + *v4;
    if ( v5 < v2 )
      goto LABEL_15;
    ++v3;
    v4 += 4;
    v2 = v5;
  }
  while ( v3 < 9 );
  v7 = ObjectTriageData<void>::DuplicateCollectorsArray(a2, (size_t)a2, &v16);
  if ( v7 )
    goto LABEL_16;
  v8 = 16LL * v5;
  if ( v8 > 0xFFFFFFFF || (v9 = v8 + 48, (int)v8 + 48 < (unsigned int)v8) )
  {
LABEL_15:
    v7 = -1073741675;
  }
  else
  {
    SizedPoolPtr = MakeSizedPoolPtrNP<_KTRIAGE_DUMP_DATA_ARRAY>(&v18, v6, v9);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::operator=(
      (__int64)KtriageDumpDataArraya,
      SizedPoolPtr);
    wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(&v18, 0LL);
    v11 = KtriageDumpDataArray;
    if ( KtriageDumpDataArray )
    {
      v12 = KeInitializeTriageDumpDataArray(KtriageDumpDataArray, v9);
      if ( v12 )
      {
LABEL_10:
        v7 = v12;
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(64LL, 112LL, 1918133326LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = v11;
        KtriageDumpDataArray = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_OWORD *)(Pool2 + 48) = 0LL;
        *(_BYTE *)(Pool2 + 64) = 0;
        *(_QWORD *)(Pool2 + 72) = Pool2;
        *(_QWORD *)(Pool2 + 80) = ObjectTriageData<void>::Callback;
        *(_QWORD *)Pool2 = &ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::`vftable';
        *(_QWORD *)(Pool2 + 88) = v16;
        *(_QWORD *)(Pool2 + 96) = v17;
        *(_BYTE *)(Pool2 + 60) = 0;
        v16 = 0LL;
        v17 = 0LL;
        *(_QWORD *)(Pool2 + 104) = 0LL;
        wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
          (TriageData **)va1,
          (TriageData *)Pool2);
        v14 = v21;
        v12 = TriageData::Register(v21);
        if ( !v12 )
        {
          v21 = 0LL;
          ndisGlobalTriageData = v14;
          wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
            (TriageData **)va1,
            0LL);
          wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
            (void **)KtriageDumpDataArraya,
            0LL);
          wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v16);
          return 0LL;
        }
        goto LABEL_10;
      }
    }
    v7 = -1073741670;
  }
LABEL_16:
  wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
    (TriageData **)va1,
    0LL);
  wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
    (void **)KtriageDumpDataArraya,
    0LL);
  wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset((__int64)&v16);
  return v7;
}
