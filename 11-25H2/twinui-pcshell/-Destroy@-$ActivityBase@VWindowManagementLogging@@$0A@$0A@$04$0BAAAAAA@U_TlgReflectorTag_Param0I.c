/*
 * XREFs of ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800482E4
 * Callers:
 *     ??1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x18004828C (--1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ??1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ @ 0x1800482B8 (--1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ.c)
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800498A0 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ??1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x1802CD33C (--1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ??1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18057A3BC (--1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18057A414 (--1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180015FA0 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetUnhandledException@?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x180048374 (-SetUnhandledException@-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801F83D0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1801F83D0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        __int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 280);
  v3 = 1;
  if ( !*(_QWORD *)(a1 + 280) )
    goto LABEL_2;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v4);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
  if ( v3 )
  {
LABEL_2:
    if ( **(_DWORD **)(a1 + 272) == 1 )
    {
      wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
}
