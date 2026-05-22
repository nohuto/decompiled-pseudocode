/*
 * XREFs of ?erase@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@2@@Z @ 0x18013E97C
 * Callers:
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18013E3E0 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib.c)
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UVirtualTouchpadRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180142BE4 (-RemoveAt@-$ListPrincipalCommon@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@B.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801A5AA4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

_QWORD *__fastcall std::vector<VirtualTouchpadRect>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  std::_Copy_memmove<enum _Button *,enum _Button *>((void *)(a3 + 24), *(_QWORD *)(a1 + 8), (void *)a3);
  *(_QWORD *)(a1 + 8) -= 24LL;
  result = a2;
  *a2 = a3;
  return result;
}
