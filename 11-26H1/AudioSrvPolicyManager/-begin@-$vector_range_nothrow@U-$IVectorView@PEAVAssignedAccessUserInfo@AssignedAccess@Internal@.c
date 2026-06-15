/*
 * XREFs of ?begin@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA?AVvector_iterator_nothrow@12@XZ @ 0x18004B65C
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x18004B15C (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18004B694 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@.c)
 */

__int64 __fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::begin(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
    a1,
    0LL);
  *(_QWORD *)a2 = a1;
  result = a2;
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}
