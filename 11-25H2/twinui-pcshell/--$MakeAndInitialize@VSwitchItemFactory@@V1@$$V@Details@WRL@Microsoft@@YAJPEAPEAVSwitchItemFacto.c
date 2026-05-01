/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFactory@@@Z @ 0x18049F1E8
 * Callers:
 *     ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18049F35C (-SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18012850C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemFactory,SwitchItemFactory,>(_QWORD *a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  volatile int *v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v7 = v3;
  if ( v3 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)v3);
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemFactory>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v4 = &SwitchItemFactory::`vftable';
    v8 = v4;
    v7 = 0LL;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v4 + 12), v5);
    *a1 = v4;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v2;
}
