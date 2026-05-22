/*
 * XREFs of ?_Change_array@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@AEAAXQEAUDragInfoStruct@@_K1@Z @ 0x180151804
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDragInfoStruct@@@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@AEAAPEAUDragInfoStruct@@QEAU2@AEBU2@@Z @ 0x18014C19C (--$_Emplace_reallocate@AEBUDragInfoStruct@@@-$vector@UDragInfoStruct@@V-$allocator@UDragInfoStru.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DragInfoStruct>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16>(v6, (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
