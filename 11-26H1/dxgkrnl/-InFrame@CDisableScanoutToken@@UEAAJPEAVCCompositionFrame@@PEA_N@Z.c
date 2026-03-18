/*
 * XREFs of ?InFrame@CDisableScanoutToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x140060780
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14006AB78 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 */

int __fastcall CDisableScanoutToken::InFrame(CDisableScanoutToken *this, struct CCompositionFrame *a2, bool *a3)
{
  *((_DWORD *)this + 6) = 3;
  return CompositionSurfaceObject::NotifyTokenInFrame(*((CompositionSurfaceObject **)this + 6), this, a3, 0LL);
}
