/*
 * XREFs of ?OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x18015A260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ @ 0x1800998D0 (-GetData@BamoAnimationTargetClientProxy@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnVertex1Changed(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  const struct D2D_VECTOR_2F *Data; // rax

  v1 = *((_QWORD *)this + 15);
  Data = (const struct D2D_VECTOR_2F *)BamoAnimationTargetClientProxy::GetData((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerVertex1Changed((Edges *)(v1 + 72), this, Data);
}
