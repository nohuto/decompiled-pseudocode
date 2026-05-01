/*
 * XREFs of ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804DF510
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x18035B40C (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804DDED4 (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804DF298 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804DFD04 (-erase@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UwpPrimaryAppProxy::RemoveView(RTL_SRWLOCK *a1, struct IUnknown *a2, __int64 *a3, __int64 a4)
{
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct IUnknown **v14; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v15[96]; // [rsp+28h] [rbp-60h] BYREF
  RTL_SRWLOCK *v16; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h]

  v17 = a4;
  wil::AcquireSRWLockExclusive(&v16, a1 + 5);
  UwpPrimaryAppProxy::FindAppView((__int64)a1, &v14, a2);
  if ( v14 == a1[7].Ptr )
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
    v13 = *(_QWORD *)(a4 + 56);
    if ( v13 )
    {
      LOBYTE(v12) = v13 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 0;
  }
  else
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase(&a1[6], &v14);
    if ( a1[6].Ptr == a1[7].Ptr )
    {
      a1[9].Ptr = (PVOID)-1LL;
    }
    else
    {
      v8 = (__int64 *)std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
                        (__int64)v15,
                        a4);
      UwpPrimaryAppProxy::RelayoutAppViewsInternal((__int64)a1, a3, v8);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
    v10 = *(_QWORD *)(a4 + 56);
    if ( v10 )
    {
      LOBYTE(v9) = v10 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v9);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 1;
  }
}
