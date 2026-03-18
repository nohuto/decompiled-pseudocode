/*
 * XREFs of ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x180259A40
 * Callers:
 *     ??_GCComputeScribbleRenderer@@EEAAPEAXI@Z @ 0x180259AA0 (--_GCComputeScribbleRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x180259A20 (--1-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleScheduler@@@std@@.c)
 */

void __fastcall CComputeScribbleRenderer::~CComputeScribbleRenderer(CComputeScribbleRenderer *this)
{
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 5);
  std::unique_ptr<CComputeScribbleScheduler>::~unique_ptr<CComputeScribbleScheduler>((_QWORD *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
