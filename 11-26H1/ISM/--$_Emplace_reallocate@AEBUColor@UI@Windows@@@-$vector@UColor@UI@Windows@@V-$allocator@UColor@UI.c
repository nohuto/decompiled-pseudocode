/*
 * XREFs of ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x180083A40
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180048670 (-OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800CF8E4 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAW4_Button@@AEAW42@@Z @ 0x1801A9F8C (--$emplace_back@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAW4.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180011858 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180072E1C (-_Change_array@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAU.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@YAPEAW4GameInputGamepadButtons@@QEAW41@0PEAW41@AEAV?$allocator@W4GameInputGamepadButtons@@@0@@Z @ 0x180076AB4 (--$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V-$allocator@W4GameInputGamepadButtons@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800981C0 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1800A97A8 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 size_of; // rax
  char *v11; // rax
  int v12; // ecx
  __int64 v13; // rdi
  char *v14; // r8
  char *v15; // rsi
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v20; // [rsp+38h] [rbp-40h]
  _DWORD *v21; // [rsp+40h] [rbp-38h]

  v5 = (a2 - *a1) >> 2;
  v6 = (a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<4>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = (__int64)v11;
  v19[0] = a1;
  v14 = v11;
  v19[2] = v9;
  v15 = &v11[4 * v5];
  *(_DWORD *)v15 = v12;
  v16 = a1[1];
  v17 = (void *)*a1;
  v21 = v15 + 4;
  v20 = v15;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<enum GameInputGamepadButtons *>(v17, a2, v11);
    v16 = a1[1];
    v14 = v15 + 4;
    v17 = (void *)a2;
    v20 = (char *)v13;
  }
  std::_Uninitialized_move<enum GameInputGamepadButtons *>(v17, v16, v14);
  v19[1] = 0LL;
  std::vector<Windows::UI::Color>::_Change_array(a1, v13, v8, v9);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v15;
}
