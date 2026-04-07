/*
 * XREFs of ??1CAccent@@MEAA@XZ @ 0x1800823DC
 * Callers:
 *     ??_GCAccent@@MEAAPEAXI@Z @ 0x180082390 (--_GCAccent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18003F72C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 */

void __fastcall CAccent::~CAccent(CAccent *this)
{
  *(_QWORD *)this = &CAccent::`vftable';
  CAccent::_CleanupNonStaticsResources(this);
  CCanvasVisual::~CCanvasVisual((void **)this);
}
