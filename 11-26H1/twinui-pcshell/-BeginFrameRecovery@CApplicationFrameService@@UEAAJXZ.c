/*
 * XREFs of ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18022C9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D0E4 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180063EC0 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800A8E78 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C1C60 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800D5B50 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1802C3A50 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1802F9210 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_1802F9210.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x1802F93B0 (Windows--Internal--ComTaskPool--QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::BeginFrameRecovery(CApplicationFrameService *this)
{
  int v2; // esi
  CCriticalFailureHandler *v3; // rcx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rdi
  CCriticalFailureHandler *v6; // rcx
  CCriticalFailureHandler *v7; // rcx
  unsigned int i; // r15d
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rdi
  unsigned __int16 **v11; // r8
  int ImmersiveAppIdFromWindow; // ebx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  HWND PropW; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 *v20; // [rsp+20h] [rbp-60h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-58h]
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  CApplicationFrameWrapper *v23; // [rsp+38h] [rbp-48h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  struct HWND__ v26[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h] BYREF
  char *v31; // [rsp+78h] [rbp-8h] BYREF
  HWND v32; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0;
  if ( FindWindowW(L"ApplicationFrameWindow", 0LL) )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v2 = CApplicationFrameService::_EnsureFrameManager((__int64)this - 40, 0, (unsigned __int64 *)&v22);
    LODWORD(v32) = v2;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v32);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v2 = (int)v32;
    }
    if ( v2 >= 0 )
      goto LABEL_9;
    if ( v2 != -2147024882 && v2 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v32,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x218u,
        v20,
        v21);
      v2 = (int)v32;
    }
    if ( v2 >= 0 )
    {
LABEL_9:
      v25 = 0LL;
      v4 = v22;
      v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      v2 = v5(v4, &v25);
      LODWORD(v32) = v2;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v6, (int *)&v32);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v2 = (int)v32;
      }
      if ( v2 >= 0 )
        goto LABEL_16;
      if ( v2 != -2147024882 && v2 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v6,
          (int *)&v32,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x228u,
          v20,
          v21);
        v2 = (int)v32;
      }
      if ( v2 >= 0 )
      {
LABEL_16:
        v33 = 0;
        v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 24LL))(v25, &v33);
        LODWORD(v32) = v2;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v7, (int *)&v32);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v2 = (int)v32;
        }
        if ( v2 >= 0 )
          goto LABEL_23;
        if ( v2 != -2147024882 && v2 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v7,
            (int *)&v32,
            L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
            0x22Cu,
            v20,
            v21);
          v2 = (int)v32;
        }
        if ( v2 >= 0 )
        {
LABEL_23:
          for ( i = 0; i < v33; ++i )
          {
            v34 = 0LL;
            v9 = v25;
            v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v25 + 32LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
            if ( v10(v9, i, &GUID_143715d9_a015_40ea_b695_d5cc267e36ee, &v34) >= 0 )
            {
              hWnd = 0LL;
              if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v34 + 24LL))(v34, &hWnd) < 0 )
                goto LABEL_40;
              *(_QWORD *)&v26[0].unused = 0LL;
              v27 = 0LL;
              v28 = 0LL;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v26);
              v27 = -1LL;
              v28 = -1LL;
              ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow((CallerIdentity *)hWnd, v26, v11);
              if ( ImmersiveAppIdFromWindow >= 0 )
              {
                LODWORD(v32) = (unsigned int)GetPropW(hWnd, L"LastSetGlomIdForReconstitution");
                v23 = 0LL;
                v29 = v34;
                v30 = v22;
                v31 = (char *)this - 40;
                Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v23);
                ImmersiveAppIdFromWindow = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
                                             (unsigned int)&v23,
                                             (unsigned int)&v31,
                                             (unsigned int)&v30,
                                             (unsigned int)&v29,
                                             (__int64)v26,
                                             (__int64)&v32);
                if ( ImmersiveAppIdFromWindow >= 0 )
                {
                  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                  if ( CApplicationFrameWrapper::IsManagedBy(v23, *((struct IApplicationFrameManager **)this + 17)) )
                  {
                    ImmersiveAppIdFromWindow = 0;
                    v13 = *((_QWORD *)this + 9);
                    if ( v13 != *((_QWORD *)this + 11)
                      || (ImmersiveAppIdFromWindow = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::_EnsureCapacity(
                                                       (__int64)this + 64,
                                                       v13 + 1),
                          ImmersiveAppIdFromWindow >= 0) )
                    {
                      v14 = (__int64 *)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
                      if ( v14 )
                      {
                        *v14 = (__int64)v23;
                        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v14);
                      }
                    }
                  }
                  else
                  {
                    ImmersiveAppIdFromWindow = -2147024809;
                  }
                  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                }
                Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v23);
                if ( ImmersiveAppIdFromWindow >= 0 )
                {
                  PropW = (HWND)GetPropW(hWnd, L"ModalExperienceWindowProp");
                  if ( PropW )
                  {
                    if ( !IsWindow(PropW) )
                    {
                      v32 = hWnd;
                      Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(
                        v17,
                        v16,
                        v18,
                        &v32);
                    }
                  }
                }
              }
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v26);
              if ( ImmersiveAppIdFromWindow < 0 )
LABEL_40:
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 40LL))(v22, v34);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
          }
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      if ( v2 >= 0 )
        *((_BYTE *)this + 184) = 1;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  }
  return (unsigned int)v2;
}
