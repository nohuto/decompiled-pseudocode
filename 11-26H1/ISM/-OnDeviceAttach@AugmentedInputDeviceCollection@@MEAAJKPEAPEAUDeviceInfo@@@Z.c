/*
 * XREFs of ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D2970
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800D2670 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 *     ?AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z @ 0x1800D2730 (-AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z.c)
 *     ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x1800D284C (-GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D2924 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3070 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D30B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceAttach(
        AugmentedInputDeviceCollection *this,
        int a2,
        struct DeviceInfo **a3)
{
  int DeviceProductInfo; // ebx
  __int64 v7; // rdx
  struct DeviceInfo *v8; // rdi
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r13
  __int16 v11; // r15
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  RawInputProvidersTracing *v15; // rcx
  unsigned __int16 v17[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v18; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v21; // [rsp+88h] [rbp+48h] BYREF

  v18 = 0;
  v17[0] = 0;
  LOWORD(v21) = 0;
  DeviceProductInfo = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 103LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)DeviceProductInfo);
    return (unsigned int)DeviceProductInfo;
  }
  v8 = *a3;
  DeviceProductInfo = AugmentedInputDeviceCollection::GetDeviceProductInfo(
                        this,
                        a2,
                        &v18,
                        v17,
                        (unsigned __int16 *)&v21);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 107LL;
    goto LABEL_12;
  }
  v9 = v17[0];
  v10 = v18;
  v11 = v21;
  DeviceProductInfo = AugmentedInputDeviceCollection::AddDeviceToCache(this, a2, v18, v17[0], v21);
  if ( DeviceProductInfo < 0 )
  {
    v7 = 108LL;
    goto LABEL_12;
  }
  v21 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (char *)this + 2760,
    &v19,
    &v21);
  if ( v19 == *((_QWORD *)this + 345) )
  {
    DeviceProductInfo = -2147467259;
    v7 = 109LL;
    goto LABEL_12;
  }
  v13 = *(_DWORD *)(v19 + 32);
  *((_WORD *)v8 + 303) = 0;
  *((_DWORD *)v8 + 149) = v13;
  *((_WORD *)v8 + 300) = v10;
  *((_WORD *)v8 + 301) = v9;
  *((_WORD *)v8 + 302) = v11;
  if ( RawInputProvidersTracing::IsEnabled(v12) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v14,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceAttached_(v15, v13, *((_BYTE *)this + 2776));
  }
  return 0LL;
}
