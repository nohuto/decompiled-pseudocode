/*
 * XREFs of ??1CCursorState@@UEAA@XZ @ 0x18029096C
 * Callers:
 *     ??_ECCursorState@@UEAAPEAXI@Z @ 0x180290C10 (--_ECCursorState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800CF0B0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCSceneMeshRen.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCCursorState@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCCursorState@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18019B9F4 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KPEAVCCursorState@@@std@@@std@@@std@@QE.c)
 *     ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x18028F884 (--$_Destroy_range@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursor.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x18028F8C4 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@PEAU01@@Z @ 0x18028FB68 (--$_Freenode@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@-$_List_node@.c)
 */

void __fastcall CCursorState::~CCursorState(CCursorState *this)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // rcx
  std::_Ref_count_base *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CCursorState::`vftable';
  v13 = &g_CursorManager;
  EnterCriticalSection(&g_CursorManager);
  v2 = xmmword_1803DE600;
  v3 = *(_QWORD *)xmmword_1803DE600;
  v12 = *(_QWORD *)xmmword_1803DE600;
  while ( v3 != v2 )
  {
    if ( *(CCursorState **)(v3 + 40) == this )
    {
      v4 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,CCursorState *>>>::_Extract(
             &xmmword_1803DE600,
             (__int64 *)v3);
      std::_Deallocate<16>(v4, 0x30uLL);
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v12);
    v3 = v12;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  operator delete(*((void **)this + 35));
  v5 = *((_QWORD *)this + 32);
  **(_QWORD **)(v5 + 8) = 0LL;
  v6 = *(__int64 **)v5;
  if ( *(_QWORD *)v5 )
  {
    do
    {
      v7 = *v6;
      std::_List_node<CCursorState::TrailPoint,void *>::_Freenode<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        v5,
        v6);
      v6 = (__int64 *)v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16>(*((void **)this + 32), 0x50uLL);
  v8 = *((_QWORD *)this + 28);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(v8, *((_QWORD *)this + 29));
    std::_Deallocate<16>(
      *((void **)this + 28),
      (*((_QWORD *)this + 30) - *((_QWORD *)this + 28)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
  }
  v9 = (std::_Ref_count_base *)*((_QWORD *)this + 23);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  v10 = *((_QWORD *)this + 11);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(v10, *((_QWORD *)this + 12));
    std::_Deallocate<16>(
      *((void **)this + 11),
      (*((_QWORD *)this + 13) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFF80uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v11 = (std::_Ref_count_base *)*((_QWORD *)this + 6);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
