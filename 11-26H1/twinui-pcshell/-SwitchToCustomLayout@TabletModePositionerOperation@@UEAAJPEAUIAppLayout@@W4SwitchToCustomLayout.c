/*
 * XREFs of ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x180526EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C38F8 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C4C04 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1806C56C8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositionerOperation::SwitchToCustomLayout(__int64 a1, struct IAppLayout *a2, char a3)
{
  char v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, GUID *, __int64 *); // rdi
  __int64 *v16; // rax
  int v17; // eax
  int v18; // eax
  int v20[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v21; // [rsp+38h] [rbp-41h] BYREF
  __int64 v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+48h] [rbp-31h] BYREF
  int v24; // [rsp+50h] [rbp-29h]
  _BYTE v25[16]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v23 = (a1 + 16) & -(__int64)(a1 != 176);
  v6 = 1;
  v24 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v23, 1);
  v7 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), a2, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v21 = 0LL;
    v9 = *(_QWORD *)(a1 - 120);
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 128LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v21);
    v11 = v10(v9, &v21);
    if ( v11 >= 0 )
    {
      memset_0(v25, 0, 0x40uLL);
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v21 + 24LL))(v21, 1LL, v25) >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 184LL))(
                *(_QWORD *)(a1 - 112),
                v26) )
          CAppLayoutOperation::_AddAnimationData(a1 - 152, v26, (a3 & 1) != 0 ? 10 : 5);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC2,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v11);
    }
    *(_DWORD *)(a1 - 72) = 1;
    if ( (a3 & 1) != 0 )
    {
      *(_DWORD *)(a1 - 72) = 65;
      if ( (a3 & 2) == 0 )
      {
        *(_QWORD *)v20 = 0LL;
        v22 = 0LL;
        v12 = *(_QWORD *)(a1 - 112);
        v13 = *(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v12 + 104LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
        if ( v13(v12, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v20) >= 0 )
        {
          v14 = *(_QWORD *)v20;
          v15 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v20 + 48LL);
          v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v22);
          v17 = v15(v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v16);
          if ( v17 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v22);
            *(_DWORD *)(a1 - 72) |= 2u;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xDE,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
              (const char *)(unsigned int)v17);
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
      }
    }
    else
    {
      v6 = 0;
    }
    if ( (a3 & 4) == 0 )
    {
      v18 = *(_DWORD *)(a1 - 72) | 0x10000;
      *(_DWORD *)(a1 - 72) = v18;
      if ( v6 )
        *(_DWORD *)(a1 - 72) = v18 | 0x80000;
    }
    CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v21);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v7);
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v23);
  return v8;
}
