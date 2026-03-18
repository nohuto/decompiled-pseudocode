/*
 * XREFs of ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x14009DCF0
 * Callers:
 *     GreGetDxSharedSurface @ 0x14009D7B0 (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x140322ED8 (GreGetHwndUpdateIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::uiDxPresentFlags(SFMLOGICALSURFACE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebx
  Gre::Base *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  v5 = 0;
  if ( *((_QWORD *)Gre::Base::Globals(this) + 17)
    && *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 100LL)
    && *((_QWORD *)Gre::Base::Globals(v6) + 17)
    && *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96) + 124LL) )
  {
    v5 = 8;
  }
  return *((_DWORD *)this + 53) | (unsigned int)v5;
}
