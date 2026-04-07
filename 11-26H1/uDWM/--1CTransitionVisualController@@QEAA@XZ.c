/*
 * XREFs of ??1CTransitionVisualController@@QEAA@XZ @ 0x1800CE4C0
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002A330 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 */

void __fastcall CTransitionVisualController::~CTransitionVisualController(void **this)
{
  CBaseObject *v2; // rcx

  *this = &CTransitionVisualController::`vftable';
  CTransitionVisualController::CleanupTransition((CTransitionVisualController *)this);
  v2 = (CBaseObject *)this[1];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[1] = 0LL;
  }
  CBitmapSourceArray::~CBitmapSourceArray(this + 19);
  CBitmapSourceArray::~CBitmapSourceArray(this + 14);
  CBitmapSourceArray::~CBitmapSourceArray(this + 7);
  CBitmapSourceArray::~CBitmapSourceArray(this + 3);
}
