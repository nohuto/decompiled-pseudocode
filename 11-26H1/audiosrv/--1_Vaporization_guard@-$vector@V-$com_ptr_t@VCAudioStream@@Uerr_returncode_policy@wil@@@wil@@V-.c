/*
 * XREFs of ??1_Vaporization_guard@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800CD428
 * Callers:
 *     _std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_counted_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::dtor$2 @ 0x180165157 (_std--vector_wil--com_ptr_t_CAudioStream_wil--err_returncode_policy__std--allocator_wil--com_ptr.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800149BC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Vaporization_guard::~_Vaporization_guard(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
      (__int64 *)a1[3],
      *(__int64 **)(v1 + 8));
    result = a1[1];
    *(_QWORD *)(v1 + 8) = result;
  }
  return result;
}
