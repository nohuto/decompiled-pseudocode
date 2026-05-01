/*
 * XREFs of ?GetActiveViews@UwpAppPackageInfo@@QEAA?AV?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18054E9F0
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18054ED10 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180491A04 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpAppPackageInfo::GetActiveViews(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // r8
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *j; // rcx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v3 = **(__int64 ***)(a1 + 32);
  while ( !*((_BYTE *)v3 + 25) )
  {
    v4 = v3 + 4;
    if ( *(_DWORD *)v3[5] != 1 )
    {
      if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)(a2 + 16) )
      {
        std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const &>(
          (__int64 **)a2,
          *(__int64 **)(a2 + 8),
          v4);
      }
      else
      {
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          *(_QWORD **)(a2 + 8),
          *v4);
        *(_QWORD *)(a2 + 8) += 8LL;
      }
    }
    v5 = (__int64 **)v3[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25) && v3 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v3 = i;
      v3 = i;
    }
    else
    {
      v3 = (__int64 *)v3[2];
      for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v3 = j;
    }
  }
  return a2;
}
