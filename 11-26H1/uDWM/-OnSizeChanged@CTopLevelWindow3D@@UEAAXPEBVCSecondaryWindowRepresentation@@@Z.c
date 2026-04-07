/*
 * XREFs of ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800760A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::OnSizeChanged(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CTopLevelWindow3D::OnWindowSizeUpdated((CTopLevelWindow3D *)((char *)this - 184));
}
