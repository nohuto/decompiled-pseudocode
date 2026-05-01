/*
 * XREFs of ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18052F5EC
 * Callers:
 *     ??1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18052E950 (--1VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1805400B0 (--1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1805400DC (--1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180540108 (--1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180540134 (--1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180015FA0 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18017BE4C (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_18017BE4C.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180295924 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        volatile signed __int32 **a1)
{
  char v2; // si
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 *v4; // rcx
  int v5; // eax
  int v6; // edx
  const struct wil::FailureInfo *v7; // rdx
  _BYTE v8[160]; // [rsp+20h] [rbp-A8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+D0h] [rbp+8h] BYREF

  v2 = 1;
  v3 = a1 + 35;
  if ( !a1[35] )
    goto LABEL_6;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &v9);
  if ( !*v3 || **v3 != 1 )
  {
    v2 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v3);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  if ( v2 )
  {
LABEL_6:
    v4 = a1[34];
    if ( *v4 == 1 )
    {
      v5 = -2147024322;
      if ( *((int *)v4 + 22) < 0 )
        v5 = *((_DWORD *)v4 + 22);
      v6 = *((_DWORD *)v4 + 62);
      if ( v6 < 1 )
      {
        memset_0(v8, 0, 0x98uLL);
        wil::details::WilFailFast((wil::details *)v8, v7);
      }
      if ( *((int *)v4 + 18) >= 0 )
        *((_DWORD *)v4 + 18) = v5;
      *((_DWORD *)v4 + 62) = v6 - 1;
      (*((void (__fastcall **)(volatile signed __int32 **))*a1 + 1))(a1);
    }
  }
}
