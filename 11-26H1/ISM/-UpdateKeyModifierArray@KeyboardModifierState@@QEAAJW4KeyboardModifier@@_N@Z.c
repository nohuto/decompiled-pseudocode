/*
 * XREFs of ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1800120B0
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800129A0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18007F14C (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 */

__int64 __fastcall KeyboardModifierState::UpdateKeyModifierArray(__int64 a1, int a2, char a3)
{
  __int64 v6; // rax
  int v7; // ecx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    a1 + 16,
    &v11,
    &v12);
  v6 = v11;
  if ( v11 == *(_QWORD *)(a1 + 24) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\ke"
                    "yboardmodifierstate.cpp",
      (const char *)0x80004005LL,
      v9);
    return 2147500037LL;
  }
  else
  {
    v7 = *(_DWORD *)(v11 + 20);
    if ( a3 )
    {
      ++v7;
      *(_DWORD *)(a1 + 80) |= a2;
    }
    else if ( v7 )
    {
      if ( !--v7 )
        *(_DWORD *)(a1 + 80) &= ~a2;
    }
    *(_DWORD *)(v6 + 20) = v7;
    return 0LL;
  }
}
