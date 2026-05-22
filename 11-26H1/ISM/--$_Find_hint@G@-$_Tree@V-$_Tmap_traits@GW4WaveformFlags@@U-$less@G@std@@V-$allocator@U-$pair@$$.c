/*
 * XREFs of ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@AEBG@Z @ 0x18019D764
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBGW4WaveformFlags@@@std@@@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGW4WaveformFlags@@@1@@Z @ 0x18019D6B4 (--$_Emplace_hint@AEBU-$pair@$$CBGW4WaveformFlags@@@std@@@-$_Tree@V-$_Tmap_traits@GW4WaveformFlag.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800ED5D4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGW4WaveformFl.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800ED62C (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGW4WaveformFl.c)
 *     ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@AEBG@Z @ 0x18019D9B4 (--$_Find_lower_bound@G@-$_Tree@V-$_Tmap_traits@GW4WaveformFlags@@U-$less@G@std@@V-$allocator@U-$.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Find_hint<unsigned short>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  unsigned __int16 v7; // si
  __int64 **v8; // rax
  bool v9; // zf
  __int64 **v10; // rax
  char v11; // al
  __int128 v12; // xmm0
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = (__int64 *)a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    a1 = qword_180254068;
    if ( *(_BYTE *)(*(_QWORD *)(qword_180254068 + 8) + 25LL)
      || (v7 = *a4, *(_WORD *)(*(_QWORD *)(qword_180254068 + 16) + 28LL) < *a4) )
    {
      *(_QWORD *)a2 = *(_QWORD *)(qword_180254068 + 16);
      *(_BYTE *)(a2 + 16) = 0;
LABEL_29:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_30;
    }
    goto LABEL_19;
  }
  v7 = *a4;
  if ( a3 == *(_QWORD *)qword_180254068 )
  {
    if ( v7 < *(_WORD *)(a3 + 28) )
    {
      *(_QWORD *)a2 = a3;
      *(_QWORD *)(a2 + 8) = 1LL;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_30:
      *(_DWORD *)(a2 + 17) = 0;
      *(_WORD *)(a2 + 21) = 0;
      *(_BYTE *)(a2 + 23) = 0;
      return a2;
    }
    goto LABEL_19;
  }
  if ( v7 >= *(_WORD *)(a3 + 28) )
  {
    if ( v7 <= *(_WORD *)(a3 + 28) )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_29;
    }
    v16 = (__int64 *)a3;
    v10 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator++(&v16);
    a1 = (__int64)*v10;
    if ( !*((_BYTE *)*v10 + 25) && v7 >= *(_WORD *)(a1 + 28) )
      goto LABEL_19;
    v9 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) == 0;
    *(_BYTE *)(a2 + 16) = 0;
    if ( !v9 )
    {
      *(_QWORD *)a2 = a3;
      goto LABEL_12;
    }
    *(_QWORD *)a2 = a1;
LABEL_15:
    *(_QWORD *)(a2 + 8) = 1LL;
    goto LABEL_13;
  }
  v16 = (__int64 *)a3;
  v8 = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator--(&v16);
  a1 = (__int64)*v8;
  if ( *((_WORD *)*v8 + 14) >= v7 )
  {
LABEL_19:
    std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Find_lower_bound<unsigned short>(
      a1,
      &v14,
      a4);
    if ( *(_BYTE *)(v15 + 25) || (v11 = 1, v7 < *(_WORD *)(v15 + 28)) )
      v11 = 0;
    if ( v11 )
    {
      *(_QWORD *)a2 = v15;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
    }
    else
    {
      v12 = v14;
      *(_BYTE *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v12;
    }
    goto LABEL_13;
  }
  v9 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) == 0;
  *(_BYTE *)(a2 + 16) = 0;
  if ( v9 )
  {
    *(_QWORD *)a2 = a3;
    goto LABEL_15;
  }
  *(_QWORD *)a2 = a1;
LABEL_12:
  *(_QWORD *)(a2 + 8) = 0LL;
LABEL_13:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
