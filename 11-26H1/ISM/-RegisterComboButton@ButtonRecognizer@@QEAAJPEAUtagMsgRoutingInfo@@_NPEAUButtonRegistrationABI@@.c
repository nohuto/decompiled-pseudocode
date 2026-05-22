/*
 * XREFs of ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801AB10C
 * Callers:
 *     ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1801AB2F0 (-Thunk_RegisterComboButton_0@-$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A9CE0 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801A9E60 (--$_Try_emplace@AEBI$$V@-$map@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801A9FC8 (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x1801AA0C8 (--$remove@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Bu.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1801AA1C8 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@V-$initializer_list@W4_Button@@@.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801AA484 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z @ 0x1801AAECC (-OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801AB45C (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator.c)
 *     ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x1801AB49C (-erase@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vec.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::RegisterComboButton(
        ButtonRecognizer *this,
        struct tagMsgRoutingInfo *a2,
        __int64 a3,
        struct ButtonRegistrationABI *a4)
{
  char v4; // bl
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-79h] BYREF
  __int64 v16; // [rsp+28h] [rbp-71h] BYREF
  int *v17; // [rsp+30h] [rbp-69h] BYREF
  int *v18; // [rsp+38h] [rbp-61h]
  _QWORD v19[2]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v20[5]; // [rsp+60h] [rbp-39h] BYREF
  char v21; // [rsp+74h] [rbp-25h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-19h] BYREF
  void *v23; // [rsp+88h] [rbp-11h] BYREF
  __int128 v24; // [rsp+90h] [rbp-9h]
  __int128 v25; // [rsp+A0h] [rbp+7h]
  __int128 v26; // [rsp+B0h] [rbp+17h]
  __int64 v27; // [rsp+C0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = a3;
  v20[0] = *(_DWORD *)a4;
  v20[1] = *((_DWORD *)a4 + 1);
  v20[2] = *((_DWORD *)a4 + 2);
  v20[3] = *((_DWORD *)a4 + 3);
  v20[4] = *((_DWORD *)a4 + 4);
  v19[0] = v20;
  v19[1] = &v21;
  std::vector<enum _Button>::vector<enum _Button>((void **)&v17, (__int64)v19, a3);
  LODWORD(v16) = 305;
  v7 = std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
         v19,
         v17,
         v18,
         &v16);
  std::vector<enum _Button>::erase(&v17, &v16, *v7, v8);
  if ( !v4 )
    std::_Sort_unchecked<enum _Button *,std::less<void>>(v17, v18, v18 - v17, 0);
  v23 = 0LL;
  v24 = 0LL;
  v22[0] = v4;
  std::vector<enum _Button>::operator=(&v23, (__int64)&v17);
  v25 = *(_OWORD *)a2;
  v26 = *((_OWORD *)a2 + 1);
  v27 = *((_QWORD *)a2 + 4);
  std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
    &v16,
    **((_QWORD **)this + 4),
    *((_QWORD *)this + 4),
    v22);
  v9 = (_QWORD *)*((_QWORD *)this + 4);
  if ( (_QWORD *)v16 == v9 )
  {
    v10 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = v10 + 1;
  }
  else
  {
    v10 = *(_DWORD *)(v16 + 32);
  }
  v15 = v10;
  if ( *((_QWORD *)this + 5) )
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase_unchecked(
      (char *)this + 32,
      *v9);
  v11 = *(_QWORD *)std::map<unsigned int,ComboButtonRegistration>::_Try_emplace<unsigned int const &,>(
                     (_QWORD *)this + 4,
                     (__int64)v19,
                     &v15);
  *(_BYTE *)(v11 + 40) = v22[0];
  std::vector<enum _Button>::operator=((void **)(v11 + 48), (__int64)&v23);
  *(_OWORD *)(v11 + 72) = v25;
  *(_OWORD *)(v11 + 88) = v26;
  *(_QWORD *)(v11 + 104) = v27;
  v12 = ButtonRecognizer::OnComboButtonRegistryComplete(this, v15, a2);
  v13 = v12;
  if ( v12 >= 0 )
    v13 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
      (const char *)(unsigned int)v12);
  std::vector<Windows::UI::Color>::_Tidy((__int64 *)&v23);
  std::vector<Windows::UI::Color>::_Tidy((__int64 *)&v17);
  return v13;
}
