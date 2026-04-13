/*
 * XREFs of ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18006338C
 * Callers:
 *     _lambda_83dc6366a20d9229952004eea2bdcbca_::operator() @ 0x1800614CC (_lambda_83dc6366a20d9229952004eea2bdcbca_--operator().c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029E44 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029E68 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DD44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FF78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F9EC (--$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEB.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800609B8 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ??1SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18006119C (--1SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ?GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z @ 0x1800622F8 (-GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x180062CC8 (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z @ 0x180062DEC (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180063F20 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x1800643C8 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x180064478 (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(
        RTL_SRWLOCK *this)
{
  __int64 v2; // r13
  unsigned int v3; // r12d
  const unsigned __int16 *v4; // rdx
  struct _FILETIME *v5; // r9
  _QWORD *Ptr; // r15
  _QWORD *i; // rdi
  CreativeFramework::SubscribedContentStore::Details *v8; // rbx
  CreativeFramework::SubscribedContentStore *v9; // rcx
  const unsigned __int16 *SubscriptionLastUpdated; // rax
  unsigned __int16 **v11; // r8
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // r8
  int BoolSetting; // eax
  __int64 v15; // r14
  __int64 *v16; // rsi
  __int64 *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // [rsp+28h] [rbp-E0h]
  bool v22[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IInspectable *v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v25; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v26[42]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v26,
    (__int64)"SubscriptionManagerContentUpdatedActivity");
  v26[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::StartActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v26);
  AcquireSRWLockExclusive(this + 10);
  v23 = (struct IInspectable *)&this[10];
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)this);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v23);
  v2 = 0LL;
  v3 = 0;
  AcquireSRWLockShared(this + 10);
  v25 = this + 10;
  Ptr = this[11].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v8 = (CreativeFramework::SubscribedContentStore::Details *)(i + 2);
    v2 += (__int64)(*(_QWORD *)(i[6] + 16LL) - *(_QWORD *)(i[6] + 8LL)) >> 3;
    if ( i[5] < 8uLL )
      v9 = (CreativeFramework::SubscribedContentStore *)(i + 2);
    else
      v9 = *(CreativeFramework::SubscribedContentStore **)v8;
    SubscriptionLastUpdated = (const unsigned __int16 *)CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
                                                          v9,
                                                          v4);
    v5 = (struct _FILETIME *)i[6];
    v4 = SubscriptionLastUpdated;
    if ( (unsigned __int64)SubscriptionLastUpdated > v5[4].dwLowDateTime
                                                   + ((unsigned __int64)v5[4].dwHighDateTime << 32) )
    {
      v5[4] = (struct _FILETIME)SubscriptionLastUpdated;
      if ( i[5] >= 8uLL )
        v8 = *(CreativeFramework::SubscribedContentStore::Details **)v8;
      v23 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (void **)&v23,
        0LL);
      CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath(v8, (unsigned __int16 *)&v23, v11);
      v22[0] = 0;
      BoolSetting = CreativeFramework::ContentDeliveryManagerSettings::GetBoolSetting((const WCHAR *)v23, v12, v13, v22);
      if ( BoolSetting < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          443LL,
          (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
          (const char *)(unsigned int)BoolSetting,
          v21);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v23);
      v15 = i[6];
      v16 = *(__int64 **)(v15 + 8);
      v17 = *(__int64 **)(v15 + 16);
      while ( v16 != v17 )
      {
        v18 = *v16;
        v24 = v18;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        v23 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<ContentManagement::TargetedContent::Internal::ISubscriptionPriv>(
                    (Microsoft::WRL::WeakRef *)&v24,
                    &v23) >= 0 )
        {
          LOBYTE(v19) = v22[0];
          v20 = ((__int64 (__fastcall *)(struct IInspectable *, __int64))v23->lpVtbl[1].QueryInterface)(v23, v19);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC6,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
              (const char *)(unsigned int)v20);
          ++v3;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        ++v16;
      }
    }
  }
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v26,
    v2,
    v3,
    (unsigned int)v5,
    v21);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v25);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::~SubscriptionManagerContentUpdatedActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v26);
}
