/*
 * XREFs of ?_Change_array@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXQEAUINPUT_SPACE_REGION@@_K1@Z @ 0x180072600
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18006E370 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAPEAUINPUT_SPACE_REGION@@QEAU2@AEAU2@@Z @ 0x18019652C (--$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPU.c)
 *     ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXAEA_K@Z @ 0x180196788 (--$_Reallocate@$0A@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16>(v6, 8 * ((a1[2] - v6) >> 3));
  *a1 = a2;
  a1[1] = a2 + 200 * a3;
  result = a2 + 200 * a4;
  a1[2] = result;
  return result;
}
