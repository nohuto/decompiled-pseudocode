/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIPPIAllUpViewService@@UIPPIAllUpViewInvoker@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800FA2FC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIPPIAllUpViewService@@UIPPIAllUpViewInvoker@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F9B60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA1C0 (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IPPIAllUpViewService,IPPIAllUpViewInvoker>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ecx
  BOOL IsEqualGUID; // eax
  _QWORD *v5; // r8
  __int64 v6; // r10

  if ( *(_DWORD *)a2 == -62389853
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  if ( *(_DWORD *)a2 == 1845035524
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6df90204_2291_4c35_98cd_722f8a0cad7e.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6df90204_2291_4c35_98cd_722f8a0cad7e.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6df90204_2291_4c35_98cd_722f8a0cad7e.Data4[4] )
  {
    *a3 = a1 + 24;
    return 0;
  }
  IsEqualGUID = InlineIsEqualGUID((const struct _GUID *)a2, &GUID_f90f3d2a_ad8d_45a4_84ea_75b51334240c);
  v3 = 0;
  if ( IsEqualGUID )
    *v5 = v6 + 8;
  else
    return (unsigned int)-2147467262;
  return v3;
}
