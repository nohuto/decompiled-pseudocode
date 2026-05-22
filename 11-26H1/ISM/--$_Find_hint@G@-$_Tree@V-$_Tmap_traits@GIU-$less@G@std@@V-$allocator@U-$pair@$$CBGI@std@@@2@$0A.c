/*
 * XREFs of ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBG@Z @ 0x18006C258
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBGI@std@@@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGI@1@@Z @ 0x18006C18C (--$_Emplace_hint@AEBU-$pair@$$CBGI@std@@@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U.c)
 * Callees:
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@AEBG@Z @ 0x18008053C (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800ED5D4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGW4WaveformFl.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800ED62C (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGW4WaveformFl.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_hint<unsigned short>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  unsigned __int16 v7; // si
  __int64 v9; // rax
  bool v10; // zf
  __int128 v11; // xmm0
  __int64 v12; // rax
  char v13; // al
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = a1;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v7 = *a4;
    if ( a3 == *(_QWORD *)qword_180253EF0 )
    {
      if ( v7 < *(_WORD *)(a3 + 28) )
      {
        *(_QWORD *)a2 = a3;
        *(_QWORD *)(a2 + 8) = 1LL;
        *(_BYTE *)(a2 + 16) = 0;
        goto LABEL_6;
      }
      goto LABEL_24;
    }
    if ( v7 >= *(_WORD *)(a3 + 28) )
    {
      if ( v7 <= *(_WORD *)(a3 + 28) )
      {
        *(_QWORD *)a2 = a3;
        *(_BYTE *)(a2 + 16) = 1;
        goto LABEL_5;
      }
      v16 = a3;
      v12 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator++(&v16);
      a1 = *(_QWORD *)v12;
      if ( !*(_BYTE *)(*(_QWORD *)v12 + 25LL) && v7 >= *(_WORD *)(a1 + 28) )
        goto LABEL_24;
      v10 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v10 )
      {
        *(_QWORD *)a2 = a3;
        goto LABEL_15;
      }
      *(_QWORD *)a2 = a1;
    }
    else
    {
      v16 = a3;
      v9 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator--(&v16);
      a1 = *(_QWORD *)v9;
      if ( *(_WORD *)(*(_QWORD *)v9 + 28LL) >= v7 )
      {
LABEL_24:
        std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
          a1,
          &v14,
          a4);
        if ( *(_BYTE *)(v15 + 25) || (v13 = 1, v7 < *(_WORD *)(v15 + 28)) )
          v13 = 0;
        if ( v13 )
        {
          *(_QWORD *)a2 = v15;
          *(_QWORD *)(a2 + 8) = 2LL;
          *(_BYTE *)(a2 + 16) = 1;
        }
        else
        {
          v11 = v14;
          *(_BYTE *)(a2 + 16) = 0;
          *(_OWORD *)a2 = v11;
        }
        goto LABEL_17;
      }
      v10 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v10 )
      {
        *(_QWORD *)a2 = a1;
LABEL_15:
        *(_QWORD *)(a2 + 8) = 0LL;
LABEL_17:
        *(_DWORD *)(a2 + 17) = 0;
        *(_WORD *)(a2 + 21) = 0;
        *(_BYTE *)(a2 + 23) = 0;
        return a2;
      }
      *(_QWORD *)a2 = a3;
    }
    *(_QWORD *)(a2 + 8) = 1LL;
    goto LABEL_17;
  }
  a1 = qword_180253EF0;
  if ( !*(_BYTE *)(*(_QWORD *)(qword_180253EF0 + 8) + 25LL) )
  {
    v7 = *a4;
    if ( *(_WORD *)(*(_QWORD *)(qword_180253EF0 + 16) + 28LL) >= *a4 )
      goto LABEL_24;
  }
  *(_QWORD *)a2 = *(_QWORD *)(qword_180253EF0 + 16);
  *(_BYTE *)(a2 + 16) = 0;
LABEL_5:
  *(_QWORD *)(a2 + 8) = 0LL;
LABEL_6:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
