/*
 * XREFs of ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGW4WaveformFlags@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800ED62C
 * Callers:
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBG@Z @ 0x18006C258 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@$0A.c)
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@AEBG@Z @ 0x18019D764 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GW4WaveformFlags@@U-$less@G@std@@V-$allocator@U-$pair@$$.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,enum WaveformFlags>>>,std::_Iterator_base0>::operator--(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rdx
  __int64 *v3; // r8
  __int64 *v4; // r10
  __int64 *i; // rax

  v1 = *a1;
  if ( *((_BYTE *)*a1 + 25) )
  {
    *a1 = (__int64 *)v1[2];
    return a1;
  }
  v2 = (__int64 *)*v1;
  if ( !*(_BYTE *)(*v1 + 25) )
  {
    for ( i = (__int64 *)v2[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
      v2 = i;
LABEL_13:
    *a1 = v2;
    return a1;
  }
  v2 = (__int64 *)v1[1];
  if ( !*((_BYTE *)v2 + 25) )
  {
    v3 = *a1;
    do
    {
      v4 = v2;
      v1 = v3;
      if ( v3 != (__int64 *)*v2 )
        break;
      *a1 = v2;
      v3 = v2;
      v2 = (__int64 *)v2[1];
      v1 = v4;
    }
    while ( !*((_BYTE *)v2 + 25) );
  }
  if ( !*((_BYTE *)v1 + 25) )
    goto LABEL_13;
  return a1;
}
