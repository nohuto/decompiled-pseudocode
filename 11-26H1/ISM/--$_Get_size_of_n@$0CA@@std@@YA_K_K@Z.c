/*
 * XREFs of ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18002F834
 * Callers:
 *     ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x18002F918 (--$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@-$vector@UGestureRegistr.c)
 *     ??$_Emplace_reallocate@AEAPEBGAEA_K@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAPEBGAEA_K@Z @ 0x18010E3D4 (--$_Emplace_reallocate@AEAPEBGAEA_K@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ??$_Emplace_reallocate@PEAG@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAPEAG@Z @ 0x18010E504 (--$_Emplace_reallocate@PEAG@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Emplace_reallocate@AEBUDragInfoStruct@@@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@AEAAPEAUDragInfoStruct@@QEAU2@AEBU2@@Z @ 0x18014C19C (--$_Emplace_reallocate@AEBUDragInfoStruct@@@-$vector@UDragInfoStruct@@V-$allocator@UDragInfoStru.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<32>(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 32 * a1;
}
