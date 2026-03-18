/*
 * XREFs of ?StopSfmStateTrackingCommon@SFMLOGICALSURFACE@@AEAAJPEAUHDEV__@@@Z @ 0x14009E0B0
 * Callers:
 *     ?TryStopSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14009E6D8 (-TryStopSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14009F3DC (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     GrepSfmRemoveSurfaces @ 0x140328430 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x140336D94 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::StopSfmStateTrackingCommon(SFMLOGICALSURFACE *this, HDEV a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax

  *((_DWORD *)this + 61) &= ~8u;
  v4 = Gre::Base::Globals(this);
  DEC_SHARE_REF_CNT(v4, this);
  if ( (*((_DWORD *)this + 61) & 0x80u) != 0 )
  {
    if ( a2 || (a2 = (HDEV)*((_QWORD *)this + 3)) != 0LL )
      SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 0);
    *((_DWORD *)this + 61) &= ~0x80u;
  }
  return 0LL;
}
