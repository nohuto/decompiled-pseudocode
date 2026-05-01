/*
 * XREFs of ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x18052C250
 * Callers:
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18052A220 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x18052CA30 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$As@UIObjectArray@@@?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805272DC (--$As@UIObjectArray@@@-$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180528B88 (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 *     ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18052AB0C (-QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrange.c)
 *     ?UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z @ 0x18052C8FC (-UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18053CCF8 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowArrangementView::UpdateDropFeedback(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // r12d
  const struct _GUID *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // r14d
  __int64 v22; // rbx
  int (__fastcall *v23)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v24; // rbx
  int (__fastcall *v25)(__int64, GUID *, __int64 *); // rdi
  __int64 *v26; // rax
  void *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // ebx
  int v32; // eax
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, _QWORD, __int64 *, _QWORD); // rdi
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rdi
  void (__fastcall *v38)(__int64, __int64 *, _QWORD); // rbx
  __int64 v39; // rcx
  __int64 v40; // rdi
  void (__fastcall *v41)(__int64, _QWORD, __int64 *, _QWORD); // rbx
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v48; // [rsp+30h] [rbp-D0h] BYREF
  void *v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v51)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown *v55; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v57[16]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v58; // [rsp+90h] [rbp-70h]
  _BYTE v59[40]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v63[16]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v6 = 16;
  v49 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
  v8 = CDropFeedbackList_CreateInstance(v7, &v49);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DB,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_58;
  }
  if ( a2 != 5 )
  {
    v51 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v51);
    v15 = WindowArrangementView::QueryArrangeView(a1, *(_QWORD *)(a1 + 88), a2, &v51);
    v9 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EE,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v15);
LABEL_13:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v51);
      goto LABEL_58;
    }
    v50 = 0LL;
    v16 = v51;
    v17 = (*v51)[6];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
    v18 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v17)(v16, &v50);
    v9 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F1,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v18);
LABEL_16:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
      goto LABEL_13;
    }
    v54 = 0LL;
    v19 = Microsoft::WRL::ComPtr<IAppLayoutOperation>::As<IObjectArray>(&v51, &v54);
    v9 = v19;
    if ( v19 < 0 )
    {
      v20 = 1268LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
      goto LABEL_16;
    }
    v53 = 0;
    v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v54 + 24LL))(v54, &v53);
    v9 = v19;
    if ( v19 < 0 )
    {
      v20 = 1271LL;
      goto LABEL_19;
    }
    v21 = 0;
    if ( !v53 )
    {
LABEL_48:
      v10 = a1 + 120;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 120));
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v50);
      *(_QWORD *)(a1 + 120) = v50;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v50);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v51);
      goto LABEL_49;
    }
    while ( 1 )
    {
      v48 = 0LL;
      v22 = v54;
      v23 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v54 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v48);
      if ( v23(v22, v21, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v48) >= 0 )
        break;
LABEL_47:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v48);
      if ( ++v21 >= v53 )
        goto LABEL_48;
    }
    v55 = 0LL;
    v24 = v48;
    v25 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v48 + 32LL);
    v26 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v55);
    if ( v25(v24, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v26) >= 0 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v48 + 72LL))(v48, 0LL, &v61);
      if ( !SHIsSameObject(v55, *(struct IUnknown **)(a1 + 88)) )
      {
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 80LL))(v48);
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 88LL))(v48);
        if ( v31 )
        {
          if ( !v32 )
          {
            v60 = 0LL;
            v56[0] = 0LL;
            v33 = v50;
            v34 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v50 + 152LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v56);
            v35 = v34(v33, *(_QWORD *)(a1 + 88), v56, 0LL);
            v36 = v56[0];
            if ( v35 < 0 )
              v36 = v48;
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v36 + 56LL))(v36, 0LL, &v60);
            (*(void (__fastcall **)(void *, _QWORD, __int128 *, _QWORD))(*(_QWORD *)v49 + 80LL))(
              v49,
              (unsigned int)v55,
              &v60,
              v6 | 2);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v56);
            goto LABEL_46;
          }
        }
        else if ( !v32 )
        {
          goto LABEL_46;
        }
        v27 = v49;
        v29 = *(_QWORD *)v49;
        v30 = 0LL;
        v28 = (unsigned int)v55;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(a1 + 152) == 1 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v50 + 48LL))(v50)
          || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v50 + 40LL))(v50) )
        {
          v6 |= 0x200u;
        }
        if ( a2 <= 1 && !*(_BYTE *)(a1 + 312) )
        {
          v62 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 80) + 120LL))(
                             *(_QWORD *)(a1 + 80),
                             v63);
          (*(void (__fastcall **)(void *, __int64, __int64, __int128 *))(*(_QWORD *)v49 + 72LL))(v49, 101LL, 3LL, &v62);
        }
        v27 = v49;
        v28 = 101LL;
        v29 = *(_QWORD *)v49;
        if ( a2 == 6 )
        {
          (*(void (__fastcall **)(void *, __int64, _QWORD))(v29 + 112))(v49, 101LL, v6);
          goto LABEL_46;
        }
        if ( a3 == 6 )
        {
          (*(void (__fastcall **)(void *, __int64, __int128 *, _QWORD))(v29 + 120))(v49, 101LL, &v61, v6);
          goto LABEL_46;
        }
        v30 = 3LL;
LABEL_45:
        (*(void (__fastcall **)(void *, __int64, __int64, __int128 *, unsigned int))(v29 + 88))(v27, v28, v30, &v61, v6);
      }
    }
LABEL_46:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v55);
    goto LABEL_47;
  }
  v10 = a1 + 120;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 120), (_QWORD *)(a1 + 112));
  memset_0(v57, 0, 0x40uLL);
  v48 = 0LL;
  v11 = *(_QWORD *)(a1 + 120);
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 128LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v48);
  v13 = v12(v11, &v48);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = 1252LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v48);
    goto LABEL_58;
  }
  while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v48 + 24LL))(v48, 1LL, v57) >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(void *, _QWORD, _BYTE *, __int64))(*(_QWORD *)v49 + 80LL))(v49, v58, v59, 17LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = 1256LL;
      goto LABEL_6;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v48);
LABEL_49:
  v52 = 0LL;
  v37 = *(_QWORD *)v10;
  v38 = *(void (__fastcall **)(__int64, __int64 *, _QWORD))(**(_QWORD **)v10 + 168LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
  v38(v37, &v52, 0LL);
  v39 = v52;
  if ( v52
    || (v40 = *(_QWORD *)v10,
        v41 = *(void (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(**(_QWORD **)v10 + 152LL),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52),
        v41(v40, *(_QWORD *)(a1 + 88), &v52, 0LL),
        (v39 = v52) != 0) )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v39 + 56LL))(v39, 0LL, &v60);
    (*(void (__fastcall **)(void *, __int64, __int64, __int128 *, unsigned int))(*(_QWORD *)v49 + 88LL))(
      v49,
      100LL,
      1LL,
      &v60,
      v6);
  }
  LOBYTE(v42) = a2 == 5;
  v43 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 88LL))(*(_QWORD *)(a1 + 72), v42);
  v9 = v43;
  if ( v43 >= 0 )
  {
    v43 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 72) + 32LL))(
            *(_QWORD *)(a1 + 72),
            v49,
            0LL);
    v9 = v43;
    if ( v43 >= 0 )
    {
      v46 = WindowArrangementView::DropLocationToArrangementAction(v45, a2);
      WindowArrangementView::UpdateUIADropEffect(a1, v46);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
      v9 = 0;
      goto LABEL_58;
    }
    v44 = 1384LL;
  }
  else
  {
    v44 = 1383LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v44,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v43);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
LABEL_58:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
  return v9;
}
