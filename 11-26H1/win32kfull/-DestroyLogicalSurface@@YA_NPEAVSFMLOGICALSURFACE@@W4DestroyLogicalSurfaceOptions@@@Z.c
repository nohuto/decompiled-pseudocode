/*
 * XREFs of ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x14009D0A4 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x14009E158 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     GreSfmCloseCompositorRef @ 0x14009F798 (GreSfmCloseCompositorRef.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1400A3D68 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     CleanupHLSURF @ 0x140259B80 (CleanupHLSURF.c)
 *     CleanupOneHLSURF @ 0x14030AD30 (CleanupOneHLSURF.c)
 *     GrepSfmRemoveSurfaces @ 0x140328430 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     ?TryStopSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14009E6D8 (-TryStopSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14009E81C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 */

char __fastcall DestroyLogicalSurface(Gre::Base *a1, char a2)
{
  HLSURF v2; // rsi
  SFMLOGICALSURFACE *v4; // rdi
  char v5; // bl
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  struct Gre::Base::SESSION_GLOBALS *v7; // rbp
  HDEV v9; // rdx
  char v10; // [rsp+28h] [rbp-20h]

  v2 = *(HLSURF *)a1;
  v4 = a1;
  v5 = 0;
  v6 = Gre::Base::Globals(a1);
  v7 = v6;
  if ( v2 )
  {
    v10 = 18;
    v4 = (SFMLOGICALSURFACE *)HmgRemoveObject(v6, *(_QWORD *)v4, 0LL, 0LL, 1, v10, 0LL);
  }
  if ( v4 )
  {
    SFMLOGICALSURFACE::DeInitialize(v4, v2);
    if ( (a2 & 2) == 0 )
      SFMLOGICALSURFACE::TryStopSfmStateTracking(v4, v9, *((struct SfmState **)v7 + 543));
    FreeObject(v7, v4, 0x12u);
    if ( (a2 & 1) != 0 )
      EtwLogicalSurfDestroyEvent(v2, 0LL);
    return 1;
  }
  return v5;
}
