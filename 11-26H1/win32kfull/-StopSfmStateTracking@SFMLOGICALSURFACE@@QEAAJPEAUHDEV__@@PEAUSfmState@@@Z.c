/*
 * XREFs of ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14009F3DC
 * Callers:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreSfmCloseCompositorRef @ 0x14009F798 (GreSfmCloseCompositorRef.c)
 * Callees:
 *     ?StopSfmStateTrackingCommon@SFMLOGICALSURFACE@@AEAAJPEAUHDEV__@@@Z @ 0x14009E0B0 (-StopSfmStateTrackingCommon@SFMLOGICALSURFACE@@AEAAJPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::StopSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  struct W32_PUSH_LOCK *v3; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  v3 = (struct SfmState *)((char *)a3 + 40);
  if ( a3 != (struct SfmState *)-40LL )
    GreAcquirePushLockExclusive((struct SfmState *)((char *)a3 + 40));
  --*((_DWORD *)a3 + 16);
  v7 = (_QWORD *)((char *)this + 32);
  v8 = *((_QWORD *)this + 4);
  if ( *(SFMLOGICALSURFACE **)(v8 + 8) != (SFMLOGICALSURFACE *)((char *)this + 32)
    || (v9 = (_QWORD *)*((_QWORD *)this + 5), (_QWORD *)*v9 != v7) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *v7 = v7;
  if ( v3 )
    GreReleasePushLockExclusive(v3);
  return SFMLOGICALSURFACE::StopSfmStateTrackingCommon(this, a2);
}
