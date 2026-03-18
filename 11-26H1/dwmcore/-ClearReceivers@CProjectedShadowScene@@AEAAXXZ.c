/*
 * XREFs of ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180190DE8
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x180190D3C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E458 (-ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?erase@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@@Z @ 0x1800FC340 (-erase@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_V.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180190ED8 (--$_Free_non_head@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@st.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180190F7C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180190FF4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CProjectedShadowScene::ClearReceivers(CProjectedShadowScene *this)
{
  __int64 v2; // rdx
  char *v3; // r14
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  _QWORD **v6; // rdi
  _QWORD *j; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD **v11; // rax
  __int64 v12; // rsi
  __int64 trivial_8; // rax
  char v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  CProjectedShadowScene::RequestRedrawAll(this);
  v3 = (char *)this + 88;
  v4 = (_QWORD **)*((_QWORD *)this + 11);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(i + 3);
  v6 = *(_QWORD ***)v3;
  for ( j = **(_QWORD ***)v3; j != v6; j = (_QWORD *)*j )
  {
    v12 = j[2];
    trivial_8 = _std_find_trivial_8(*(_QWORD *)(v12 + 80), *(_QWORD *)(v12 + 88), this);
    if ( trivial_8 != *(_QWORD *)(v12 + 88) )
      std::vector<CLight *>::erase(v12 + 80, &v15, trivial_8);
  }
  v9 = std::_Allocate<16,std::_Default_allocate_traits>(0x78uLL, v2);
  *v9 = v9;
  v9[1] = v9;
  if ( v3 != &v14 )
  {
    v11 = *(_QWORD ***)v3;
    *(_QWORD *)v3 = v9;
    v9 = v11;
    *((_QWORD *)this + 12) = 0LL;
  }
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v8,
    v9);
  *v9 = v9;
  v9[1] = v9;
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v10,
    v9);
  std::_Deallocate<16>(v9, 0x78uLL);
}
