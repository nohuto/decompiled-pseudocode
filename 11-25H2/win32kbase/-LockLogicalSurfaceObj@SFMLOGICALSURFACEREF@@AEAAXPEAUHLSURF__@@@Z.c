/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x14014A34C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgLock @ 0x140018210 (HmgLock.c)
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, __int64 a2)
{
  if ( a2 )
    *((_QWORD *)this + 4) = HmgLock(a2, 18);
}
