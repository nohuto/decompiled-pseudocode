/*
 * XREFs of ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18028B108
 * Callers:
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1802096D0 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1802814E4 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18028B1A0 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18009C550 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_LUID@@V-$com_ptr_t@UIDisplayDevice@Cor.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801C78E0 (--$_Find@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneComponent::DehydrateSpectreResources(__int64 **this, struct CSceneNode *a2)
{
  __int64 **v2; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rsi
  void (__fastcall *v7)(__int64, __int64); // rdi
  __int64 v8; // rax
  __int64 *v9; // rax
  struct CSceneNode *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = this + 9;
  v5 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
         this + 9,
         &v10);
  if ( v5 != *v2 )
  {
    v6 = *((_QWORD *)a2 + 18);
    v7 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL);
    v8 = ((__int64 (__fastcall *)(__int64 **))(*this)[25])(this);
    v7(v6, v8);
    v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>>::_Extract(
           v2,
           v5);
    std::_Deallocate<16>(v9, 0x30uLL);
  }
}
