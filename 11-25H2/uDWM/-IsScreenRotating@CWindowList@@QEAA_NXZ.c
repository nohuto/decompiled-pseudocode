/*
 * XREFs of ?IsScreenRotating@CWindowList@@QEAA_NXZ @ 0x1800388E0
 * Callers:
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x180038880 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowList::IsScreenRotating(CWindowList *this)
{
  return *((_BYTE *)this + 672);
}
