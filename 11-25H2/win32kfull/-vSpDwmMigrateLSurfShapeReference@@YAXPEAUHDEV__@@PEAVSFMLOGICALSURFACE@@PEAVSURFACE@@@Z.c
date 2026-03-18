/*
 * XREFs of ?vSpDwmMigrateLSurfShapeReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@@Z @ 0x140227368
 * Callers:
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x140227350 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14005CC08 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDwmMigrateLSurfShapeReference(HDEV a1, struct SFMLOGICALSURFACE *this, struct SURFACE *a3)
{
  SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
  if ( a3 )
    SFMLOGICALSURFACE::SetShape(this, a1, (struct _SURFOBJ *)((char *)a3 + 24));
}
