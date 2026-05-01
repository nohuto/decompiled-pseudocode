/*
 * XREFs of ??1?$ComPtr@VPrivilegedOperationsService@@@WRL@Microsoft@@QEAA@XZ @ 0x1801896D4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_PrivilegedOperationsService_IUnknown__::_1_::dtor$1 @ 0x1806B0D90 (_Microsoft--WRL--Details--MakeAndInitialize_PrivilegedOperationsService_IUnknown__--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180189700 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180189700.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PrivilegedOperationsService>::~ComPtr<PrivilegedOperationsService>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
