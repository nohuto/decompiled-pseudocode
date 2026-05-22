/*
 * XREFs of ?_Change_array@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXQEAUINPUT_SPACE_PAYLOAD@@_K1@Z @ 0x180076B40
 * Callers:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEAU2@@Z @ 0x180046710 (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800A9664 (--$_Reallocate@$0A@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16>(v6, 8 * ((a1[2] - v6) >> 3));
  *a1 = a2;
  a1[1] = a2 + 24 * a3;
  result = 3 * a4;
  a1[2] = a2 + 24 * a4;
  return result;
}
