/*
 * XREFs of ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800A9EDC
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18005CDC4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180049230 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018 (--$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x1800AA078 (-LogUnsubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x1800AC908 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2)
{
  __int64 *v3; // rdi
  unsigned int v4; // edx
  unsigned int *v5; // rax
  unsigned int *i; // rbx
  unsigned int *v7; // rsi
  bool v8; // r8
  unsigned int v9; // r9d
  __int64 *v11; // rbx
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // rcx
  int v14; // esi
  int v15; // eax
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioProcess *v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+48h] [rbp+10h] BYREF

  v3 = (__int64 *)this;
  v4 = *((_DWORD *)a2 + 13);
  v5 = (unsigned int *)*((_QWORD *)this + 35);
  for ( i = (unsigned int *)*((_QWORD *)this + 34); i != v5 && *i != v4; i += 2 )
    ;
  v7 = i + 1;
  if ( i == v5 )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    v8 = 1;
    v9 = *v7;
  }
  CSpatialAudioResourceManagerTraceLogger::LogUnsubscribe(this, v4, v8, v9);
  if ( i != (unsigned int *)v3[35] && (*v7)-- == 1 )
  {
    std::_Copy_memmove<_GUID *,_GUID *>(i + 2, v3[35], i);
    v3[35] -= 8LL;
    v11 = 0LL;
    v19 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v11 = v3;
      v19 = v3;
      (*(void (__fastcall **)(__int64 *))(*v3 + 8))(v3);
      v14 = 0;
    }
    else if ( InlineIsEqualGUID(v12, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) || (++v3, InlineIsEqualGUID(v13, v13)) )
    {
      v11 = v3;
      v14 = 0;
      v19 = v3;
      (*(void (__fastcall **)(__int64 *))(*v3 + 8))(v3);
    }
    else
    {
      v14 = -2147467262;
    }
    if ( v14 >= 0 )
    {
      v18 = 0LL;
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v18);
      if ( Sarm::CStreamResource::GetProcess(a2, &v18) >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *, __int64 *))(*(_QWORD *)v18 + 552LL))(v18, v11);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2E0,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v15,
            v16);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2DB,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v14,
        v16);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  }
}
