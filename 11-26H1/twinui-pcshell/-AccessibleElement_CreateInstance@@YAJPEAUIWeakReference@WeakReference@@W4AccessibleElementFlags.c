/*
 * XREFs of ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1804D098C
 * Callers:
 *     ?v_InitAccessibleObject@CSwitchItemElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C11D0 (-v_InitAccessibleObject@CSwitchItemElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PE.c)
 *     ?v_InitAccessibleObject@CMultitaskingViewElementBase@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C3FC0 (-v_InitAccessibleObject@CMultitaskingViewElementBase@@MEAAJPEAUIWeakReference@WeakReference@@AEB.c)
 *     ?v_InitAccessibleObject@CSwitchItemGrid@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804C7F00 (-v_InitAccessibleObject@CSwitchItemGrid@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPE.c)
 *     ?v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804CBBB0 (-v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AE.c)
 *     ?v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D0300 (-v_InitAccessibleObject@CGlyphButtonElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@P.c)
 *     ?v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D4020 (-v_InitAccessibleObject@SwitchItemThumbnailElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_.c)
 *     ?v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D9C60 (-v_InitAccessibleObject@CScrollViewer@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX.c)
 *     ?v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DA160 (-v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@P.c)
 *     ?v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DE510 (-v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x1804AF908 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x1804D05F0 (--$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4Accessible.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIRawElementProviderSimple2@@UIRawElementProviderSimple@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@WRL@Microsoft@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGridProvider@@UIGridItemProvider@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804D0B30 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@U-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElement_CreateInstance(__int64 a1, int a2, int a3, const struct _GUID *a4, _QWORD *a5)
{
  _QWORD *v6; // rsi
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r9
  int CanCastTo; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+48h] [rbp+10h] BYREF
  int v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v6 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&a5);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<AccessibleElement,AccessibleElement,WeakReference::IWeakReference * &,enum AccessibleElementFlags &,long &>(
         (__int64 *)&a5,
         &v15,
         &v16,
         &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 802LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)v9);
    goto LABEL_11;
  }
  *v6 = 0LL;
  if ( InlineIsEqualGUID(a4, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v6 = v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v8 = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IRawElementProviderSimple2,IRawElementProviderSimple,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IGridProvider,IGridItemProvider>>::CanCastTo(
                  v11,
                  a4,
                  v6);
    v8 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v8 = CanCastTo;
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    }
  }
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 803LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&a5);
  return (unsigned int)v8;
}
