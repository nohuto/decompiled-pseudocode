/*
 * XREFs of ?TryStopSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14009E6D8
 * Callers:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8 (-DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z.c)
 * Callees:
 *     ?StopSfmStateTrackingCommon@SFMLOGICALSURFACE@@AEAAJPEAUHDEV__@@@Z @ 0x14009E0B0 (-StopSfmStateTrackingCommon@SFMLOGICALSURFACE@@AEAAJPEAUHDEV__@@@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::TryStopSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  struct W32_PUSH_LOCK *v3; // rbx
  char *v6; // rax
  __int64 v7; // rdx
  char **v8; // rcx
  char *v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = (struct SfmState *)((char *)a3 + 40);
  v9 = (char *)a3 + 40;
  if ( a3 != (struct SfmState *)-40LL )
    GreAcquirePushLockExclusive((struct SfmState *)((char *)a3 + 40));
  v6 = (char *)this + 32;
  if ( *(char **)v6 == v6 )
  {
    if ( v3 )
      GreReleasePushLockExclusive(v3);
  }
  else
  {
    --*((_DWORD *)a3 + 16);
    v7 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = (char **)*((_QWORD *)this + 5), *v8 != v6) )
      __fastfail(3u);
    *v8 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_QWORD *)this + 5) = (char *)this + 32;
    *(_QWORD *)v6 = v6;
    Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v9, 0);
    SFMLOGICALSURFACE::StopSfmStateTrackingCommon(this, 0LL);
  }
}
