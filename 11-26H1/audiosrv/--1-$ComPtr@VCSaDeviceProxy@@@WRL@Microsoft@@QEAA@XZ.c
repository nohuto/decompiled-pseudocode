/*
 * XREFs of ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180064284
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams___&_EndpointCharacteristicsDescriptor___&_IDeviceGraphObjectsStore___enum__AUDCLNT_SHAREMODE_&_unsigned_long_&_SaDeviceResourceParams_&_std::vector_wil::com_ptr_t_IUnknown_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IUnknown_wil::err_returncode_policy______const_&__GUID_const___&__GUID_const___&__::_1_::dtor$2 @ 0x1801665A8 (_Microsoft--WRL--Details--MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceP_ea_1801665A8.c)
 * Callees:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x1800642B0 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 */

int __fastcall Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(CSaDeviceProxy **a1)
{
  CSaDeviceProxy *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = CSaDeviceProxy::Release(v1);
  }
  return (int)v1;
}
