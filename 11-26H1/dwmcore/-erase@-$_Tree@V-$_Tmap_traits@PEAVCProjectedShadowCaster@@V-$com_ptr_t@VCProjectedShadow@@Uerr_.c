/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x1800D834C
 * Callers:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1800D7250 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800D8414 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x1800D89B4 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedSh.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 **v2; // r11
  __int64 v3; // rbx
  __int64 **v5; // r10
  __int64 *v6; // r8
  __int64 *v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 **v10; // rax
  __int64 **v11; // rax
  __int64 **v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 **)*a1;
  v3 = 0LL;
  v5 = (__int64 **)*a1;
  v6 = *(__int64 **)(*a1 + 8);
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( v7[4] >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < v7[4] )
          v5 = (__int64 **)v7;
        v2 = (__int64 **)v7;
      }
      else
      {
        v7 += 2;
      }
      v7 = (__int64 *)*v7;
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = *v5;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v9 = *a2;
    do
    {
      v10 = (__int64 **)v6;
      if ( v9 >= v6[4] )
        v10 = v5;
      v5 = v10;
      if ( v9 >= v6[4] )
        v6 += 2;
      v6 = (__int64 *)*v6;
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  v11 = v2;
  v13 = v2;
  while ( v11 != v5 )
  {
    ++v3;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v13);
    v11 = v13;
  }
  std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::_Erase_unchecked(
    a1,
    v2,
    v5);
  return v3;
}
