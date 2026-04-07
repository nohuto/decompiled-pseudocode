/*
 * XREFs of ?GetRealizationSize@CDesktopThumbnailCVI@@QEAA?AUtagSIZE@@XZ @ 0x18009A3A0
 * Callers:
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18007EB30 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall CDesktopThumbnailCVI::GetRealizationSize(CDesktopThumbnailCVI *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 6);
  return (struct tagSIZE)a2;
}
