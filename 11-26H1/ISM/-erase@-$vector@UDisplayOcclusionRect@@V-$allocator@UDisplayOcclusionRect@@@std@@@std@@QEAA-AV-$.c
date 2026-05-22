/*
 * XREFs of ?erase@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@2@@Z @ 0x18013DAA4
 * Callers:
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18013D2A0 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UDisplayOcclusionRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180142AF8 (-RemoveAt@-$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801A6698 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

_QWORD *__fastcall std::vector<DisplayOcclusionRect>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  std::_Copy_memmove<enum _Button *,enum _Button *>((void *)(a3 + 176), *(_QWORD *)(a1 + 8), (void *)a3);
  *(_QWORD *)(a1 + 8) -= 176LL;
  result = a2;
  *a2 = a3;
  return result;
}
