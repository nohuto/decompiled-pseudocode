/*
 * XREFs of ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x14009EE88
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400757E8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x14009D800 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14009D9B0 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x14009E784 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x14009EC1C (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14009ED44 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x140336D94 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bNeedRenderHint(struct PDEVOBJ *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = Gre::Base::Globals(a1);
  v4 = *(_QWORD *)a1;
  v5 = 0;
  if ( *(_QWORD *)(v4 + 3424)
    && (*(_DWORD *)(v4 + 2112) & 0x400) != 0
    && (!*((_QWORD *)v2 + 28) || !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v4, v3)) )
  {
    return 1;
  }
  return v5;
}
