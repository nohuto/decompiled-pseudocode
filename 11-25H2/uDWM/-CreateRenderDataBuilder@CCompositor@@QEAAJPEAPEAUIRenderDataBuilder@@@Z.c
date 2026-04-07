/*
 * XREFs of ?CreateRenderDataBuilder@CCompositor@@QEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x180029844
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180028E40 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x180029620 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateRenderDataBuilder(CCompositor *this, struct IRenderDataBuilder **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IRenderDataBuilder **))(**((_QWORD **)this + 3) + 104LL))(
           *((_QWORD *)this + 3),
           a2);
}
