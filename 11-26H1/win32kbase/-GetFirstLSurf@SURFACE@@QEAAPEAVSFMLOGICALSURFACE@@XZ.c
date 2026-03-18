/*
 * XREFs of ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1400572C0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1401F12B0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 * Callees:
 *     ?GreAcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140057520 (-GreAcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140057650 (-GreReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

struct SFMLOGICALSURFACE *__fastcall SURFACE::GetFirstLSurf(SURFACE *this)
{
  struct W32_PUSH_LOCK *v1; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax

  v1 = (SURFACE *)((char *)this + 624);
  if ( this != (SURFACE *)-624LL )
    GreAcquirePushLockShared((SURFACE *)((char *)this + 624));
  v3 = (_QWORD *)((char *)this + 232);
  v4 = 0LL;
  v5 = (_QWORD *)*v3;
  if ( *v3 && v5 != v3 )
    v4 = v5 - 6;
  if ( v1 )
    GreReleasePushLockShared(v1);
  return (struct SFMLOGICALSURFACE *)v4;
}
