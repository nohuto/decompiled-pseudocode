/*
 * XREFs of ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAAEAUINPUT_SPACE_REGION@@AEAU2@@Z @ 0x180196F4C
 * Callers:
 *     ??$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@?$_Default_allocator_traits@V?$allocator@UInputSpacePayload@@@std@@@std@@SAXAEAV?$allocator@UInputSpacePayload@@@1@QEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180091634 (--$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@-$_Default_allocator_traits@V-$alloca.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<INPUT_SPACE_REGION>::emplace_back<INPUT_SPACE_REGION &>(__int64 a1, _OWORD *a2)
{
  return std::vector<INPUT_SPACE_REGION>::_Emplace_one_at_back<INPUT_SPACE_REGION &>(a1, a2);
}
