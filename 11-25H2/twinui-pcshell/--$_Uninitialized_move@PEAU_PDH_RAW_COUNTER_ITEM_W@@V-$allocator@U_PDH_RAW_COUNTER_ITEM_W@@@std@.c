/*
 * XREFs of ??$_Uninitialized_move@PEAU_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PDH_RAW_COUNTER_ITEM_W@@QEAU1@0PEAU1@AEAV?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@0@@Z @ 0x18033ED8C
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18033E8C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_P.c)
 * Callees:
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall std::_Uninitialized_move<_PDH_RAW_COUNTER_ITEM_W *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + 48 * (v4 / 48);
}
