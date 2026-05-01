/*
 * XREFs of ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DBE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801DF3F0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802B7B00 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1802B7B00.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804DA4DC (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804DAD6C (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804DAEE8 (--4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DB13C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1804DB54C (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804DBCC8 (-StartActivity@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x1804E0900 (-MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingVie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ElementDragData::StartDrag(__int64 a1, int a2, __int64 *a3)
{
  int DragSourceLocation; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int Instance; // eax
  __int64 v10; // rdx
  __int64 **v11; // rsi
  __int64 *v12; // rcx
  __int64 v13; // rax
  const struct _GUID *v15; // [rsp+28h] [rbp-D8h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[42]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[42]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"DragSwitchItem");
  v20[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
  MultitaskingViewTelemetry::DragSwitchItem::StartActivity((MultitaskingViewTelemetry::DragSwitchItem *)v20);
  v16 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, &v16, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  *(_DWORD *)(a1 + 88) = a2;
  *(_OWORD *)(a1 + 92) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 108) = *((_DWORD *)a3 + 4);
  v18 = 0LL;
  DragSourceLocation = ElementDragData::GetDragSourceLocation((ElementDragData *)a1, &v18);
  v7 = DragSourceLocation;
  if ( DragSourceLocation >= 0 )
  {
    v8 = *a3;
    *(_QWORD *)(a1 + 64) = *a3;
    LODWORD(v16) = v8 - v18.m128i_i32[0];
    HIDWORD(v16) = *(_DWORD *)(a1 + 68) - v18.m128i_i32[1];
    *(_QWORD *)(a1 + 56) = v16;
    v17 = 0LL;
    Instance = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32),
                 &v17);
    v7 = Instance;
    if ( Instance >= 0 )
    {
      v11 = (__int64 **)(a1 + 48);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 48));
      Instance = MultitaskingViewDragVisual_CreateInstance(
                   *(struct ISwitchThumbnailFactory **)(a1 + 16),
                   *(struct IMultitaskingViewElement **)(a1 + 40),
                   *(struct IMultitaskingViewElement **)(a1 + 32),
                   (const struct Geometry::CSize *)(a1 + 56),
                   *(double *)(a1 + 120),
                   v15,
                   (void **)(a1 + 48));
      v7 = Instance;
      if ( Instance >= 0 )
      {
        v12 = *v11;
        v13 = **v11;
        v16 = *(_QWORD *)(a1 + 92);
        (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v13 + 24))(v12, &v16, 0LL, 0LL);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 216LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 232LL))(*(_QWORD *)(a1 + 40));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 432LL))(
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 24));
        ElementDragData::DragOver((ElementDragData *)a1, (const struct MultitaskingViewPointerInputArgs *)a3);
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)v21,
          (__int64)v20,
          0);
        v21[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
        MultitaskingViewTelemetry::DragSwitchItem::operator=((_QWORD *)(a1 + 184), (__int64)v21);
        MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v21);
        *(_DWORD *)(a1 + 512) = 1;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        v7 = 0;
        goto LABEL_9;
      }
      v10 = 113LL;
    }
    else
    {
      v10 = 106LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)Instance);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)DragSourceLocation);
  }
LABEL_9:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v20);
  return v7;
}
