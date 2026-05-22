/*
 * XREFs of ?_Change_array@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAXQEAPEAVLightDismissClientProxy@@_K1@Z @ 0x180160430
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x18016023C (--$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@-$vector@PEAVLightDismissClientProxy@@V-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<LightDismissClientProxy *>::_Change_array(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( LightDismissProcessor::s_clients )
    std::_Deallocate<16>(
      LightDismissProcessor::s_clients,
      (struct std::nothrow_t *)((qword_180254008 - (_QWORD)LightDismissProcessor::s_clients) & 0xFFFFFFFFFFFFFFF8uLL));
  LightDismissProcessor::s_clients = a2;
  qword_180254000 = (__int64)a2 + 8 * a3;
  result = (__int64)a2 + 8 * a4;
  qword_180254008 = result;
  return result;
}
