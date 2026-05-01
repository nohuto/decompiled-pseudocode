/*
 * XREFs of ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F6DF0
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x1802F6BA0 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18002E170 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180084F98 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18010B75C (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180118318 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1802CBEF8 (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x1802F6474 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::EnsureApplication(
        CAppViewManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplicationInternal **a3)
{
  int ViewForSwitchInternal; // eax
  unsigned int v7; // edi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  RTL_SRWLOCK *v22; // [rsp+30h] [rbp-29h] BYREF
  __int64 v23; // [rsp+38h] [rbp-21h] BYREF
  struct IIAMServiceProvider *v24; // [rsp+40h] [rbp-19h] BYREF
  int v25[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v26; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v27[8]; // [rsp+58h] [rbp-1h] BYREF
  char *v28; // [rsp+60h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  *(_QWORD *)v25 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
  ViewForSwitchInternal = CAppViewManager::_GetViewForSwitchInternal(this, 0, a2);
  v7 = ViewForSwitchInternal;
  if ( ViewForSwitchInternal >= 0 )
  {
    v23 = 0LL;
    v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v25;
    v9 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v25;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v10 = v9(v8, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v23);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v24 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))this + 15))(
              *((_QWORD *)this + 15),
              &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
              &v24);
      v7 = v11;
      if ( v11 >= 0 )
      {
        CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
          (CAutoApplicationCreationResourceGuarantee *)v27,
          v24);
        if ( (int)v28 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3CF,
            (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v28);
        v26 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v26);
        CIAMGlobals::AcquireExclusive(v12, &v22);
        v13 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64, struct IImmersiveApplicationInternal **))(**((_QWORD **)this + 15) + 168LL))(
                *((_QWORD *)this + 15),
                a2,
                v26,
                a3);
        v7 = v13;
        if ( v13 >= 0 )
        {
          v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 384LL))(*(_QWORD *)v25);
          if ( v17 )
          {
            LOBYTE(v16) = 1;
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 552LL))(*a3, v16);
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v22);
            CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v27);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
            v22 = 0LL;
            v18 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v22);
            v7 = v18;
            if ( v18 >= 0 )
            {
              v18 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                      v17,
                      0);
              v7 = v18;
              if ( v18 >= 0 )
              {
                v30 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                  &hstringHeader,
                  L"InitialPositionIsForDrag",
                  0x19u,
                  0x18u);
                v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v22, v30, v20, 1);
                v7 = v18;
                if ( v18 >= 0 )
                {
                  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, RTL_SRWLOCK *, _QWORD, _QWORD))(**((_QWORD **)this + 15)
                                                                                                 + 152LL))(
                          *((_QWORD *)this + 15),
                          *a3,
                          v22,
                          0LL,
                          0LL);
                  v7 = v18;
                  if ( v18 >= 0 )
                  {
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
                    v7 = 0;
                    goto LABEL_26;
                  }
                  v19 = 1006LL;
                }
                else
                {
                  v19 = 1002LL;
                }
              }
              else
              {
                v19 = 998LL;
              }
            }
            else
            {
              v19 = 996LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v19,
              (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
              (const char *)(unsigned int)v18);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
            goto LABEL_5;
          }
          v7 = -2147418113;
          v14 = 2147549183LL;
          v15 = 985LL;
        }
        else
        {
          v14 = (unsigned int)v13;
          v15 = 980LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)v14);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v22);
        CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v27);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3CD,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C4,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_5:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C2,
    (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)ViewForSwitchInternal);
LABEL_26:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
  return v7;
}
