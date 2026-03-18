/*
 * XREFs of ?ReleaseResources@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ @ 0x18020FAAC
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ @ 0x18020FA80 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC300 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDelet.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019B5E0 (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::ReleaseResources(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8

  v1 = (__int64 *)(a1 + 16);
  v3 = *(__int64 **)(a1 + 16);
  v4 = *(__int64 **)(a1 + 24);
  while ( v3 != v4 )
    result = CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(
               *v3++,
               a1);
  v6 = (v1[1] - *v1) >> 3;
  if ( v6 )
    return detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
             v1,
             0LL,
             v6);
  return result;
}
