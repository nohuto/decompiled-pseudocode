/*
 * XREFs of ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x140045A88
 * Callers:
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1403E83FC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionModeChangeLock(DXGSESSIONDATA *this)
{
  char *v1; // rcx

  v1 = (char *)this + 18552;
  if ( *((struct _KTHREAD **)v1 + 1) == KeGetCurrentThread() )
  {
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v1, 0LL);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)v1 + 4);
    ExReleasePushLockSharedEx(v1, 0LL);
  }
  KeLeaveCriticalRegion();
}
