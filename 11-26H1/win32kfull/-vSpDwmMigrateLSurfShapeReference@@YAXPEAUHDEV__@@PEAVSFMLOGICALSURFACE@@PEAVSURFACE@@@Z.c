/*
 * XREFs of ?vSpDwmMigrateLSurfShapeReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@@Z @ 0x140260EE8
 * Callers:
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x140260ED0 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14009EA74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 */

void __fastcall vSpDwmMigrateLSurfShapeReference(HDEV a1, struct SFMLOGICALSURFACE *this, struct SURFACE *a3)
{
  SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
  if ( a3 )
    SFMLOGICALSURFACE::SetShape(this, a1, (struct _SURFOBJ *)((char *)a3 + 24));
}
