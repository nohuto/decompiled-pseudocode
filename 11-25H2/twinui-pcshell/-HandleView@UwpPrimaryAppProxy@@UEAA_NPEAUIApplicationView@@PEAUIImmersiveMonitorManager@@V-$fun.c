/*
 * XREFs of ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804DE4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x18035B40C (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAUIApplicationView@@@Z @ 0x1804DD2EC (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804DDED4 (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804DF298 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall UwpPrimaryAppProxy::HandleView(__int64 a1, struct IUnknown *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  struct IUnknown *v16; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v17[64]; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v18; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+48h]

  v19 = a4;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) )
  {
    v18 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, RTL_SRWLOCK **))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1,
      &v18);
    if ( v18 )
    {
      v15 = -1LL;
      v9 = -1LL;
      if ( (*((int (__fastcall **)(RTL_SRWLOCK *, __int64 *))v18->Ptr + 6))(v18, &v15) >= 0 )
        v9 = v15;
    }
    else
    {
      v9 = -1LL;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    if ( v9 != -1 )
    {
      wil::AcquireSRWLockExclusive(&v18, (RTL_SRWLOCK *)(a1 + 40));
      if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a1 + 56) )
      {
        *(_QWORD *)(a1 + 72) = v9;
LABEL_9:
        v16 = a2;
        UwpPrimaryAppProxy::FindAppView(a1, (struct IUnknown ***)&v15, a2);
        if ( v15 == *(_QWORD *)(a1 + 56) )
        {
          std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
            a1 + 48,
            (__int64 *)&v16);
          v10 = std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
                  (__int64)v17,
                  a4);
          UwpPrimaryAppProxy::RelayoutAppViewsInternal(a1, a3, v10);
        }
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
        v12 = *(_QWORD *)(a4 + 56);
        if ( v12 )
        {
          LOBYTE(v11) = v12 != a4;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
          *(_QWORD *)(a4 + 56) = 0LL;
        }
        return 1;
      }
      if ( *(_QWORD *)(a1 + 72) == v9 )
        goto LABEL_9;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
    }
  }
  v14 = *(_QWORD *)(a4 + 56);
  if ( v14 )
  {
    LOBYTE(v8) = v14 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v8);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 0;
}
