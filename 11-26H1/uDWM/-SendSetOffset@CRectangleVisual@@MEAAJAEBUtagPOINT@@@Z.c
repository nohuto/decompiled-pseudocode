/*
 * XREFs of ?SendSetOffset@CRectangleVisual@@MEAAJAEBUtagPOINT@@@Z @ 0x18000B520
 * Callers:
 *     <none>
 * Callees:
 *     ?SendSetOffsetImpl@CRectangleVisual@@AEAAJAEBUtagPOINT@@@Z @ 0x18000A724 (-SendSetOffsetImpl@CRectangleVisual@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

__int64 __fastcall CRectangleVisual::SendSetOffset(CRectangleVisual *this, const struct tagPOINT *a2)
{
  _DWORD *v2; // rax
  const struct tagPOINT *v3; // rdx
  __int64 v4; // r9
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_DWORD *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v6);
  if ( (*(_DWORD *)(v4 + 32) & *v2) == 0 )
    CRectangleVisual::SendSetOffsetImpl((CVisualProxy **)v4, v3);
  return 0LL;
}
