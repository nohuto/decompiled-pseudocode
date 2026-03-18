/*
 * XREFs of ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14009E81C
 * Callers:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8 (-DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z.c)
 * Callees:
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x14009E8E4 (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x14009EA24 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14009EA74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x14009EBD4 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14009ED44 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::DeInitialize(SFMLOGICALSURFACE *this, HLSURF a2)
{
  Gre::Base *v4; // rcx
  HLSURF v5; // rdx
  int v6; // r8d
  HDEV *v7; // rbx
  struct SURFACE *v8; // rsi

  SfmTokenArray::DeInitialize((SFMLOGICALSURFACE *)((char *)this + 216));
  v7 = (HDEV *)((char *)this + 24);
  if ( *((_DWORD *)Gre::Base::Globals(v4) + 778) )
    *v7 = 0LL;
  *(_QWORD *)this = a2;
  v8 = SFMLOGICALSURFACE::OwnsSurfaceCleanup(this, v5, v6);
  if ( v8 )
  {
    SFMLOGICALSURFACE::SetShape(this, *v7, 0LL);
    SFMLOGICALSURFACE::CleanupShape(this, v8);
  }
  if ( *v7 )
  {
    SpNotifyLSurface(*v7, a2, 0, 0, 0LL);
    *v7 = 0LL;
  }
  SFMLOGICALSURFACE::CleanupRegions(this);
}
