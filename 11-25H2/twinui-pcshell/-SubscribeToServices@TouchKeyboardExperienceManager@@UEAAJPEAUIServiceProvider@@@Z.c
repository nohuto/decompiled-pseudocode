/*
 * XREFs of ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18004AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001E768 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001EF84 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001F080 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1800496FC (-StartActivity@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetr.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B0E94 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18023D058 (--1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEA.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1802D8D8C (IsQueryWin32SubsystemHostPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::SubscribeToServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, SID *, GUID *, char *); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, SID *, GUID *, char *); // rdi
  _QWORD *v16; // r12
  int v17; // eax
  __int64 v18; // rcx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v20; // eax
  __int64 v21; // rcx
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v23; // rdi
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v25; // rdx
  __int64 v26[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v27[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() && (unsigned int)QueryWin32SubsystemHost() == 1 )
    return 0LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v27,
    (__int64)"TouchKeyboardExperienceManagerSubscribeToServices");
  v27[0] = &TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::`vftable';
  TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::StartActivity((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *)v27);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((char *)this + 288, a2);
  v5 = *((_QWORD *)this + 36);
  v6 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v5 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 41);
  v7 = v6(v5, &SID_ProcessLifetimeManagerControl, &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d, (char *)this + 328);
  v8 = v7;
  if ( v7 >= 0 )
  {
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 408);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v26[0] = 0LL;
      v11 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v26);
      v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v11)(
              a2,
              &SID_IImmersiveMonitorService,
              &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
              v26);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v14 = v26[0];
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v26[0] + 72LL);
        v16 = (_QWORD *)((char *)this + 296);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 37);
        v17 = v15(v14, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c, (char *)this + 296);
        v8 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBCD,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v17);
          v18 = v26[0];
          if ( v26[0] )
          {
            v26[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          goto LABEL_22;
        }
        v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 51) + 40LL))(
                *((_QWORD *)this + 51),
                ((unsigned __int64)this + 72) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                (char *)this + 232);
        v8 = v12;
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v16 + 40LL))(
                  *v16,
                  10LL,
                  ((unsigned __int64)this + 80) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                  (char *)this + 236);
          v8 = v12;
          if ( v12 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v16 + 72LL))(*v16, (char *)this + 424);
            v19 = a2->lpVtbl->QueryService;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
            v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v19)(
                    a2,
                    &SID_InputHostLayout,
                    &GUID_260b6f30_f9bc_452d_be7e_d8bdc0ea3a0a,
                    (char *)this + 304);
            v8 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xBD6,
                (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                (const char *)(unsigned int)v20);
              v21 = v26[0];
              if ( v26[0] )
              {
                v26[0] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              }
              goto LABEL_22;
            }
            v22 = a2->lpVtbl->QueryService;
            v23 = (_QWORD *)((char *)this + 312);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 39);
            v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v22)(
                    a2,
                    &IID_IImmersiveWindowMessageService,
                    &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                    (char *)this + 312);
            v8 = v12;
            if ( v12 >= 0 )
            {
              v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v23 + 24LL))(
                      *v23,
                      26LL,
                      ((unsigned __int64)this + 88) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                      (char *)this + 244);
              v8 = v12;
              if ( v12 >= 0 )
              {
                v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v23 + 24LL))(
                        *v23,
                        126LL,
                        ((unsigned __int64)this + 88) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
                        (char *)this + 248);
                v8 = v12;
                if ( v12 >= 0 )
                {
                  v24 = a2->lpVtbl->QueryService;
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 40);
                  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v24)(
                          a2,
                          &winrt::impl::guid_v<IGlobalRudeWindowNotificationService>,
                          &GUID_a240bbbd_d294_480c_8d38_3786056363f1,
                          (char *)this + 320);
                  v8 = v12;
                  if ( v12 >= 0 )
                  {
                    if ( this == (TouchKeyboardExperienceManager *)48 )
                      v25 = 0LL;
                    else
                      v25 = (char *)this + 120;
                    v12 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 40) + 24LL))(
                            *((_QWORD *)this + 40),
                            v25,
                            (char *)this + 252);
                    v8 = v12;
                    if ( v12 >= 0 )
                    {
                      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
                        v27,
                        0LL);
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v26);
                      v8 = 0;
                      goto LABEL_37;
                    }
                    v13 = 3036LL;
                  }
                  else
                  {
                    v13 = 3035LL;
                  }
                }
                else
                {
                  v13 = 3034LL;
                }
              }
              else
              {
                v13 = 3033LL;
              }
            }
            else
            {
              v13 = 3032LL;
            }
          }
          else
          {
            v13 = 3026LL;
          }
        }
        else
        {
          v13 = 3023LL;
        }
      }
      else
      {
        v13 = 3020LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC6,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_37:
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::~TouchKeyboardExperienceManagerSubscribeToServices((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *)v27);
    return v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBC4,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_22:
  v27[0] = &TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v27);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v27);
  return v8;
}
