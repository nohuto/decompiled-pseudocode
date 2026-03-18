/*
 * XREFs of ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x140066410
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401C66EC (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 */

struct SFMLOGICALSURFACE *__fastcall SURFACE::GetFirstLSurf(SURFACE *this)
{
  struct W32_PUSH_LOCK *v1; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax

  v1 = (SURFACE *)((char *)this + 624);
  if ( this != (SURFACE *)-624LL )
    RIMLockShared((__int64)this + 624);
  v3 = (_QWORD *)((char *)this + 232);
  v4 = 0LL;
  v5 = (_QWORD *)*v3;
  if ( *v3 && v5 != v3 )
    v4 = v5 - 6;
  if ( v1 )
    W32ReleasePushLockShared(v1);
  return (struct SFMLOGICALSURFACE *)v4;
}
