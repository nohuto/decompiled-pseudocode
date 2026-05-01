/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1806A807C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1806A4FEC (--$_Emplace_reallocate@AEBV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18017FC54 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(
      v6,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
