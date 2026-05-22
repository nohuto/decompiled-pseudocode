/*
 * XREFs of ??$_Uninitialized_move@PEAUTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@YAPEAUTraceSessionProviderConfig@@QEAU1@0PEAU1@AEAV?$allocator@UTraceSessionProviderConfig@@@0@@Z @ 0x1800D4084
 * Callers:
 *     ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@AEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x1800D3BF4 (--$_Emplace_reallocate@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTrac.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<TraceSessionProviderConfig *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum _Button *,enum _Button *>(a1, a2, a3);
  return &a3[40 * ((a2 - (__int64)a1) / 40)];
}
