/*
 * XREFs of ??$emplace_front@IAEAUBounds@CCpuClipAntialiasSink@@@?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@QEAAAEAUSinkRenderCommand@CCpuClipAntialiasSinkContext@@$$QEAIAEAUBounds@CCpuClipAntialiasSink@@@Z @ 0x18025AEE8
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x1800C4594 (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@USinkRenderCommand@CCpuClipAntialiasSinkContext@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801B29D8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@USinkRenderCommand@CCpuClipAntialiasSinkC.c)
 */

char *__fastcall std::list<CCpuClipAntialiasSinkContext::SinkRenderCommand>::emplace_front<unsigned int,CCpuClipAntialiasSink::Bounds &>(
        __int64 **a1,
        int *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  char *v7; // rax
  int v8; // ecx
  char *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = **a1;
  if ( a1[1] == (__int64 *)0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v12[0] = a1;
  v7 = (char *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
  v8 = *a2;
  v9 = v7;
  v12[1] = 0LL;
  *((_DWORD *)v7 + 4) = v8;
  *(_QWORD *)(v7 + 20) = *(_QWORD *)a3;
  *((_DWORD *)v7 + 7) = *(_DWORD *)(a3 + 8);
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  v10 = *(_QWORD **)(v6 + 8);
  *(_QWORD *)v7 = v6;
  *((_QWORD *)v7 + 1) = v10;
  *(_QWORD *)(v6 + 8) = v7;
  *v10 = v7;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CCpuClipAntialiasSinkContext::SinkRenderCommand,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CCpuClipAntialiasSinkContext::SinkRenderCommand,void *>>>((__int64)v12);
  return v9 + 16;
}
