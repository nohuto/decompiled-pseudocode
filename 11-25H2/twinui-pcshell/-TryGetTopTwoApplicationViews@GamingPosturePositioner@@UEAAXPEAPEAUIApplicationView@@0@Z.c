/*
 * XREFs of ?TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z @ 0x1804E5090
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802CC564 (-_Tidy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ?GetLastViews@ApplicationViewCollection@@QEAA?AV?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x1804E28C4 (-GetLastViews@ApplicationViewCollection@@QEAA-AV-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_ex.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::TryGetTopTwoApplicationViews(
        GamingPosturePositioner *this,
        struct IApplicationView **a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v5; // rcx
  struct IApplicationView **v6; // rax
  struct IApplicationView *v7; // rcx
  struct IApplicationView *v8; // rcx
  const char *v9; // r9
  struct IApplicationView **v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0LL;
  if ( !*((_BYTE *)this + 616) )
    return;
  v5 = (RTL_SRWLOCK *)((char *)this + 664);
  try
  {
    ApplicationViewCollection::GetLastViews(v5, (__int64 **)&v10);
    v6 = v10;
    if ( v11 - (_QWORD)v10 == 8 )
    {
      v7 = *v10;
      if ( *v10 )
      {
        *a2 = v7;
LABEL_13:
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 8LL))(v7);
        goto LABEL_15;
      }
      *a2 = 0LL;
    }
    else if ( v11 - (_QWORD)v10 == 16 )
    {
      v8 = *v10;
      if ( *v10 )
      {
        *a2 = v8;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v8 + 8LL))(v8);
        v6 = v10;
      }
      else
      {
        *a2 = 0LL;
      }
      v7 = v6[1];
      if ( !v7 )
      {
        *a3 = 0LL;
        goto LABEL_15;
      }
      *a3 = v7;
      goto LABEL_13;
    }
LABEL_15:
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy((__int64)&v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1D4,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v9);
  }
}
