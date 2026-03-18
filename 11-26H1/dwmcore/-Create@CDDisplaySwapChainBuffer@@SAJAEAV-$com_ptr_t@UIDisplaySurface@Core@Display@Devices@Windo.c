/*
 * XREFs of ?Create@CDDisplaySwapChainBuffer@@SAJAEAV?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@3@AEAV?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@3@AEBUD2D_SIZE_U@@IPEAPEAV1@@Z @ 0x1801E2010
 * Callers:
 *     ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x180134294 (-CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CDDisplaySwapChainBuffer@@IEAA@AEAV?$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@AEAV?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@2@AEBUD2D_SIZE_U@@I@Z @ 0x180211B0C (--0CDDisplaySwapChainBuffer@@IEAA@AEAV-$com_ptr_t@UIDisplaySurface@Core@Display@Devices@Windows@.c)
 */

__int64 __fastcall CDDisplaySwapChainBuffer::Create(int a1, int a2, int a3, __int64 a4, int a5, __int64 *a6)
{
  LPVOID v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 result; // rax

  *a6 = 0LL;
  v10 = operator new(0xE0uLL);
  if ( v10 )
  {
    v11 = CDDisplaySwapChainBuffer::CDDisplaySwapChainBuffer((_DWORD)v10, a1, a2, a3, a4, a5);
    v12 = v11;
    if ( v11 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
  }
  else
  {
    v12 = 0LL;
  }
  result = 0LL;
  *a6 = v12;
  return result;
}
