/*
 * XREFs of ??$_Uninitialized_move@PEAUINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18007A730
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18006E370 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAPEAUINPUT_SPACE_REGION@@QEAU2@AEAU2@@Z @ 0x18019652C (--$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPU.c)
 *     ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXAEA_K@Z @ 0x180196788 (--$_Reallocate@$0A@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<INPUT_SPACE_REGION *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum _Button *,enum _Button *>(a1, a2, a3);
  return &a3[200 * ((a2 - (__int64)a1) / 200)];
}
