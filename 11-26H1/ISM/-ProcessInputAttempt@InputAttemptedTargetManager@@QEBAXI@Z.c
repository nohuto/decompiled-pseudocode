/*
 * XREFs of ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180048F50
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTER_INPUT_DOWN_MESSAGE_const___::_Do_call @ 0x180048F30 (std--_Func_impl_no_alloc__lambda_d996afdc272f919756ffd34e8729d8d0__void__MIT_POINTER_INPUT_DOWN_.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801A33B0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x1801A3830 (-ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ.c)
 * Callees:
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_________lambda_1e24b515bdd59bb09c9b07f2d69df852___ @ 0x180049168 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--Com.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180049720 (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x1800646B0 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTargetManager::ProcessInputAttempt(InputAttemptedTargetManager *this, unsigned int a2)
{
  unsigned int *v4; // rdi
  unsigned int *v5; // rbx
  int v6; // eax
  unsigned int *v7; // [rsp+20h] [rbp-20h] BYREF
  unsigned int *v8; // [rsp+28h] [rbp-18h]
  char *v9; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+28h] BYREF

  v12 = a2;
  if ( *((_QWORD *)this + 2) != *((_QWORD *)this + 3) && a2 )
  {
    ViewHierarchyWithWindowManager::GetAllAncestors(*(_QWORD *)this, &v7, a2);
    if ( v8 == (unsigned int *)v9 )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(&v7, v8, &v12);
      v4 = v8;
    }
    else
    {
      *v8 = a2;
      v4 = ++v8;
    }
    v5 = v7;
    if ( v7 != v4 )
    {
      do
      {
        std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_________lambda_1e24b515bdd59bb09c9b07f2d69df852___(
          &v11,
          *((_QWORD *)this + 2),
          *((_QWORD *)this + 3),
          *v5);
        if ( v11 != *((_QWORD *)this + 3) )
        {
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v11 + 8LL) + 24LL))(*(_QWORD *)v11 + 8LL);
          if ( v6 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x32,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattemptedtargetmanager.cpp",
              (const char *)(unsigned int)v6,
              (int)v7);
        }
        ++v5;
      }
      while ( v5 != v4 );
      v5 = v7;
    }
    if ( v5 )
      std::_Deallocate<16>(v5, (v9 - (char *)v5) & 0xFFFFFFFFFFFFFFFCuLL);
  }
}
