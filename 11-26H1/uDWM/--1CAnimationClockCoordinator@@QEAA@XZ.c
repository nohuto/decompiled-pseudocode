/*
 * XREFs of ??1CAnimationClockCoordinator@@QEAA@XZ @ 0x180098AD4
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAnimationClockCoordinator::~CAnimationClockCoordinator(CAnimationClockCoordinator *this)
{
  __int64 v1; // rdi
  CBaseObject *v3; // rcx

  v1 = 0LL;
  for ( *(_QWORD *)this = &CAnimationClockCoordinator::`vftable';
        (unsigned int)v1 < *((_DWORD *)this + 20);
        v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 7) + 8 * v1);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
}
