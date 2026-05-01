/*
 * XREFs of ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18051B810
 * Callers:
 *     ??$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedback@@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18051AA44 (--$MakeAndInitialize@VCDropFeedback@@V1@AEAPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@AEAW4DR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x1802360C0 (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180519FB4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_RegisterWindowClass@CDropFeedback@@AEAAXXZ @ 0x18051C6D4 (-_RegisterWindowClass@CDropFeedback@@AEAAXXZ.c)
 *     ?_SetThreadPriority@CDropFeedback@@AEAAX_N@Z @ 0x18051C770 (-_SetThreadPriority@CDropFeedback@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::RuntimeClassInitialize(__int64 a1, IUnknown *a2, __int64 a3, int a4)
{
  void **v4; // rbx
  const struct _GUID *v7; // rcx
  int Instance; // ebx
  __int64 v9; // rdx
  const struct _GUID *v10; // rcx
  CDropFeedback *v11; // rcx
  int v12; // r12d
  HWND WindowInBand; // rax
  const char *v14; // r9
  HWND v15; // r14
  LONG_PTR WindowLongPtrW; // rax
  int v18; // r9d
  int cy; // eax
  int v20; // r13d
  int v21; // r8d
  HRESULT v22; // eax
  __int64 v23; // rdx
  void *v24; // rbx
  __int64 (__fastcall *v25)(void *, HWND, __int64, __int64); // rdi
  __int64 v26; // r9
  DCompThumbnailHelpers **v27; // r14
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, _QWORD, __int64, GUID *, __int64); // rbx
  __int64 v30; // r13
  _QWORD *v31; // rbx
  int DesktopBackgroundThumbnail; // eax
  int v33; // edi
  __int64 v34; // r8
  DCompThumbnailHelpers *v35; // rdi
  _QWORD *v36; // r14
  __int64 (__fastcall *v37)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, __int64); // rbx
  DWORD SysColor; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // [rsp+70h] [rbp-9h]
  __int64 v42; // [rsp+70h] [rbp-9h]
  void *ppvOut; // [rsp+78h] [rbp-1h] BYREF
  IUnknown *punk; // [rsp+80h] [rbp+7h]
  int v45; // [rsp+88h] [rbp+Fh] BYREF
  int v46; // [rsp+8Ch] [rbp+13h]
  int v47; // [rsp+90h] [rbp+17h]
  int v48; // [rsp+94h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = (void **)(a1 + 128);
  *(_DWORD *)(a1 + 120) = a4;
  punk = a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 128));
  Instance = CDropFeedbackList_CreateInstance(v7, v4);
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 136));
    Instance = CDropFeedbackList_CreateInstance(v10, (void **)(a1 + 136));
    if ( Instance < 0 )
    {
      v9 = 108LL;
      goto LABEL_3;
    }
    CDropFeedback::_RegisterWindowClass(v11);
    v12 = *(_DWORD *)(a1 + 120) & 8;
    WindowInBand = (HWND)CreateWindowInBand(
                           136315008LL,
                           L"ImmersiveDropFeedback",
                           &LocaleName,
                           0x80000000LL,
                           0,
                           0,
                           0,
                           0,
                           0LL,
                           0LL,
                           &_ImageBase,
                           a1,
                           v12 != 0 ? 1 : 5);
    v15 = WindowInBand;
    if ( !WindowInBand )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x7D,
               (unsigned int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
               v14);
    WindowLongPtrW = GetWindowLongPtrW(WindowInBand, -20);
    if ( (WindowLongPtrW & 0x400000) != 0 )
      SetWindowLongPtrW(v15, -20, WindowLongPtrW & 0xFFFFFFFFFFBFFFFFuLL);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a3 + 32);
    v18 = *(_DWORD *)(a1 + 76);
    cy = *(_DWORD *)(a1 + 84) - v18;
    v20 = *(_DWORD *)(a1 + 80) - *(_DWORD *)(a1 + 72);
    v21 = *(_DWORD *)(a1 + 72);
    v41 = cy;
    if ( v12 )
      SetWindowPos(v15, 0LL, v21, v18, v20, cy, 0x14u);
    else
      SetWindowPos(v15, (HWND)1, v21, v18, v20, cy, 0x10u);
    CDropFeedback::_SetThreadPriority((CDropFeedback *)a1, 1);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v22 = IUnknown_QueryService(punk, &stru_180789898, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
    Instance = v22;
    if ( v22 >= 0 )
    {
      v24 = ppvOut;
      v25 = *(__int64 (__fastcall **)(void *, HWND, __int64, __int64))(*(_QWORD *)ppvOut + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 144));
      v22 = v25(v24, v15, 1LL, a1 + 144);
      Instance = v22;
      if ( v22 >= 0 )
      {
        v27 = (DCompThumbnailHelpers **)(a1 + 144);
        LOBYTE(v26) = -1;
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 144) + 136LL))(
          *(_QWORD *)(a1 + 144),
          4LL,
          0xFFFFFFLL,
          v26);
        v28 = *(_QWORD *)(a1 + 144);
        v45 = 0;
        v46 = 0;
        v47 = v20;
        v48 = v41;
        v29 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)v28 + 112LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 160));
        LODWORD(v42) = v47 - v45;
        HIDWORD(v42) = v48 - v46;
        v22 = v29(v28, 0LL, v42, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 160);
        Instance = v22;
        if ( v22 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 24LL))(
            *(_QWORD *)(a1 + 160),
            &v45,
            0LL,
            0LL);
          v30 = 0LL;
          if ( !v12 )
          {
            v31 = (_QWORD *)(a1 + 168);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 168));
            DesktopBackgroundThumbnail = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                                           *v27,
                                           0LL,
                                           (struct IDCompThumbnail *)(a1 + 72),
                                           0LL,
                                           (const struct tagSIZE *)(a1 + 168));
            v33 = DesktopBackgroundThumbnail;
            if ( DesktopBackgroundThumbnail < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xAB,
                (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
                (const char *)(unsigned int)DesktopBackgroundThumbnail);
              Instance = v33;
              goto LABEL_27;
            }
            (*(void (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(*(_QWORD *)*v31 + 24LL))(*v31, &v45, 0LL, 0LL);
            LOBYTE(v34) = 1;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v31 + 152LL))(*v31, 0LL, v34);
            v30 = *v31;
          }
          v35 = *v27;
          v36 = (_QWORD *)(a1 + 176);
          v37 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)v35 + 104LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 176));
          SysColor = GetSysColor(8);
          v22 = v37(v35, 0LL, SysColor, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 176);
          Instance = v22;
          if ( v22 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v36 + 32LL))(*v36, v39, 0LL, 0LL);
            (*(void (__fastcall **)(_QWORD, int *, _QWORD, _QWORD))(*(_QWORD *)*v36 + 24LL))(*v36, &v45, 0LL, 0LL);
            LOBYTE(v40) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v36 + 152LL))(*v36, v30, v40);
            Instance = (*(__int64 (__fastcall **)(__int64, IUnknown *))(*(_QWORD *)a1 + 24LL))(a1, punk);
            goto LABEL_27;
          }
          v23 = 179LL;
        }
        else
        {
          v23 = 162LL;
        }
      }
      else
      {
        v23 = 156LL;
      }
    }
    else
    {
      v23 = 155LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
      (const char *)(unsigned int)v22);
LABEL_27:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    return (unsigned int)Instance;
  }
  v9 = 107LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedback.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
