/*
 * XREFs of ?IsHorizontal@CScrollViewer@@UEAA_NXZ @ 0x1804D8E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CScrollViewer::IsHorizontal(CScrollViewer *this)
{
  return *((_BYTE *)this + 80) & 1;
}
