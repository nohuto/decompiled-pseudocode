/*
 * XREFs of ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804C2D00
 * Callers:
 *     ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804C7320 (-RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804CA890 (-RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BABE8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ?Remove@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@VElementCompare@ElementHelpers@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x1804C2C20 (-Remove@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPol.c)
 *     ?_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804C3858 (-_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C39BC (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C3AB0 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x1804C3EDC (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMultitaskingViewElementBase::RemoveChild(struct IUnknown **this, struct IUnknown *a2, char a3)
{
  struct IMultitaskingViewElement *v6; // r8
  int v7; // eax
  struct IMultitaskingViewElement *v8; // r8
  unsigned int v9; // ebx
  struct IUnknownVtbl *lpVtbl; // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  ULONG (__stdcall *Release)(IUnknown *); // rbx
  HRESULT v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  UINT Dim; // eax
  struct IUnknown *v20; // [rsp+20h] [rbp-10h] BYREF
  void *ppvData; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  SAFEARRAY *psa; // [rsp+60h] [rbp+30h] BYREF
  __int64 v24; // [rsp+68h] [rbp+38h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+78h] [rbp+48h] BYREF

  v20 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  if ( ElementHelpers::IsSameElement(a2, this[21], v6) )
  {
    CMultitaskingViewElementBase::_GetFocusForRemovedChild(this, &psa, a2);
    ((void (__fastcall *)(struct IUnknown **, SAFEARRAY *))(*this)[36].lpVtbl)(this, psa);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&psa);
  }
  v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>,ElementHelpers::ElementCompare,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewElement>>>::Remove(
         this + 2,
         &v20);
  v9 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_30;
  }
  if ( ElementHelpers::IsSameElement(a2, this[16], v8) )
    CMultitaskingViewElementBase::_ResetCapture((CMultitaskingViewElementBase *)this);
  if ( UiaClientsAreListening()
    && ((unsigned __int8 (__fastcall *)(struct IUnknown **))(*this)[21].lpVtbl)(this)
    && ((unsigned __int8 (__fastcall *)(struct IUnknown *))a2->lpVtbl[7].QueryInterface)(a2)
    && ((__int64 (__fastcall *)(struct IUnknown **))(*this)[41].lpVtbl)(this) )
  {
    pProvider = 0LL;
    v24 = 0LL;
    psa = 0LL;
    lpVtbl = (*this)[47].lpVtbl;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
    v11 = ((__int64 (__fastcall *)(struct IUnknown **, GUID *, IRawElementProviderSimple **))lpVtbl)(
            this,
            &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
            &pProvider);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 111LL;
LABEL_13:
      wil::details::in1diag3::_Log_Hr(
        v12,
        (void *)v13,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v11);
LABEL_24:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
      goto LABEL_25;
    }
    Release = a2->lpVtbl[15].Release;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))Release)(
            a2,
            &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
            &v24);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 112LL;
      goto LABEL_13;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, SAFEARRAY **))(*(_QWORD *)v24 + 32LL))(v24, &psa);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 113LL;
      goto LABEL_13;
    }
    ppvData = 0LL;
    v15 = SafeArrayAccessData(psa, &ppvData);
    v16 = retaddr;
    if ( v15 >= 0 )
    {
      Dim = SafeArrayGetDim(psa);
      v15 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildRemoved, (int *)ppvData, Dim);
      v16 = retaddr;
      if ( v15 >= 0 )
      {
LABEL_23:
        SafeArrayDestroy(psa);
        goto LABEL_24;
      }
      v17 = 122LL;
    }
    else
    {
      v17 = 116LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      (void *)v17,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_23;
  }
LABEL_25:
  ((void (__fastcall *)(struct IUnknown *, _QWORD))a2->lpVtbl[1].AddRef)(a2, 0LL);
  if ( a3 )
    CMultitaskingViewElementBase::_LayoutChildren(this, 0LL, 0LL);
  if ( *((_DWORD *)this + 24) == 1 )
    CMultitaskingViewElementBase::_PointerMove(
      (CMultitaskingViewElementBase *)this,
      (const struct MultitaskingViewPointerInputArgs *)(this + 18));
  ((void (__fastcall *)(struct IUnknown **))(*this)[52].lpVtbl)(this);
  v9 = 0;
LABEL_30:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  return v9;
}
