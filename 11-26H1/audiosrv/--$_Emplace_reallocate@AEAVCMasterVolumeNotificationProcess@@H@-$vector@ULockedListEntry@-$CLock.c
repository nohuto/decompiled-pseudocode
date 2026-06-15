/*
 * XREFs of ??$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAU23@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18011A50C
 * Callers:
 *     ??$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18011A69C (--$emplace_back@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x18007C7A0 (-_Calculate_growth@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAA@XZ @ 0x1800F9A40 (--1_Reallocation_guard@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@.c)
 *     ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x180109B40 (-_Change_array@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$alloc.c)
 */

_DWORD *__fastcall std::vector<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::LockedListEntry>>::_Emplace_reallocate<CMasterVolumeNotificationProcess &,int>(
        __int64 **a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int64 size_of; // rax
  _QWORD *v13; // rax
  int v14; // edx
  __int64 v15; // r10
  int v16; // ecx
  _DWORD *v17; // rsi
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  __int64 *v20; // r9
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rax
  _QWORD v27[3]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v28; // [rsp+38h] [rbp-30h]
  _DWORD *v29; // [rsp+40h] [rbp-28h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  v9 = a2;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v10 = v7 + 1;
  v11 = std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<8>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a4;
  v15 = (__int64)v13;
  v16 = *a3;
  v27[0] = a1;
  v17 = &v13[v6];
  v27[2] = v11;
  v17[1] = v14;
  v18 = v17 + 2;
  *v17 = v16;
  v19 = v13;
  v20 = a1[1];
  v21 = *a1;
  v29 = v17 + 2;
  v28 = v17;
  if ( v9 == v20 )
  {
    while ( v21 != v20 )
    {
      v22 = *v21++;
      *v19++ = v22;
    }
  }
  else
  {
    while ( v21 != v9 )
    {
      v23 = *v21++;
      *v19++ = v23;
    }
    v24 = a1[1];
    v28 = (_DWORD *)v15;
    while ( v9 != v24 )
    {
      v25 = *v9++;
      *v18++ = v25;
    }
  }
  v27[1] = 0LL;
  std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
    (__int64)a1,
    v15,
    v10,
    v11);
  std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Reallocation_guard::~_Reallocation_guard((__int64)v27);
  return v17;
}
