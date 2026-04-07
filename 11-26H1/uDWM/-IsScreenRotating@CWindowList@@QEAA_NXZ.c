/*
 * XREFs of ?IsScreenRotating@CWindowList@@QEAA_NXZ @ 0x180042A20
 * Callers:
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x1800429C0 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowList::IsScreenRotating(CWindowList *this)
{
  return *((_BYTE *)this + 672);
}
