/*
 * XREFs of ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x1806A0D00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801ADC70 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18069DD78 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAppLayoutItem::IsEqual(
        CAppLayoutItem *this,
        int (__fastcall ***a2)(struct IAppLayoutItem *, GUID *, __int64 *))
{
  BOOL v4; // esi
  int (__fastcall *v5)(struct IAppLayoutItem *, GUID *, __int64 *); // rbx
  int (__fastcall *v6)(char *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int (__fastcall *v8)(struct IAppLayoutItem *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  RTL_SRWLOCK *v10; // rax
  RTL_SRWLOCK *v11; // rax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, GUID *, __int64 *); // rdi
  __int64 *v14; // rax
  const struct APPLICATION_VIEW_DATA *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-31h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-29h] BYREF
  RTL_SRWLOCK *v20; // [rsp+38h] [rbp-21h] BYREF
  RTL_SRWLOCK *v21; // [rsp+40h] [rbp-19h] BYREF
  RECT rc2; // [rsp+48h] [rbp-11h] BYREF
  _OWORD v23[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v24; // [rsp+78h] [rbp+1Fh]

  v4 = 0;
  v17 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  if ( v5((struct IAppLayoutItem *)a2, &GUID_972224dc_7815_4df5_9adc_96bd3e7902fd, &v17) >= 0 )
  {
    v19 = 0LL;
    v18 = 0LL;
    v6 = (int (__fastcall *)(char *, GUID *, __int64 *))**((_QWORD **)this - 1);
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v19);
    if ( v6((char *)this - 8, &GUID_00000000_0000_0000_c000_000000000046, v7) >= 0 )
    {
      v8 = **a2;
      v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v18);
      if ( v8((struct IAppLayoutItem *)a2, &GUID_00000000_0000_0000_c000_000000000046, v9) >= 0 )
      {
        v21 = 0LL;
        v20 = 0LL;
        if ( v18 > v19 )
        {
          v11 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
          Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&rc2, v11);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
            &v20,
            (RTL_SRWLOCK **)&rc2);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&rc2);
          Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&rc2, (RTL_SRWLOCK *)this + 3);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
            &v21,
            (RTL_SRWLOCK **)&rc2);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&rc2);
        }
        else
        {
          Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&rc2, (RTL_SRWLOCK *)this + 3);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
            &v21,
            (RTL_SRWLOCK **)&rc2);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&rc2);
          if ( v19 != v18 )
          {
            v10 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
            Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)&rc2, v10);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::operator=(
              &v20,
              (RTL_SRWLOCK **)&rc2);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&rc2);
          }
        }
        if ( *((_DWORD *)this + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17)
          && *((_DWORD *)this + 4) == ((unsigned int (__fastcall *)(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, __int64 *)))(*a2)[4])(a2) )
        {
          v4 = 1;
          if ( *((_DWORD *)this + 8) != 1 )
            goto LABEL_14;
          *(_QWORD *)&rc2.left = 0LL;
          v12 = v17;
          v13 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v17 + 32LL);
          v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&rc2.left);
          if ( v13(v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v14) >= 0 )
            v4 = SHIsSameObject(*(struct IUnknown **)&rc2.left, *((struct IUnknown **)this + 5));
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&rc2.left);
          if ( v4 )
          {
LABEL_14:
            rc2 = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v17 + 40LL))(v17, 0LL, &rc2);
            v4 = EqualRect((const RECT *)this + 3, &rc2);
            if ( v4 )
            {
              rc2 = 0LL;
              (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v17 + 40LL))(v17, 1LL, &rc2);
              v4 = EqualRect((const RECT *)this + 4, &rc2);
              if ( v4 )
              {
                memset(v23, 0, sizeof(v23));
                v24 = 0LL;
                (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v17 + 48LL))(v17, v23);
                v4 = ImmersiveApplicationLayout::AreAppViewDataEqual(
                       (CAppLayoutItem *)((char *)this + 80),
                       (const struct APPLICATION_VIEW_DATA *)v23,
                       v15);
              }
            }
          }
        }
        else
        {
          v4 = 0;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v20);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v21);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  return v4;
}
