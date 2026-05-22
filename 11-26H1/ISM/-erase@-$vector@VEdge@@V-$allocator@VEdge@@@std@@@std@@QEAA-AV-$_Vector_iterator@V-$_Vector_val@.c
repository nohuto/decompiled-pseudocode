/*
 * XREFs of ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801AF324
 * Callers:
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AED50 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AEF30 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??1Edge@@QEAA@XZ @ 0x1801AC454 (--1Edge@@QEAA@XZ.c)
 *     ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x1801ADE70 (--4Edge@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

_QWORD *__fastcall std::vector<Edge>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 128; i != v3; i += 128LL )
    Edge::operator=(i - 128, i);
  Edge::~Edge((Edge *)(*(_QWORD *)(a1 + 8) - 128LL));
  *(_QWORD *)(a1 + 8) -= 128LL;
  result = a2;
  *a2 = a3;
  return result;
}
