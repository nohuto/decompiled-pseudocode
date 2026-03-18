/*
 * XREFs of ?NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014A970
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18014A9D8 (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18014AB68 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  CRenderTarget::SetRootVisual((CRenderTarget *)a1, *(struct CVisual **)(a1 + 2392));
  if ( !*(_DWORD *)(a1 + 2432) && *(_QWORD *)(a1 + 112) )
  {
    *(_DWORD *)(a1 + 2432) = 1;
    CRenderTarget::AddToRenderTargetManager((CRenderTarget *)a1);
  }
  return CResource::NotifyOnChanged(a1, a2, a3);
}
