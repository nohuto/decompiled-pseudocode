/*
 * XREFs of ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801DAE88
 * Callers:
 *     ?OnTransformChanged@CCaptureController@@IEAAXXZ @ 0x18021E7C4 (-OnTransformChanged@CCaptureController@@IEAAXXZ.c)
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A25C (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A45C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 */

void __fastcall CCaptureRenderTarget::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  struct CResource *v4; // rax

  CResource::RegisterNotifier((CResource *)this, a2);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[24]);
  v4 = *this;
  this[24] = a2;
  (*((void (__fastcall **)(struct CResource **))v4 + 30))(this);
}
