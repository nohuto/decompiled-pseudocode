/*
 * XREFs of ??1CCanvasVisual@@MEAA@XZ @ 0x180068FDC
 * Callers:
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180068F90 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CLegacyNonClientBackground@@UEAA@XZ @ 0x180072C8C (--1CLegacyNonClientBackground@@UEAA@XZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x1800823DC (--1CAccent@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCanvasVisual::~CCanvasVisual(void **this)
{
  *this = &CCanvasVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
