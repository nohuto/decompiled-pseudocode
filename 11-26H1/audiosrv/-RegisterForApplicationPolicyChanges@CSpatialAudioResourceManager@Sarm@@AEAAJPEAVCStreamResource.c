/*
 * XREFs of ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180126260
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180124C70 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180049230 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x1800AC908 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?FindAppSubscription@CSpatialAudioResourceManager@Sarm@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@@std@@K@Z @ 0x1800AF430 (-FindAppSubscription@CSpatialAudioResourceManager@Sarm@@AEAA-AV-$_Vector_iterator@V-$_Vector_val.c)
 *     ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x180109894 (--$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector.c)
 *     ?LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x180128DA4 (-LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2)
{
  unsigned int v4; // r14d
  CSpatialAudioResourceManagerTraceLogger *v5; // rcx
  Sarm::CSpatialAudioResourceManager *v6; // rax
  Sarm::CSpatialAudioResourceManager *v7; // rbx
  unsigned int v8; // r9d
  const char *v9; // r9
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  Sarm::CSpatialAudioResourceManager *v12; // rcx
  int v13; // ebx
  __int64 result; // rax
  __int64 v15; // r8
  const char *v16; // r9
  int Process; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  _QWORD *v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Sarm::CSpatialAudioResourceManager *v23; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioProcess *v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a2 + 13);
  Sarm::CSpatialAudioResourceManager::FindAppSubscription((__int64)this, &v23, v4);
  v6 = (Sarm::CSpatialAudioResourceManager *)*((_QWORD *)v5 + 35);
  v7 = v23;
  if ( v23 == v6 )
    v8 = 0;
  else
    v8 = *((_DWORD *)v23 + 1);
  CSpatialAudioResourceManagerTraceLogger::LogSubscribe(v5, v4, v23 != v6, v8);
  try
  {
    if ( *((Sarm::CSpatialAudioResourceManager **)this + 35) != v7 )
    {
      ++*((_DWORD *)v7 + 1);
      return 0LL;
    }
    v23 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v23 = this;
      (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)this + 8LL))(this);
      v13 = 0;
      goto LABEL_15;
    }
    if ( InlineIsEqualGUID(v10, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
    {
      v23 = this;
      v12 = this;
    }
    else
    {
      if ( !InlineIsEqualGUID(v11, v11) )
      {
        v13 = -2147467262;
        goto LABEL_15;
      }
      v12 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
      v23 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
    }
    v13 = 0;
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v12 + 8LL))(v12);
LABEL_15:
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B2,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
      return (unsigned int)v13;
    }
    v24 = 0LL;
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v24);
    Process = Sarm::CStreamResource::GetProcess(a2, &v24, v15, v16);
    v18 = Process;
    if ( Process < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B5,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)Process);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
      return v18;
    }
    v19 = (*(__int64 (__fastcall **)(struct IAudioProcess *, Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v24
                                                                                                  + 544LL))(
            v24,
            v23);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B7,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v19);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
      return v20;
    }
    v25 = v4 | 0x100000000LL;
    v21 = (_QWORD *)*((_QWORD *)this + 35);
    if ( v21 == *((_QWORD **)this + 36) )
    {
      std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        (void **)this + 34,
        (__int64)v21,
        &v25);
    }
    else
    {
      *v21 = v25;
      *((_QWORD *)this + 35) += 8LL;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
    return 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C4,
                           (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                           v9);
  }
  return result;
}
