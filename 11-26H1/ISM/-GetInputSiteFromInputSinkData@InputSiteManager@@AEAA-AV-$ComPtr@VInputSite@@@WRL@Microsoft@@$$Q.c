/*
 * XREFs of ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180017010
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180013B4C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18002BBE0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180013B00 (--1-$_Deleted_copy_assign@U-$_Variant_destroy_layer_@PEAXV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180013B28 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 *     ?GetInputSiteFromIds@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$span@UInputSiteId@@$0?0@gsl@@@Z @ 0x180016F50 (-GetInputSiteFromIds@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$span@UInpu.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18002AE40 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x18002CFB8 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18002D8CC (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180070180 (--0LegacyInputSinkData@@QEAA@$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_poli.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180099060 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F4C34 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x180133324 (-GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall InputSiteManager::GetInputSiteFromInputSinkData(_QWORD *a1, _QWORD *a2, _BYTE *a3, char a4)
{
  __m128i *i; // r14
  __int64 v9; // rdx
  _BYTE *v10; // rdi
  char v11; // cl
  bool v12; // al
  __int128 v13; // xmm1
  __int64 v14; // rax
  void *v15; // rdi
  char **v16; // rdx
  char *v17; // rcx
  __int64 v18; // rdi
  __int64 DuplicatedInputSinkHandle; // rax
  __int64 v21; // rax
  char *v22; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+28h] [rbp-D8h]
  HANDLE TargetHandle[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+48h] [rbp-B8h] BYREF
  char v27; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v28[3]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[432]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v30; // [rsp+228h] [rbp+128h] BYREF
  __int128 v31; // [rsp+238h] [rbp+138h]
  __int128 v32; // [rsp+248h] [rbp+148h]
  __int64 v33; // [rsp+258h] [rbp+158h]
  _OWORD v34[4]; // [rsp+260h] [rbp+160h] BYREF
  int v35; // [rsp+2A0h] [rbp+1A0h] BYREF
  char *v36; // [rsp+2A8h] [rbp+1A8h]
  int v37; // [rsp+2B0h] [rbp+1B0h]
  __int64 v38; // [rsp+2B8h] [rbp+1B8h]
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v28[2] = a2;
  v23 = 0;
  v35 = 0;
  if ( !a3[36] )
  {
    v22 = 0LL;
    if ( a3[8] > 1u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputSinkLuid(*(_QWORD *)a3, &v22);
    *(_QWORD *)(a3 + 28) = v22;
    if ( !a3[36] )
      a3[36] = 1;
  }
  v22 = *(char **)(a3 + 28);
  v36 = v22;
  v37 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  for ( i = &si128; i != (__m128i *)&v27; i = (__m128i *)((char *)i + 4) )
  {
    v9 = i->m128i_u32[0];
    switch ( (_DWORD)v9 )
    {
      case 1:
        v10 = a3 + 40;
LABEL_9:
        v11 = v10[56];
        v12 = v11 == 0;
        goto LABEL_10;
      case 2:
        v10 = a3 + 104;
        goto LABEL_9;
      case 3:
        v10 = a3 + 168;
        goto LABEL_9;
      case 4:
        v10 = a3 + 232;
        goto LABEL_9;
    }
    if ( (_DWORD)v9 != 5 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        v22);
    v10 = a3 + 296;
    v12 = 1;
    v11 = a3[352];
LABEL_10:
    if ( v12 )
    {
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      memset(v34, 0, sizeof(v34));
      if ( a3[8] > 1u )
        std::_Throw_bad_variant_access();
      NtQueryCompositionInputQueueAndTransform(*(_QWORD *)a3, v9, &v30, v34);
      v13 = v31;
      *(_OWORD *)v10 = v30;
      *((_OWORD *)v10 + 1) = v13;
      *(_QWORD *)&v13 = v33;
      *((_OWORD *)v10 + 2) = v32;
      *((_QWORD *)v10 + 6) = v13;
      if ( !v10[56] )
        v10[56] = 1;
    }
    else if ( !v11 )
    {
      std::_Throw_bad_optional_access();
    }
    if ( *(_DWORD *)v10 == 2 || *(_DWORD *)v10 == 3 )
    {
      v14 = *((_QWORD *)v10 + 1);
      goto LABEL_16;
    }
  }
  LODWORD(v14) = 0;
LABEL_16:
  v38 = (unsigned int)v14;
  v15 = (void *)(((unsigned int)v14 != 0LL) + 1LL);
  TargetHandle[0] = v15;
  TargetHandle[1] = &v35;
  InputSiteManager::GetInputSiteFromIds((__int64)a1, a2, TargetHandle);
  v23 = 1;
  if ( !*a2 && a4 )
  {
    v28[0] = v15;
    v28[1] = &v35;
    v25 = 0;
    TargetHandle[0] = a1;
    Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
      &v22,
      v28,
      &v25,
      TargetHandle);
    v23 = 5;
    TargetHandle[0] = v22;
    v16 = (char **)a1[8];
    if ( v16 == (char **)a1[9] )
    {
      std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(a1 + 7, v16, TargetHandle);
    }
    else
    {
      *v16 = v22;
      a1[8] += 8LL;
    }
    Microsoft::WRL::ComPtr<InputSite>::operator=(a2, &v22);
    v23 = 1;
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v18 = *a2;
  if ( *a2 && !*(_BYTE *)(v18 + 480) )
  {
    if ( a3[8] == 1 )
    {
      InputSite::SetLegacyInputSinkData(*a2, a3);
    }
    else
    {
      DuplicatedInputSinkHandle = LegacyInputSinkData::GetDuplicatedInputSinkHandle(
                                    (LegacyInputSinkData *)a3,
                                    TargetHandle);
      v21 = LegacyInputSinkData::LegacyInputSinkData(v29, DuplicatedInputSinkHandle);
      InputSite::SetLegacyInputSinkData(v18, v21);
      std::_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>((__int64)v29);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>((__int64 *)TargetHandle);
    }
  }
  return a2;
}
