/*
 * XREFs of ?GetLowestLayoutView@TabletModeCoverWindow@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x18050DBBC
 * Callers:
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x18050E15C (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModeCoverWindow::GetLowestLayoutView(
        TabletModeCoverWindow *this,
        struct IApplicationView **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, GUID *, int *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  int i; // r14d
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v21; // rax
  int v22; // eax
  unsigned int j; // esi
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  int v26; // eax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, GUID *, __int64 *); // rdi
  __int64 *v29; // rax
  int v30; // eax
  struct IApplicationView *v31; // rax
  __int64 v33; // [rsp+30h] [rbp-20h] BYREF
  int v34[2]; // [rsp+38h] [rbp-18h] BYREF
  struct IUnknown *v35[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v37; // [rsp+90h] [rbp+40h] BYREF
  __int64 v38; // [rsp+98h] [rbp+48h] BYREF
  struct IUnknown *v39; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+58h] BYREF

  *a2 = 0LL;
  v33 = 0LL;
  v4 = *((_QWORD *)this + 18);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v6 = v5(v4, &v33);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x157,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_34;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 80LL))(v33, 1LL);
  v9 = v8;
  if ( v8 == 1 )
  {
    *(_QWORD *)v34 = 0LL;
    v10 = v33;
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v33 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v34);
    v12 = v11(v10, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v34);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct IApplicationView **))(**(_QWORD **)v34 + 48LL))(
              *(_QWORD *)v34,
              &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
              a2);
      v7 = v12;
      if ( v12 >= 0 )
        goto LABEL_7;
      v13 = 349LL;
    }
    else
    {
      v13 = 348LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v12);
LABEL_7:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v34);
    goto LABEL_34;
  }
  if ( v8 <= 1 )
  {
LABEL_33:
    v7 = -2147467259;
    goto LABEL_34;
  }
  v38 = 0LL;
  v14 = *((_QWORD *)this + 19);
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  v16 = v15(v14, &v38);
  v7 = v16;
  if ( v16 < 0 )
  {
    v17 = 355LL;
    goto LABEL_13;
  }
  v37 = 0;
  v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 24LL))(v38, &v37);
  v7 = v16;
  if ( v16 >= 0 )
  {
    for ( i = v37; i; --i )
    {
      v39 = 0LL;
      v19 = v38;
      v20 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v38 + 32LL);
      v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v39);
      v22 = v20(v19, (unsigned int)(i - 1), &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v21);
      if ( v22 >= 0 )
      {
        for ( j = 0; ; ++j )
        {
          if ( j >= v9 )
            goto LABEL_21;
          v40 = 0LL;
          v24 = v33;
          v25 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v33 + 104LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
          v26 = v25(v24, j, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v40);
          v7 = v26;
          if ( v26 < 0 )
            break;
          v35[0] = 0LL;
          v27 = v40;
          v28 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v40 + 48LL);
          v29 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)v35);
          v30 = v28(v27, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v29);
          v7 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x170,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
              (const char *)(unsigned int)v30);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v35);
LABEL_31:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
            goto LABEL_14;
          }
          if ( SHIsSameObject(v35[0], v39) )
          {
            v31 = (struct IApplicationView *)v39;
            v39 = 0LL;
            *a2 = v31;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v35);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
            v7 = 0;
            goto LABEL_34;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v35);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16E,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_31;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x169,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)v22);
LABEL_21:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
    goto LABEL_33;
  }
  v17 = 357LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v16);
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
LABEL_34:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  return v7;
}
