/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIRawElementProviderSimple2@@UIRawElementProviderSimple@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@WRL@Microsoft@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGridProvider@@UIGridItemProvider@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804BEBC0
 * Callers:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1804BEA2C (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VAccessibleElementBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804BFA90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VAccessibl.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIInvokeProvider@@UISelectionProvider@@UISelectionItemProvider@@UIScrollProvider@@UIScrollItemProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804BEC78 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFra.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IRawElementProviderSimple2,IRawElementProviderSimple,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IGridProvider,IGridItemProvider>>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  const struct _GUID *v10; // rcx
  _QWORD *v11; // r8
  unsigned int v12; // r9d

  if ( InlineIsEqualGUID(a2, &GUID_a0a839a9_8da1_4a82_806a_8e0d44e79f56)
    || InlineIsEqualGUID(v4, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c) )
  {
    goto LABEL_3;
  }
  if ( InlineIsEqualGUID(v6, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
  {
    *v7 = v8;
    return 0LL;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>::CanCastTo(
             v8 + 8,
             a2);
  if ( (_DWORD)result == -2147467262 )
  {
    a1 += 72LL;
    if ( InlineIsEqualGUID(a2, &GUID_b17d6187_0907_464b_a168_0ef17a1572b1) )
    {
LABEL_3:
      *v5 = a1;
      return 0LL;
    }
    if ( InlineIsEqualGUID(v10, &GUID_d02541f1_fb81_4d64_ae32_f520f8a6dbd1) )
    {
      *v11 = a1 + 8;
      result = 0LL;
    }
    else
    {
      result = v12;
    }
    if ( (_DWORD)result == v12 )
      return v12;
  }
  return result;
}
