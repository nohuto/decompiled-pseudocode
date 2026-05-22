/*
 * XREFs of ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x1800D6CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D2924 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800D30B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D3DB0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$shared_ptr@VGestureHandler@@@std@@@std@.c)
 *     ?TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800D8B08 (-TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceRemoved(SpatialRimDeviceCollection *this, unsigned int a2)
{
  __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  RawInputProvidersTracing *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (char *)this + 2912,
    &v17,
    &v18);
  v4 = v17;
  if ( v17 == *((_QWORD *)this + 365) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x368,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 64LL))(
           *((_QWORD *)this + 2),
           *(_QWORD *)(v17 + 24));
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)(v4 + 16));
      v9 = *((_QWORD *)this + 367);
      v10 = 2 * (*((_QWORD *)this + 370) & v8);
      if ( *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 370) & v8) + 8) == v4 )
      {
        if ( *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 370) & v8)) == v4 )
        {
          v11 = *((_QWORD *)this + 365);
          *(_QWORD *)(v9 + 8 * v10) = v11;
        }
        else
        {
          v11 = *(_QWORD *)(v4 + 8);
        }
        *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
      }
      else if ( *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 370) & v8)) == v4 )
      {
        *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 370) & v8)) = *(_QWORD *)v4;
      }
      v12 = *(_QWORD *)v4;
      --*((_QWORD *)this + 366);
      **(_QWORD **)(v4 + 8) = v12;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v4 + 8);
      std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>,void *>>>(
        v12,
        (_QWORD *)v4);
      if ( RawInputProvidersTracing::IsEnabled(v13) )
      {
        wil::details::static_lazy<RawInputProvidersTracing>::get(
          v14,
          (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
        RawInputProvidersTracing::TelemetryDdiDevice_Removed_(v15, a2);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
