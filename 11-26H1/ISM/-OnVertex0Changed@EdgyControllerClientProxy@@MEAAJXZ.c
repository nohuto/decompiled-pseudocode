/*
 * XREFs of ?OnVertex0Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x18015A220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x180099A90 (-GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnVertex0Changed(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  const struct D2D_VECTOR_2F *Type; // rax

  v1 = *((_QWORD *)this + 15);
  Type = (const struct D2D_VECTOR_2F *)BamoDragSourceClientProxy::GetType((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerVertex0Changed((Edges *)(v1 + 72), this, Type);
}
