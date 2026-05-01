/*
 * XREFs of ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1804DD688
 * Callers:
 *     ?ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804DD530 (-ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804DDF64 (-RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804B1D3C (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ?Remove@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@VElementCompare@ElementHelpers@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x1804C2C20 (-Remove@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPol.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CCA78 (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x1804CCCF4 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804DC9E8 (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CVirtualDesktopContainerElement::ItemAddedInternal(
        CVirtualDesktopContainerElement *this,
        struct IObservableItem *a2)
{
  char v4; // r15
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, struct IObservableItem *, _QWORD, GUID *, ElementHelpers **); // rbx
  int v7; // eax
  int v8; // eax
  void *v9; // r8
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  int v14; // eax
  struct IMultitaskingViewElement *v15; // rdx
  __int64 *RootElement; // rax
  bool v17; // bl
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IUnknown *v21; // [rsp+80h] [rbp+30h] BYREF
  ElementHelpers *v22; // [rsp+90h] [rbp+40h] BYREF
  ElementHelpers *v23; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  LODWORD(v21) = 0;
  v21 = (struct IUnknown *)*((_QWORD *)this + 30);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, (__int64 *)&v21, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  v22 = 0LL;
  v5 = *((_QWORD *)this + 34);
  v6 = *(__int64 (__fastcall **)(__int64, struct IObservableItem *, _QWORD, GUID *, ElementHelpers **))(*(_QWORD *)v5 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  v7 = v6(v5, a2, *((_QWORD *)this + 30), &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v22);
  if ( v7 >= 0 )
  {
    v18 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v22,
           &v18);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 32LL))(v18, (char *)this + 248);
      v23 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      v10 = 0;
      v11 = *((_QWORD *)this + 100);
      if ( v11 != *((_QWORD *)this + 102)
        || (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)this + 792,
                    v11 + 1,
                    v9),
            v10 >= 0) )
      {
        v12 = *((_QWORD *)this + 100);
        *((_QWORD *)this + 100) = v12 + 1;
        v13 = (_QWORD *)(*((_QWORD *)this + 99) + 8 * v12);
        if ( v13 )
          Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v13, &v23);
      }
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x55,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      if ( v10 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, ElementHelpers *))(*(_QWORD *)this + 64LL))(
                this,
                v22);
        if ( v14 >= 0 )
        {
          LOBYTE(v21) = *((_QWORD *)this + 100) == 1LL;
          ObservableProperty<bool>::operator=((__int64)this + 832, &v21);
          v17 = 0;
          if ( *((_BYTE *)this + 825) )
          {
            RootElement = ElementHelpers::GetRootElement((__int64 *)&v23, (__int64)this);
            v4 = 1;
            LODWORD(v21) = 1;
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*RootElement + 304LL))(*RootElement) )
              v17 = 1;
          }
          if ( (v4 & 1) != 0 )
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
          if ( v17 )
            ElementHelpers::SetFocusToElement(v22, v15);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x57,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
            (const char *)(unsigned int)v14);
          v21 = (struct IUnknown *)v22;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
          CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>,ElementHelpers::ElementCompare,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>>::Remove(
            (_QWORD *)this + 99,
            &v21);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
}
