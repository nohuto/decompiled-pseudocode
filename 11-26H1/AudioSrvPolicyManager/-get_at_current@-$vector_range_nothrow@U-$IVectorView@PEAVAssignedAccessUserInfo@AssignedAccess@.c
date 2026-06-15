/*
 * XREFs of ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18004B694
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x18004B15C (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     ?begin@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA?AVvector_iterator_nothrow@12@XZ @ 0x18004B65C (-begin@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004B630 (-InternalRelease@-$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
        __int64 *a1,
        unsigned int a2)
{
  int *result; // rax
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rsi
  _DWORD *v8; // rdi

  result = (int *)a1[2];
  if ( *result >= 0 && a2 < *((_DWORD *)a1 + 2) )
  {
    v5 = *a1;
    v6 = a1 + 4;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*a1 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo>::InternalRelease(a1 + 4);
    v8 = (_DWORD *)a1[2];
    result = (int *)v7(v5, a2, v6);
    *v8 = (_DWORD)result;
  }
  return result;
}
