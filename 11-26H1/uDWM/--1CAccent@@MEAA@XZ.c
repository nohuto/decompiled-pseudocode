/*
 * XREFs of ??1CAccent@@MEAA@XZ @ 0x180063B6C
 * Callers:
 *     ??_GCAccent@@MEAAPEAXI@Z @ 0x180063B20 (--_GCAccent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180063B98 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 */

void __fastcall CAccent::~CAccent(CAccent *this)
{
  *(_QWORD *)this = &CAccent::`vftable';
  CAccent::_CleanupNonStaticsResources(this);
  CContainerVisual::~CContainerVisual(this);
}
