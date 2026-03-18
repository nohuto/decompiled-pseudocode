/*
 * XREFs of ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x180151698
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801518B4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV?$vector@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@V?$allocator@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@@2@@std@@@Z @ 0x18028E2F4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV-$vector@U-$pair@PEAVCManipulation@@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x18013C910 (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x18013DC0C (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCCompositionSurfaceInfo@@@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180198D50 (--$_Emplace_reallocate@AEAPEAVCCompositionSurfaceInfo@@@-$vector@V-$com_ptr_t@VCCompositionSurfa.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180209034 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ??$_Erase@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028DE08 (--$_Erase@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Umap_trait.c)
 */

void __fastcall InteractionSourceManager::CleanupManipulationMap(InteractionSourceManager *this, _QWORD **a2)
{
  __int64 **v2; // rdi
  __int64 v3; // r8
  __int64 **i; // rbx
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  _QWORD *v9; // rcx
  __int64 *v10; // r14
  __int64 v11; // r15
  __int64 v12; // r11
  unsigned __int64 j; // r9
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h]
  _QWORD v16[3]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-20h] BYREF

  v2 = (__int64 **)*((_QWORD *)this + 2);
  v3 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  for ( i = (__int64 **)*v2; i != v2; i = (__int64 **)*i )
  {
    v9 = *a2;
    v10 = (__int64 *)(i + 2);
    while ( v9 != a2[1] )
    {
      if ( *v10 == *v9 )
        goto LABEL_13;
      ++v9;
    }
    if ( *((_QWORD *)&v14 + 1) == v3 )
    {
      std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::_Emplace_reallocate<CCompositionSurfaceInfo * &>(
        &v14,
        *((_QWORD *)&v14 + 1),
        i + 2);
    }
    else
    {
      wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
        *((_QWORD **)&v14 + 1),
        *v10);
      *((_QWORD *)&v14 + 1) += 8LL;
    }
    if ( InteractionSourceManager::IsManipulationActive(this, (const struct CManipulation *)*v10) )
    {
      CChainingHelper::ClearAllConfigurations((CChainingHelper *)i[3]);
      v11 = *((_QWORD *)this + 12);
      if ( this == (InteractionSourceManager *)-72LL )
        v12 = 0LL;
      else
        v12 = *((_QWORD *)this + 9);
      for ( j = 0LL; j < *((_QWORD *)this + 13); ++j )
      {
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8 * ((*((_QWORD *)this + 11) - 1LL) & ((v11 + j) >> 1)))
                       + 8LL * (((_DWORD)v11 + (_DWORD)j) & 1)) == *v10 )
          goto LABEL_21;
      }
      LODWORD(j) = *((_DWORD *)this + 26);
LABEL_21:
      v16[1] = 0LL;
      v16[2] = v11 + (int)j;
      v16[0] = v12;
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase((char *)this + 72, v17, v16);
      *((_BYTE *)this + 112) = 1;
    }
    CResource::UnRegisterNotifierInternal(*(CResource **)this, (struct CResource *)*v10);
    v3 = v15;
LABEL_13:
    ;
  }
  v8 = (__int64 *)*((_QWORD *)&v14 + 1);
  v7 = (__int64 *)v14;
  if ( (_QWORD)v14 != *((_QWORD *)&v14 + 1) )
  {
    do
      std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Erase<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
        (char *)this + 8,
        v7++);
    while ( v7 != v8 );
    v8 = (__int64 *)*((_QWORD *)&v14 + 1);
    v7 = (__int64 *)v14;
  }
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(v7, v8);
    std::_Deallocate<16>((void *)v14, (v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
