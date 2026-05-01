/*
 * XREFs of ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C20D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029D9B8 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029D9F8 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x1804AD284 (-SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z.c)
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804BD5B0 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804C1DE0 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SwitchItemThumbnailElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  int v7; // ecx
  unsigned __int64 *v8; // r14
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, unsigned __int64 *, _QWORD, GUID *, __int64); // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  MultitaskingViewTelemetry *v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20[2]; // [rsp+68h] [rbp-18h] BYREF

  v20[0] = *(_QWORD *)(a1 + 240);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, v20, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v20);
  CShrinkButtonElement::v_LayoutChildren(a1, a2, a3);
  v6 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  v7 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v18 = __PAIR64__(v6, v7);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v8 = (unsigned __int64 *)(a1 + 612);
    if ( !*(_QWORD *)(a1 + 592) || v7 != *(_DWORD *)v8 || v6 != *(_DWORD *)(a1 + 616) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 592));
      v9 = *(_QWORD *)(a1 + 240);
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, unsigned __int64 *, _QWORD, GUID *, __int64))(*(_QWORD *)v9 + 64LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 592));
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 576) + 40LL))(*(_QWORD *)(a1 + 576));
      v13 = v10(
              v9,
              *(_QWORD *)(a1 + 248),
              *v11,
              0x40000000LL,
              &v18,
              0LL,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              a1 + 592);
      if ( v13 >= 0 )
      {
        *v8 = v18;
        SwitchItemThumbnailElement::UpdateThumbnailBorder((SwitchItemThumbnailElement *)a1);
      }
      else if ( MultitaskingViewTelemetry::IsEnabled(v12) )
      {
        wil::details::static_lazy<MultitaskingViewTelemetry>::get(
          v14,
          (void (__cdecl *)())_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        MultitaskingViewTelemetry::SwitchItemLoadError_(v15, v13);
      }
    }
  }
  v16 = *(__int64 **)(a1 + 592);
  if ( v16 )
  {
    v17 = *v16;
    v20[0] = 0LL;
    v20[1] = v18;
    (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v17 + 24))(v16, v20, 0LL, 0LL);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
}
