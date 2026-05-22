/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call @ 0x180049050
 * Callers:
 *     <none>
 * Callees:
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_________lambda_1e24b515bdd59bb09c9b07f2d69df852___ @ 0x180049168 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--Com.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180049720 (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x1800646B0 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_4cab80f0fc0214a242ccd3c88452a090__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int *v5; // rdi
  unsigned int *v6; // rbx
  unsigned int *v7; // [rsp+20h] [rbp-20h] BYREF
  unsigned int *v8; // [rsp+28h] [rbp-18h]
  char *v9; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v11; // [rsp+58h] [rbp+18h] BYREF

  v11 = a2;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 + 72);
  LODWORD(v11) = v3;
  result = *(_QWORD *)(v2 + 88);
  if ( *(_QWORD *)(v2 + 80) != result && v3 )
  {
    result = ViewHierarchyWithWindowManager::GetAllAncestors(*(_QWORD *)(v2 + 64), &v7, v3);
    if ( v8 == (unsigned int *)v9 )
    {
      result = std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(&v7, v8, &v11);
      v5 = v8;
    }
    else
    {
      *v8 = v3;
      v5 = ++v8;
    }
    v6 = v7;
    if ( v7 != v5 )
    {
      do
      {
        std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_________lambda_1e24b515bdd59bb09c9b07f2d69df852___(
          &v11,
          *(_QWORD *)(v2 + 80),
          *(_QWORD *)(v2 + 88),
          *v6);
        result = v11;
        if ( v11 != *(_QWORD *)(v2 + 88) )
        {
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v11 + 8LL) + 24LL))(*(_QWORD *)v11 + 8LL);
          if ( (int)result < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x32,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputattemptedtargetmanager.cpp",
              (const char *)(unsigned int)result,
              (int)v7);
        }
        ++v6;
      }
      while ( v6 != v5 );
      v6 = v7;
    }
    if ( v6 )
      return std::_Deallocate<16>(v6, (v9 - (char *)v6) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  return result;
}
