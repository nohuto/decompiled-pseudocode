/*
 * XREFs of ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180298B04
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180059160 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ??1TaskViewHost@@UEAA@XZ @ 0x1806A5A58 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806A5D68 (--4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _TaskViewHost::Show_::_1_::dtor$1 @ 0x1806D0031 (_TaskViewHost--Show_--_1_--dtor$1.c)
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$20 @ 0x180706CCD (_TaskViewHost--TaskViewHost_--_1_--dtor$20.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180016044 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetUnhandledException@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x18028C4E4 (-SetUnhandledException@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180298C44 (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Para_ea_180298C44.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView(
        XamlSwitcherTelemetry::ShowXamlTaskView *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  _DWORD *v5; // rcx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 280);
  v3 = *((_QWORD *)this + 35) == 0LL;
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  v4 = 1;
  if ( v3 )
    goto LABEL_6;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v6);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
  if ( v4 )
  {
LABEL_6:
    v5 = (_DWORD *)*((_QWORD *)this + 34);
    if ( *v5 == 1 )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(v5);
      (*(void (__fastcall **)(XamlSwitcherTelemetry::ShowXamlTaskView *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
