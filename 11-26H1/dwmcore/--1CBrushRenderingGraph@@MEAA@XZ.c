/*
 * XREFs of ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800ABE2C
 * Callers:
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x18015AA50 (--1CExternalEffectGraph@@MEAA@XZ.c)
 *     ??_GCBrushRenderingGraph@@MEAAPEAXI@Z @ 0x1801C2440 (--_GCBrushRenderingGraph@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800FC750 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x180175B78 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

void __fastcall CBrushRenderingGraph::~CBrushRenderingGraph(CBrushRenderingGraph *this, unsigned int a2)
{
  bool v2; // zf
  __int64 i; // rdi
  CRenderingTechnique *v5; // rcx
  CShaderCache *v6; // rcx

  v2 = *((_BYTE *)this + 199) == 0;
  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  if ( !v2 )
  {
    v6 = (CShaderCache *)*((_QWORD *)this + 23);
    if ( v6 )
      CShaderCache::`scalar deleting destructor'(v6, a2);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
  {
    v5 = *(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * i);
    if ( v5 )
      CRenderingTechnique::`scalar deleting destructor'(v5, a2);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 144);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 16);
}
