/*
 * XREFs of ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802DEDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A5F3C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A769C (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800A7BF8 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800A826C (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800A8B0C (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800A93C8 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::CreateEnsuredApplication(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        struct IImmersiveApplicationInternal **a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int ImmersiveApp; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  struct IImmersiveMonitor *v17; // rbx
  CActivationBasedAppAndGlomCollection *v18; // rdi
  int NextGlomId; // eax
  CImmersiveAppFinderByApplication *v20; // rax
  __int64 v21; // r8
  struct IImmersiveApplicationInternal *v22; // rax
  const struct _GUID *v24; // [rsp+28h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  struct IImmersiveApplicationInternal *v26; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IImmersiveApplicationInternal *v29; // [rsp+A0h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v30; // [rsp+B8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  v8 = *((_QWORD *)this + 42);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v10 = v9(v8, 0LL, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &v25);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v30 = 0LL;
    v12 = *((_QWORD *)this + 40);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    ImmersiveApp = v13(
                     v12,
                     0LL,
                     &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                     &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                     &v30);
    v11 = ImmersiveApp;
    if ( ImmersiveApp >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      v17 = v30;
      v18 = (CApplicationManager *)((char *)this + 384);
      NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId((CApplicationManager *)((char *)this + 384), a2);
      ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                       (CApplicationManager *)((char *)this - 240),
                       (CallerIdentity *)a2,
                       a3,
                       NextGlomId,
                       v17,
                       v24,
                       (void **)&v29);
      v11 = ImmersiveApp;
      if ( ImmersiveApp >= 0 )
      {
        ImmersiveApp = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v25 + 48LL))(
                         v25,
                         v29,
                         0LL,
                         0LL,
                         8,
                         0LL);
        v11 = ImmersiveApp;
        if ( ImmersiveApp >= 0 )
        {
          ImmersiveApp = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(v18, (__int64 *)&v29, 0LL);
          v11 = ImmersiveApp;
          if ( ImmersiveApp >= 0 )
          {
            v27 = 0LL;
            v20 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                    (CImmersiveAppFinderByApplication *)&v26,
                    (void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))v29);
            CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
              (__int64)v18,
              v20,
              v21,
              &v27);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
            v26 = v29;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
            v11 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
                    v18,
                    (__int64 *)&v26,
                    v27);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
            if ( v11 >= 0 )
            {
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v29 + 176LL))(v29);
              (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v29 + 544LL))(v29);
              v22 = v29;
              v29 = 0LL;
              *a4 = v22;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
              v11 = 0;
              goto LABEL_16;
            }
            v16 = (unsigned int)v11;
            v15 = 3733LL;
            goto LABEL_6;
          }
          v15 = 3729LL;
        }
        else
        {
          v15 = 3726LL;
        }
      }
      else
      {
        v15 = 3724LL;
      }
    }
    else
    {
      v15 = 3718LL;
    }
    v16 = (unsigned int)ImmersiveApp;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE82,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
  return (unsigned int)v11;
}
