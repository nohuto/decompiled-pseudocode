/*
 * XREFs of ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1801F66FC
 * Callers:
 *     ?EnumerateExistingViews@AppUsageTracker@@UEAAXXZ @ 0x180571450 (-EnumerateExistingViews@AppUsageTracker@@UEAAXXZ.c)
 *     ?OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180571800 (-OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801BF714 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ??$DebugInfo@AEAY0CK@$$CBG@AppUsageTelemetry@@SAXAEAY0CK@$$CBG@Z @ 0x180571040 (--$DebugInfo@AEAY0CK@$$CBG@AppUsageTelemetry@@SAXAEAY0CK@$$CBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall AppUsageTracker::UpdateViewState(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  bool v6; // r14
  __int64 v7[2]; // [rsp+30h] [rbp-10h] BYREF
  void (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // [rsp+78h] [rbp+38h] BYREF
  int v9; // [rsp+80h] [rbp+40h] BYREF
  __int64 v10; // [rsp+88h] [rbp+48h] BYREF

  v8 = a2;
  if ( a3
    || (v9 = 0, ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *), int *))(*a2)[27])(a2, &v9), v9) )
  {
    v6 = *(_DWORD *)(a1 + 104) == 1;
    v10 = 0LL;
    (**a2)(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v10);
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 80) + 24LL))(
        *(_QWORD *)(a1 + 80),
        a2,
        a3,
        *(_QWORD *)(a1 + 96),
        v6);
    }
    else
    {
      wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(v7, &v8);
      if ( v7[0] )
        (*(void (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 88) + 24LL))(
          *(_QWORD *)(a1 + 88),
          a2,
          a3,
          *(_QWORD *)(a1 + 96),
          v6);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v7);
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[42]>();
  }
}
