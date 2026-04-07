/*
 * XREFs of ?v_ShouldShowMinimizedWindows@CVirtualDesktopThumbnail@@MEAA_NXZ @ 0x1800779C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualDesktopThumbnail::v_ShouldShowMinimizedWindows(CVirtualDesktopThumbnail *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 28) + 201LL);
}
