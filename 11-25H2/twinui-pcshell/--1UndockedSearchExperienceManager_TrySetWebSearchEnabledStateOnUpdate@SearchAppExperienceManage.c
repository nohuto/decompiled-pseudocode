/*
 * XREFs of ??1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A54F8
 * Callers:
 *     _lambda_be0595b4d9b1029e6cb699cd383e8153_::__lambda_be0595b4d9b1029e6cb699cd383e8153_ @ 0x1803A4B2C (_lambda_be0595b4d9b1029e6cb699cd383e8153_--__lambda_be0595b4d9b1029e6cb699cd383e8153_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___::_CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___ @ 0x1803A4C7C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_be0595b4d9b1029e6cb699cd383e8153___--_CTask.c)
 *     _lambda_be0595b4d9b1029e6cb699cd383e8153_::operator() @ 0x1803A5F2C (_lambda_be0595b4d9b1029e6cb699cd383e8153_--operator().c)
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803B1898 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     __lambda_be0595b4d9b1029e6cb699cd383e8153_::operator()_::_1_::dtor$0 @ 0x1806BFE98 (__lambda_be0595b4d9b1029e6cb699cd383e8153_--operator()_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate_::_1_::dtor$0 @ 0x1806C05F9 (_UndockedSearchAppExperienceManager--TrySetWebSearchEnabledStateOnUpdate_--_1_--dtor$0.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18032EAD4 (-LockExclusive@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAA.c)
 *     ?SetUnhandledException@?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1803B03E4 (-SetUnhandledException@-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803B435C (-reset@-$shared_object@V-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_ea_1803B435C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate(
        SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 280);
  v3 = *((_QWORD *)this + 35) == 0LL;
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  v4 = 1;
  if ( v3 )
    goto LABEL_6;
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v5);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  if ( v4 )
  {
LABEL_6:
    if ( **((_DWORD **)this + 34) == 1 )
    {
      wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      (*(void (__fastcall **)(SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
