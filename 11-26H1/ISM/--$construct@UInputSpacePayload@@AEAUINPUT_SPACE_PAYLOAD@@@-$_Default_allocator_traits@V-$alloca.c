/*
 * XREFs of ??$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@?$_Default_allocator_traits@V?$allocator@UInputSpacePayload@@@std@@@std@@SAXAEAV?$allocator@UInputSpacePayload@@@1@QEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180091634
 * Callers:
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAAEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180093F20 (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801963C0 (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXAEA_K@Z @ 0x180196788 (--$_Reallocate@$0A@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAAEAUINPUT_SPACE_REGION@@AEAU2@@Z @ 0x180196F4C (--$emplace_back@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Default_allocator_traits<std::allocator<InputSpacePayload>>::construct<InputSpacePayload,INPUT_SPACE_PAYLOAD &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  v7 = a1;
  v8 = a2;
  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a3 + 8);
  v4 = a2 + 16;
  v5 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  result = *(unsigned int *)(a3 + 12);
  v7 = result;
  if ( result )
    result = std::vector<INPUT_SPACE_REGION>::_Reallocate<0>(v4, &v7);
  if ( *(_DWORD *)(a3 + 12) )
  {
    do
      result = std::vector<INPUT_SPACE_REGION>::emplace_back<INPUT_SPACE_REGION &>(
                 v4,
                 *(_QWORD *)(a3 + 16) + 200LL * v5++);
    while ( v5 < *(_DWORD *)(a3 + 12) );
  }
  return result;
}
