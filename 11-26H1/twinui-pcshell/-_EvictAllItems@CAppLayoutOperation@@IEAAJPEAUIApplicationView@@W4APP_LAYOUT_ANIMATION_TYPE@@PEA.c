/*
 * XREFs of ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x1806C47C8
 * Callers:
 *     ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x180527160 (-SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C52EC (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180525C30 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C4BB0 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C4C04 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_EvictAllItems(__int64 a1, struct IUnknown *a2, unsigned int a3, char *a4)
{
  int v7; // eax
  char v8; // r14
  int i; // r13d
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v12; // eax
  int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  struct IUnknown *v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-40h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  struct IUnknown *v25; // [rsp+48h] [rbp-30h]
  __int128 v26; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v25 = a2;
  if ( a4 )
    *a4 = 0;
  if ( a3 <= 0xA && (v7 = 1470, _bittest(&v7, a3)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 264LL))(*(_QWORD *)(a1 + 40), 6LL);
    v8 = 0;
    for ( i = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40)); i; --i )
    {
      v10 = *(_QWORD *)(a1 + 40);
      v23 = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v10 + 96LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      v12 = v11(v10, (unsigned int)(i - 1), &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v23);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x144,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_22;
      }
      v14 = v23;
      v22 = 0LL;
      v15 = (*v23)[6];
      v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v22);
      v17 = v15(v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v16);
      v13 = v17;
      if ( v17 < 0 )
      {
        v19 = 326LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
          (const char *)(unsigned int)v17);
LABEL_20:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
LABEL_22:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
        return (unsigned int)v13;
      }
      if ( !v8 && v25 && SHIsSameObject(v22, v25) )
      {
        v24 = 0LL;
        v8 = 1;
        v18 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v23, &v24);
        v13 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14F,
            (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
          goto LABEL_20;
        }
        v26 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v24 + 104LL))(v24, 0LL, &v26);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      }
      else
      {
        v17 = CAppLayoutOperation::_EvictView(a1, v22, a3);
        v13 = v17;
        if ( v17 < 0 )
        {
          v19 = 341LL;
          goto LABEL_19;
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    }
    if ( v8
      || (v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 240LL))(
                  *(_QWORD *)(a1 + 40),
                  0LL,
                  0LL,
                  0LL),
          v13 >= 0) )
    {
      v13 = CAppLayoutOperation::_FinalizeLayout(a1, 1LL);
      if ( v13 >= 0 )
      {
        if ( a4 )
          *a4 = v8;
        return 0LL;
      }
      v20 = 352LL;
    }
    else
    {
      v20 = 349LL;
    }
  }
  else
  {
    v13 = -2147024809;
    v20 = 314LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
