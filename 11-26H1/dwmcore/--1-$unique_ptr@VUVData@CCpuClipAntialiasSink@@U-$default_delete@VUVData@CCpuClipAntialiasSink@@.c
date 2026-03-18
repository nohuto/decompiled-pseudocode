/*
 * XREFs of ??1?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@QEAA@XZ @ 0x18002D5C4
 * Callers:
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1800BE540 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CCpuClipAntialiasSink::UVData>::~unique_ptr<CCpuClipAntialiasSink::UVData>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (void *)v1[2];
    if ( v2 )
      operator delete(v2);
    operator delete(v1, 0x18uLL);
  }
}
