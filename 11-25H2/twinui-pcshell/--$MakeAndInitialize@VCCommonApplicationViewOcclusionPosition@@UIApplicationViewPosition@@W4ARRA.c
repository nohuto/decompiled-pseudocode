/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1804ECF2C
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1804ED064 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1804ED064.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180114950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801149C0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCC_ea_1801149C0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180114B10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewOcclusionPositi.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x18021FE4C (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1804F1938 (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
        _QWORD *a1,
        unsigned int *a2,
        __int128 *a3)
{
  void *v6; // rax
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // edi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  void *v15; // [rsp+88h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v6;
  v7 = (volatile signed __int32 *)v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>((__int64)v6);
    v14 = 0LL;
    *(_QWORD *)v7 = &CCommonApplicationViewOcclusionPositionSnapshot::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v7 + 13) = &CCommonApplicationViewOcclusionPosition::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach((volatile signed __int32 **)&v14, v7);
    v9 = (volatile signed __int32 *)v14;
    v10 = *a2;
    v15 = 0LL;
    *(_DWORD *)(v14 + 52) = 0;
    *((_OWORD *)v9 + 1) = 0LL;
    v14 = -1LL;
    *((_DWORD *)v9 + 12) = v10;
    v11 = *a3;
    *((_DWORD *)v9 + 14) = 0;
    *((_OWORD *)v9 + 2) = v11;
    *(_OWORD *)(v9 + 15) = 0LL;
    *(_OWORD *)(v9 + 19) = 0LL;
    *(_QWORD *)(v9 + 23) = 0LL;
    *((_DWORD *)v9 + 15) = 0;
    v12 = *((_OWORD *)v9 + 2);
    *(_QWORD *)(v9 + 19) = v14;
    v14 = -1LL;
    *(_QWORD *)(v9 + 17) = -1LL;
    *(_OWORD *)(v9 + 21) = v12;
    *((_DWORD *)v9 + 16) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState(v10);
    v8 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>>(
           (__int64)v9,
           &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(v9);
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
  return v8;
}
