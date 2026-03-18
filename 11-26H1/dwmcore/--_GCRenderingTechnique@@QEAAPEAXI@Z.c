/*
 * XREFs of ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800FC750
 * Callers:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800ABE2C (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18015C5D8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x1800FC77C (--1CRenderingTechnique@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::`scalar deleting destructor'(CRenderingTechnique *this)
{
  CRenderingTechnique::~CRenderingTechnique(this);
  operator delete(this, 0x118uLL);
  return this;
}
