/*
 * XREFs of std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801A9FC8
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801AB10C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800320FC (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801A9874 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AA110 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 i; // rbx
  bool v8; // r14
  __int64 v9; // rdx
  __int64 v11; // [rsp+28h] [rbp-29h] BYREF
  int v12; // [rsp+38h] [rbp-19h]
  char v13; // [rsp+40h] [rbp-11h]
  __int64 v14[3]; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v15[2]; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+80h] [rbp+2Fh]

  v11 = a2;
  for ( i = a2; i != a3; i = v11 )
  {
    v12 = *(_DWORD *)(i + 32);
    v13 = *(_BYTE *)(i + 40);
    std::vector<enum _Button>::vector<enum _Button>(v14, i + 48);
    v15[0] = *(_OWORD *)(i + 72);
    v15[1] = *(_OWORD *)(i + 88);
    v16 = *(_QWORD *)(i + 104);
    v8 = *a4 == v13
      && std::operator==<enum _Button,std::allocator<enum _Button>>((__int64)(a4 + 8), (__int64)v14)
      && operator==((__int64)(a4 + 32), (__int64)v15);
    std::vector<Windows::UI::Color>::_Tidy(v14);
    if ( v8 )
      break;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v11,
      v9);
  }
  *a1 = i;
  return a1;
}
