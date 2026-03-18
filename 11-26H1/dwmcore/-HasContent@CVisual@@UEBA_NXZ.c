/*
 * XREFs of ?HasContent@CVisual@@UEBA_NXZ @ 0x1801788A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasContent(CVisual *this)
{
  return *((_QWORD *)this + 31) != 0LL;
}
