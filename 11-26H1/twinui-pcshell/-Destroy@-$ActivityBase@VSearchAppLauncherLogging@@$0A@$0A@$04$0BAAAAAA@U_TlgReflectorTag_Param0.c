/*
 * XREFs of ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180187570
 * Callers:
 *     ??1UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801872D4 (--1UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetr.c)
 *     ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180187518 (--1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180187544 (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801876E0 (-reset@-$shared_object@V-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801CED54 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  RTL_SRWLOCK *v3; // rbx
  char v4; // bp
  RTL_SRWLOCK *v5; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 35;
  v3 = (RTL_SRWLOCK *)a1[35];
  v4 = 1;
  if ( !v3 )
    goto LABEL_9;
  v5 = v3 + 33;
  AcquireSRWLockExclusive(v5);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v4 )
  {
LABEL_9:
    v6 = (_DWORD *)a1[34];
    if ( *v6 == 1 )
    {
      v8 = v6[22];
      v7 = 2147942974LL;
      if ( v8 < 0 )
        v7 = (unsigned int)v8;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v6,
        v7,
        &v8);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
