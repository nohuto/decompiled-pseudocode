/*
 * XREFs of ?DelayedInitialization@CAppViewManager@@UEAAJXZ @ 0x1800787E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180074750 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAppViewManager::DelayedInitialization(CAppViewManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  int (__fastcall *v4)(__int64, __int64 *); // rdi
  unsigned int i; // esi
  __int64 v6; // rcx
  HRESULT v7; // eax
  unsigned int v8; // ebx
  void *v9; // rcx
  __int64 v10; // rcx
  void *v12; // rbx
  __int64 (__fastcall *v13)(void *, char *); // rsi
  int v14; // eax
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v19; // rax
  struct IImmersiveApplication **v20; // r8
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h] BYREF
  ApplicationViewHelpers *v23[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  unsigned int v25; // [rsp+90h] [rbp+38h] BYREF
  int v26; // [rsp+98h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+50h] BYREF

  v28 = 0LL;
  v2 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v28);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (void **)v2) >= 0 )
  {
    v21 = 0LL;
    v3 = v28;
    v4 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    if ( v4(v3, &v21) >= 0 )
    {
      v25 = 0;
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v25) >= 0 )
      {
        for ( i = 0; i < v25; ++i )
        {
          v23[0] = 0LL;
          v17 = v21;
          v18 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 32LL);
          v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)v23);
          if ( v18(v17, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v19) >= 0 )
          {
            v26 = 0;
            if ( (*(int (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)v23[0] + 216LL))(v23[0], &v26) < 0
              || !v26 )
            {
              v22 = 0LL;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
              if ( (int)ApplicationViewHelpers::GetApplicationFromView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v23[0],
                          (struct IApplicationView *)&v22,
                          v20) >= 0 )
                (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 4) + 32LL))(
                  (char *)this + 32,
                  v22,
                  2LL);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v23);
        }
      }
    }
    v6 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v7 = IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &ppvOut);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x197,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    v9 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v8;
  }
  v12 = ppvOut;
  v13 = *(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)ppvOut + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  v14 = v13(v12, (char *)this + 152);
  v8 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x198,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v14);
    v15 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v8;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  return 0LL;
}
