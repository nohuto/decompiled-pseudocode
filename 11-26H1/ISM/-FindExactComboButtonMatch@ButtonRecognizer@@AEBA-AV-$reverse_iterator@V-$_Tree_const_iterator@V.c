/*
 * XREFs of ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801AA940
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801AA630 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801A9874 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A9CE0 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AA110 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??D?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@QEBAAEBU?$pair@$$CBIUComboButtonRegistration@@@1@XZ @ 0x1801AA4B8 (--D-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ButtonRecognizer::FindExactComboButtonMatch(__int64 a1, __int64 *a2, void **a3)
{
  __int64 v6; // r11
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // [rsp+20h] [rbp-28h] BYREF
  int *v16; // [rsp+28h] [rbp-20h]
  __int64 *v17; // [rsp+50h] [rbp+8h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((void **)&v15, a3);
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v15, v16, v16 - v15, 0);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)v6;
  *a2 = *(_QWORD *)v6;
LABEL_2:
  v17 = (__int64 *)v6;
  while ( v6 != v7 )
  {
    v8 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,ComboButtonRegistration>>>>>::operator*(&v17);
    v9 = (__int64)(v8 + 2);
    if ( *((_BYTE *)v8 + 8) )
    {
      if ( std::operator==<enum _Button,std::allocator<enum _Button>>(v9, (__int64)a3) )
      {
        *a2 = v6;
        break;
      }
    }
    else if ( std::operator==<enum _Button,std::allocator<enum _Button>>(v9, (__int64)&v15) )
    {
      *a2 = v6;
    }
    if ( *(_BYTE *)(v6 + 25) )
    {
      v6 = *(_QWORD *)(v6 + 16);
      goto LABEL_2;
    }
    v11 = *(_QWORD *)v6;
    if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
    {
      do
      {
        v6 = v11;
        v11 = *(_QWORD *)(v11 + 16);
      }
      while ( !*(_BYTE *)(v11 + 25) );
      goto LABEL_2;
    }
    v12 = *(_QWORD *)(v6 + 8);
    if ( !*(_BYTE *)(v12 + 25) )
    {
      v13 = v6;
      do
      {
        v14 = v12;
        if ( v13 != *(_QWORD *)v12 )
          break;
        v6 = v12;
        v17 = (__int64 *)v12;
        v12 = *(_QWORD *)(v12 + 8);
        v13 = v14;
      }
      while ( !*(_BYTE *)(v12 + 25) );
    }
    if ( !*(_BYTE *)(v6 + 25) )
    {
      v6 = v12;
      v17 = (__int64 *)v12;
    }
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64 *)&v15);
  return a2;
}
