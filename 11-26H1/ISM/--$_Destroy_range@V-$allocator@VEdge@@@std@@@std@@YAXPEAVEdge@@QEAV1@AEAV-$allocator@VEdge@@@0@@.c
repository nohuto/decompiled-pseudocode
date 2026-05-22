/*
 * XREFs of ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801AC410
 * Callers:
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1801AC484 (--1EdgyConnection@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801ADAF8 (--$_Uninitialized_move@PEAVEdge@@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV-$.c)
 *     ??1_Reallocation_guard@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA@XZ @ 0x1801ADDF0 (--1_Reallocation_guard@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1801AF224 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 * Callees:
 *     ??1Edge@@QEAA@XZ @ 0x1801AC454 (--1Edge@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Edge>>(Edge *this, Edge *a2)
{
  Edge *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      Edge::~Edge(v3);
      v3 = (Edge *)((char *)v3 + 128);
    }
    while ( v3 != a2 );
  }
}
