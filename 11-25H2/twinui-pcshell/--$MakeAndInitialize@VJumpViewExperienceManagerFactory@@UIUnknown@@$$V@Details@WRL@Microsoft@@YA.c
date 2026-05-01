/*
 * XREFs of ??$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802A61E8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022E5B0 (-CreateInstance@-$SimpleClassFactory@VJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E8C40 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFt.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180211510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExper.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JumpViewExperienceManagerFactory,IUnknown,>(__int64 *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  int CanCastTo; // edi
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  _DWORD *v9; // r9
  volatile int *v10; // rdx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  v12 = v2;
  if ( v2 )
  {
    v5 = v2 + 2;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 2));
    *(_DWORD *)(v3 + 52) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::`vftable';
    v6 = (_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::`vftable'{for `ICompositeExperienceManagerFactory'};
    *v5 = &JumpViewExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &JumpViewExperienceManagerFactory::`vftable';
    *v6 = &JumpViewExperienceManagerFactory::`vftable'{for `ICompositeExperienceManagerFactory'};
    *v5 = &JumpViewExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v12 = 0LL;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      CanCastTo = 0;
      goto LABEL_14;
    }
    if ( InlineIsEqualGUID(v7, &GUID_18368aef_0ed2_4f7a_94a5_20e6988c5224) )
    {
      *a1 = v3;
    }
    else
    {
      if ( !InlineIsEqualGUID(v8, &GUID_6114579d_0b09_4fb0_8b9d_a7e30b3fcde8) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::CanCastTo(
                      v3 + 16,
                      v9,
                      a1);
        if ( CanCastTo < 0 )
        {
LABEL_14:
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::Release(
            v3,
            v10);
          goto LABEL_15;
        }
LABEL_12:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
        goto LABEL_14;
      }
      *a1 = (__int64)v6;
    }
    CanCastTo = 0;
    goto LABEL_12;
  }
  CanCastTo = -2147024882;
LABEL_15:
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return (unsigned int)CanCastTo;
}
