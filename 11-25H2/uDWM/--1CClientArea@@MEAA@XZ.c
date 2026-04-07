/*
 * XREFs of ??1CClientArea@@MEAA@XZ @ 0x18006FFFC
 * Callers:
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x18006FFB0 (--_GCClientArea@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CClientArea::~CClientArea(CClientArea *this)
{
  *(_QWORD *)this = &CClientArea::`vftable';
  CVisual::~CVisual(this);
}
