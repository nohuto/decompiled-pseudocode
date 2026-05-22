/*
 * XREFs of ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x1800646B0
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180011CE0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180048F50 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     std::_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call @ 0x180049050 (std--_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTE.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180049720 (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18006CD7C (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAIAEAI@Z @ 0x18008B2B0 (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAIAEAI@Z.c)
 *     ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800FBB4C (-FindClosestShapeBitmap@SystemCursorShape2@@QEAA-AV-$shared_ptr@VSystemCursorShapeBitmap2@@@std@.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@II@Z @ 0x180104590 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Ba.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180011858 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180073594 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@YAPEAW4GameInputGamepadButtons@@QEAW41@0PEAW41@AEAV?$allocator@W4GameInputGamepadButtons@@@0@@Z @ 0x180076AB4 (--$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V-$allocator@W4GameInputGamepadButtons@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800981C0 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1800A97A8 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

_DWORD *__fastcall std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(
        _QWORD *a1,
        __int64 a2,
        int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 size_of; // rax
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rdi
  _DWORD *v14; // r8
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  _DWORD *v21; // [rsp+38h] [rbp-40h]
  _DWORD *v22; // [rsp+40h] [rbp-38h]

  v5 = (a2 - *a1) >> 2;
  v6 = (__int64)(a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(0x3FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<4>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = v11;
  v19 = a1;
  v14 = (_DWORD *)v11;
  v20 = v9;
  v15 = (_DWORD *)(v11 + 4 * v5);
  *v15 = v12;
  v16 = a1[1];
  v17 = *a1;
  v22 = v15 + 1;
  v21 = v15;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<enum GameInputGamepadButtons *>(v17, a2, v11);
    v16 = a1[1];
    v14 = v15 + 1;
    v17 = a2;
    v21 = (_DWORD *)v13;
  }
  std::_Uninitialized_move<enum GameInputGamepadButtons *>(v17, v16, v14);
  std::vector<unsigned int>::_Change_array(a1, v13, v8, v9, v19, 0LL, v20, v21, v22);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v15;
}
