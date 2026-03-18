/*
 * XREFs of ??$_Emplace@GGMGM@?$list@UBounds@CCpuClipAntialiasSink@@V?$allocator@UBounds@CCpuClipAntialiasSink@@@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@1@QEAU21@$$QEAG1$$QEAM12@Z @ 0x1801A94A0
 * Callers:
 *     ??$emplace_back@GGMGM@?$list@UBounds@CCpuClipAntialiasSink@@V?$allocator@UBounds@CCpuClipAntialiasSink@@@std@@@std@@QEAAAEAUBounds@CCpuClipAntialiasSink@@$$QEAG0$$QEAM01@Z @ 0x18025AEAC (--$emplace_back@GGMGM@-$list@UBounds@CCpuClipAntialiasSink@@V-$allocator@UBounds@CCpuClipAntiali.c)
 * Callees:
 *     ?allocate@?$allocator@U?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU?$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@2@_K@Z @ 0x1800C4594 (-allocate@-$allocator@U-$_List_node@UBounds@CCpuClipAntialiasSink@@PEAX@std@@@std@@QEAAPEAU-$_Li.c)
 */

float *__fastcall std::list<CCpuClipAntialiasSink::Bounds>::_Emplace<unsigned short,unsigned short,float,unsigned short,float>(
        __int64 a1,
        __int64 a2,
        __int16 *a3,
        unsigned __int16 *a4,
        float *a5,
        unsigned __int16 *a6,
        float *a7)
{
  float *v11; // r8
  float v12; // xmm0_4
  __int16 v13; // cx
  float **v14; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v11 = (float *)std::allocator<std::_List_node<CCpuClipAntialiasSink::Bounds,void *>>::allocate();
  v12 = (float)*a4 + *a5;
  v13 = *a3;
  v11[6] = (float)*a6 + *a7;
  *((_WORD *)v11 + 8) = v13;
  v11[5] = v12;
  ++*(_QWORD *)(a1 + 8);
  v14 = *(float ***)(a2 + 8);
  *(_QWORD *)v11 = a2;
  *((_QWORD *)v11 + 1) = v14;
  *(_QWORD *)(a2 + 8) = v11;
  *v14 = v11;
  return v11;
}
