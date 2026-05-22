/*
 * XREFs of ??$_Emplace_one_at_back@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAAEAUINPUT_SPACE_PAYLOAD@@$$QEAU2@@Z @ 0x1800466D4
 * Callers:
 *     ??$emplace_back@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAAEAUINPUT_SPACE_PAYLOAD@@$$QEAU2@@Z @ 0x18010C284 (--$emplace_back@UINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_one_at_back<INPUT_SPACE_PAYLOAD>(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(a1, v3, a2);
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 24;
  return result;
}
