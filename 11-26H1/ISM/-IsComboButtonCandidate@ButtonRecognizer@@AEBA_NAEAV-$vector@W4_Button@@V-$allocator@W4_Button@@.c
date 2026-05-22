/*
 * XREFs of ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801AACF0
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801AA630 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801A9874 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A9CE0 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AA110 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ButtonRecognizer::IsComboButtonCandidate(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // r10
  _DWORD *i; // r8
  int **v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // r8
  int *v16; // rax
  int *v18; // [rsp+20h] [rbp-28h] BYREF
  int *v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((void **)&v18, (void **)a2);
  v4 = 0;
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v18, v19, v19 - v18, 0);
  v6 = **(_QWORD **)(a1 + 32);
  v20 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = (__int64 *)(v6 + 48);
    if ( *(_BYTE *)(v6 + 40) )
    {
      v8 = *(_QWORD *)(v6 + 56);
      v5 = *v7;
      v9 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
      if ( (v8 - *v7) >> 2 >= v9 )
      {
        v10 = v8 - 4 * v9;
        v11 = v5 - *(_QWORD *)a2;
LABEL_6:
        for ( i = *(_DWORD **)a2; i != *(_DWORD **)(a2 + 8); ++i )
        {
          if ( *(_DWORD *)((char *)i + v11) != *i )
          {
            if ( v5 == v10 )
              goto LABEL_13;
            v5 += 4LL;
            v11 += 4LL;
            goto LABEL_6;
          }
        }
        v8 = v5;
      }
LABEL_13:
      if ( v8 == *(_QWORD *)(v6 + 56) )
        goto LABEL_25;
      v13 = (int **)a2;
    }
    else
    {
      v14 = (_DWORD *)*v7;
      v15 = *(_DWORD **)(v6 + 56);
      v16 = v18;
      while ( v14 != v15 )
      {
        if ( v16 == v19 )
          goto LABEL_23;
        v5 = (unsigned int)*v16;
        if ( (int)v5 < *v14 )
          goto LABEL_25;
        if ( (int)v5 <= *v14 )
          ++v16;
        ++v14;
      }
      if ( v16 != v19 )
        goto LABEL_25;
LABEL_23:
      v13 = &v18;
    }
    if ( !std::operator==<enum _Button,std::allocator<enum _Button>>((__int64)v7, (__int64)v13) )
    {
      v4 = 1;
      break;
    }
LABEL_25:
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v20,
      v5);
    v6 = v20;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64 *)&v18);
  return v4;
}
