/*
 * XREFs of ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180208DC8
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x180190D3C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E32C (-ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETC.c)
 * Callees:
 *     ?erase@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@@Z @ 0x1800FC340 (-erase@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_V.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180190F7C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180190FF4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180208E74 (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CProjectedShadowScene::ClearCasters(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rdi
  _QWORD *j; // rbx
  __int64 v7; // rsi
  __int64 trivial_8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CProjectedShadowScene::RequestRedrawAll(this);
  v3 = (_QWORD *)*((_QWORD *)this + 11);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(i + 3);
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*j )
  {
    v7 = j[2];
    trivial_8 = _std_find_trivial_8(*(_QWORD *)(v7 + 104), *(_QWORD *)(v7 + 112), this);
    if ( trivial_8 != *(_QWORD *)(v7 + 112) )
      std::vector<CLight *>::erase(v7 + 104, &v9, trivial_8);
  }
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    v2,
    *((_QWORD *)this + 9));
  **((_QWORD **)this + 9) = *((_QWORD *)this + 9);
  *(_QWORD *)(*((_QWORD *)this + 9) + 8LL) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 10) = 0LL;
}
