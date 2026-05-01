/*
 * XREFs of ??$Make@VCAppLayoutAnimationData@@AEAPEAUIApplicationView@@AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutAnimationData@@@12@AEAPEAUIApplicationView@@AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806A15A4
 * Callers:
 *     ?CAppLayoutAnimationData_CreateInstance@@YAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A16DC (-CAppLayoutAnimationData_CreateInstance@@YAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<CAppLayoutAnimationData,IApplicationView * &,enum APP_LAYOUT_ANIMATION_TYPE &>(
        _QWORD *a1,
        __int64 *a2,
        int *a3)
{
  void *v6; // rax
  _QWORD *v7; // rbx
  int v8; // esi
  __int64 v9; // rbp
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  v7 = v6;
  if ( v6 )
  {
    v8 = *a3;
    v9 = *a2;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)v6);
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutAnimationData>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &CAppLayoutAnimationData::`vftable';
    v7[2] = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7 + 2);
    *((_DWORD *)v7 + 6) = v8;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    v11 = 0LL;
    *a1 = v7;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return a1;
}
