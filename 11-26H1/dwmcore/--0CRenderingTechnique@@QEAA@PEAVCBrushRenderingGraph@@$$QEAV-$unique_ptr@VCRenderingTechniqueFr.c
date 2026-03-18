/*
 * XREFs of ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x18015C700
 * Callers:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18015C5D8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800FD53C (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::CRenderingTechnique(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rax

  *(_QWORD *)this = a2;
  v5 = *a3;
  *a3 = 0LL;
  *((_QWORD *)this + 1) = v5;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::`vftable';
  *((_QWORD *)this + 4) = this;
  *((_QWORD *)this + 5) = (char *)this + 64;
  *((_QWORD *)this + 6) = (char *)this + 64;
  *((_QWORD *)this + 7) = (char *)this + 80;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_BYTE *)this + 276) = 0;
  CRenderingTechnique::CollectStateFromAllFragments(this, a2, (__int64)a3, a4);
  return this;
}
