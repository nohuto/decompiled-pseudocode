/*
 * XREFs of ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180530B00
 * Callers:
 *     ?RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180530990 (-RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800F4048 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800F42F8 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F4380 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296D24 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x1802C9160 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D566C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     wil::scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___ @ 0x18030B958 (wil--scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___.c)
 *     wil::details::ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___::_ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___ @ 0x18052E66C (wil--details--ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___--_ScopeExitFn__lambda_b882.c)
 *     ??1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18052E880 (--1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1805315C4 (-StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180531B2C (-Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualD.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x180534AC0 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopManager::RemoveDesktopInternal(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  BOOL v12; // r15d
  __int128 *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  unsigned int i; // ebx
  __int64 v17; // rax
  int updated; // r14d
  __int64 **v19; // rax
  __int64 v20; // rdx
  _QWORD *CurrentDesktopCollection; // rax
  int v22; // eax
  unsigned int SwitcherType; // eax
  __int64 *v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v27; // [rsp+40h] [rbp-C0h] BYREF
  struct IVirtualDesktop *v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[48]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v32[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v33[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v34[3]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v35[42]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v27 = a2;
  v28 = a3;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"VirtualDesktopDestroyedActivity");
  v35[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v35);
  v4 = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
         (CVirtualDesktopManager *)((char *)this - 8),
         (struct IVirtualDesktop *)v27,
         v28);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 13);
    if ( !v8 )
    {
      v5 = -2147417848;
      v6 = 2147549448LL;
      v7 = 1043LL;
      goto LABEL_5;
    }
    v25 = 0LL;
    v9 = *v8;
    v25 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v9 + 24))(v8, &v25);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v12 = SHIsSameObject(v27, *((struct IUnknown **)this + 22));
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 15)
                                                                                           + 32LL))(
              *((_QWORD *)this + 15),
              v27,
              v28);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v13 = (__int128 *)_lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(
                            v34,
                            (__int64)this - 8,
                            (__int64)&v27,
                            (__int64)&v28);
        wil::scope_exit__lambda_4be18ebf708cd778800d3ace51194f58___((__int64)v31, v13);
        v29 = 0;
        v14 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v25 + 24))(v25, &v29);
        v5 = v14;
        if ( v14 >= 0 )
        {
          for ( i = 0; i < v29; ++i )
          {
            v26 = 0LL;
            v17 = *v25;
            v26 = 0LL;
            updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v17 + 32))(
                        v25,
                        i,
                        &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                        &v26);
            if ( updated < 0 )
            {
              v20 = 1062LL;
              goto LABEL_28;
            }
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, struct IUnknown *))(**((_QWORD **)this + 14) + 32LL))(
                   *((_QWORD *)this + 14),
                   v26,
                   v27) )
            {
              updated = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 14)
                                                                                             + 40LL))(
                          *((_QWORD *)this + 14),
                          v26,
                          v28);
              if ( updated < 0 )
              {
                v20 = 1065LL;
                goto LABEL_28;
              }
              if ( v12 )
              {
                wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
                  &v30,
                  (__int64)v28);
                v32[0] = &v30;
                v32[1] = (__int64 *)v31;
                v19 = std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
                        v33,
                        v32);
                updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, v26, v19);
                `eh vector destructor iterator'(
                  (char *)&v30,
                  8LL,
                  1LL,
                  (void (__fastcall *)(char *))wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>);
                if ( updated < 0 )
                {
                  v20 = 1068LL;
LABEL_28:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v20,
                    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                    (const char *)(unsigned int)updated);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
                  wil::details::ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___::_ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___((__int64)v31);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
                  v5 = updated;
                  goto LABEL_39;
                }
              }
              else
              {
                CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this - 8, v33);
                updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, v26, CurrentDesktopCollection);
                if ( updated < 0 )
                {
                  v20 = 1072LL;
                  goto LABEL_28;
                }
              }
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
          }
          if ( v12
            && (v14 = CVirtualDesktopManager::SwitchDesktopInternalPrivate((char *)this - 8, v28, 0LL), v5 = v14, v14 < 0) )
          {
            v15 = 1079LL;
          }
          else
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 12) + 64LL))(
                    *((_QWORD *)this + 12),
                    v27);
            v5 = v14;
            if ( v14 >= 0 )
            {
              v22 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 17) + 56LL))(
                      *((_QWORD *)this + 17),
                      v27);
              if ( v22 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x43E,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                  (const char *)(unsigned int)v22);
              v31[24] = 0;
              v14 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 15) + 48LL))(
                      *((_QWORD *)this + 15),
                      v27,
                      v28);
              v5 = v14;
              if ( v14 >= 0 )
              {
                SwitcherType = CVirtualDesktopManager::GetSwitcherType((__int64)this - 8);
                VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(
                  v35,
                  v27,
                  v28,
                  SwitcherType);
                wil::details::ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___::_ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___((__int64)v31);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
                v5 = 0;
                goto LABEL_39;
              }
              v15 = 1089LL;
            }
            else
            {
              v15 = 1082LL;
            }
          }
        }
        else
        {
          v15 = 1058LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v14);
        wil::details::ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___::_ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___((__int64)v31);
        goto LABEL_9;
      }
      v11 = 1050LL;
    }
    else
    {
      v11 = 1046LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_9:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    goto LABEL_39;
  }
  v6 = (unsigned int)v4;
  v7 = 1042LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v6);
LABEL_39:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::~VirtualDesktopDestroyedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v35);
  return v5;
}
