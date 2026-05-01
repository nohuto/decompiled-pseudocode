/*
 * XREFs of ?PushBoundsToAppView@UwpWindowWrapper@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180143C18
 * Callers:
 *     ?PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180143BF0 (-PushBoundsDuringActivationRequested@UwpWindowWrapper@@UEAAXUWindowId@WindowManagement@Applicati.c)
 *     ?v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ @ 0x180143C00 (-v_PushBoundsToAppView@UwpWindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18014462C (-GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Intern.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E9F40 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UwpWindowWrapper::PushBoundsToAppView(__int64 a1, int a2)
{
  __int64 v2; // rbx
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v4; // rcx
  char v5; // si
  bool v6; // si
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  int v15; // edx
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r8
  int v28; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r8
  int v32; // eax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // r8
  int v36; // eax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  int v39; // eax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  int v42; // eax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  int v45; // eax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  int v48; // eax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  int v51; // eax
  int v52; // [rsp+20h] [rbp-20h]
  __int128 v53; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v55; // [rsp+60h] [rbp+20h] BYREF
  __int64 v56; // [rsp+70h] [rbp+30h] BYREF
  __int64 v57; // [rsp+78h] [rbp+38h] BYREF

  v2 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 224LL))(*(_QWORD *)(a1 + 288));
  if ( !(_DWORD)v2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)0x80070490LL,
      v52);
  v4 = 0LL;
  v55 = 0LL;
  v5 = *(_BYTE *)(a1 + 512) & 1;
  if ( (*(_BYTE *)(a1 + 656) & 1) != v5 )
  {
    v55 = 0LL;
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v55);
    v25 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v57);
    v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v25 + 40LL))(*v25, &v56);
    LOBYTE(v27) = v5;
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v26 + 64LL))(*v26, (unsigned int)v2, v27);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x127,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v28,
        v52);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    v4 = v55;
  }
  v6 = (*(_DWORD *)(a1 + 512) & 2) != 0;
  if ( ((*(_DWORD *)(a1 + 656) & 2) != 0) != v6 )
  {
    v55 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v55);
    v29 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v57);
    v30 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v29 + 40LL))(*v29, &v56);
    LOBYTE(v31) = v6;
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v30 + 72LL))(*v30, (unsigned int)v2, v31);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v32,
        v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
    v4 = v55;
  }
  if ( *(float *)(a1 + 632) != *(float *)(a1 + 480)
    || *(float *)(a1 + 636) != *(float *)(a1 + 484)
    || *(float *)(a1 + 640) != *(float *)(a1 + 488)
    || *(float *)(a1 + 644) != *(float *)(a1 + 492) )
  {
    v7 = 0LL;
    v55 = 0LL;
    if ( v4 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      v7 = v55;
    }
    if ( !v7 && *(_DWORD *)(a1 + 304) )
    {
      v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                       *(_QWORD *)(a1 + 288),
                       &v57);
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 40LL))(*v8, &v56);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(*(_QWORD *)*v9 + 56LL))(
              *v9,
              *(unsigned int *)(a1 + 304),
              0LL,
              &v55);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v10,
          v52);
      if ( v56 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      if ( v57 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v57);
    v12 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v11 + 40LL))(*v11, &v56);
    v53 = *(_OWORD *)(a1 + 480);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v12 + 104LL))(v12, (unsigned int)v2, &v53);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x138,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v13,
        v52);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    v4 = v55;
  }
  if ( *(_DWORD *)(a1 + 520) != *(_DWORD *)(a1 + 664) )
  {
    v55 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v55);
    v33 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v57);
    v34 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v33 + 40LL))(*v33, &v56);
    LOBYTE(v35) = *(_BYTE *)(a1 + 520);
    v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v34 + 120LL))(*v34, (unsigned int)v2, v35);
    if ( v36 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v36,
        v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
    v4 = v55;
  }
  v14 = *(_DWORD *)(a1 + 524);
  if ( v14 != *(_DWORD *)(a1 + 668) )
  {
    if ( v14 )
    {
      if ( v14 != 1 )
        goto LABEL_25;
      v55 = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v55);
      v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                        *(_QWORD *)(a1 + 288),
                        &v57);
      v38 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v37 + 40LL))(*v37, &v56);
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v38 + 88LL))(*v38, (unsigned int)v2, 1LL);
      if ( v39 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x14E,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v39,
          v52);
    }
    else
    {
      v55 = 0LL;
      if ( v4 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v55);
      v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                        *(_QWORD *)(a1 + 288),
                        &v57);
      v41 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v40 + 40LL))(*v40, &v56);
      v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v41 + 88LL))(*v41, (unsigned int)v2, 0LL);
      if ( v42 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x148,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v42,
          v52);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
    v4 = v55;
  }
LABEL_25:
  v15 = *(_DWORD *)(a1 + 532);
  if ( v15 == *(_DWORD *)(a1 + 676) )
    goto LABEL_26;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_26;
    v55 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v55);
    v43 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v57);
    v44 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v43 + 40LL))(*v43, &v56);
    v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v44 + 80LL))(*v44, (unsigned int)v2, 2LL);
    if ( v45 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x163,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v45,
        v52);
  }
  else
  {
    v55 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v55);
    v46 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v57);
    v47 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v46 + 40LL))(*v46, &v56);
    v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v47 + 80LL))(*v47, (unsigned int)v2, 1LL);
    if ( v48 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v48,
        v52);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
  v4 = v55;
LABEL_26:
  if ( *(_DWORD *)(a1 + 536) != *(_DWORD *)(a1 + 680) )
  {
    v16 = 0LL;
    v55 = 0LL;
    if ( v4 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
      v16 = v55;
    }
    if ( !v16 && *(_DWORD *)(a1 + 304) )
    {
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                        *(_QWORD *)(a1 + 288),
                        &v57);
      v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v17 + 40LL))(*v17, &v56);
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(*(_QWORD *)*v18 + 56LL))(
              *v18,
              *(unsigned int *)(a1 + 304),
              0LL,
              &v55);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v19,
          v52);
      if ( v56 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      if ( v57 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v57);
    v21 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v20 + 40LL))(*v20, &v56);
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v21 + 208LL))(
            *v21,
            (unsigned int)v2,
            *(unsigned int *)(a1 + 536));
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v22,
        v52);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    v4 = v55;
  }
  if ( *(_DWORD *)(a1 + 672) != *(_DWORD *)(a1 + 528) )
  {
    v55 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
    UwpWindowWrapper::GetBatch((UwpWindowWrapper *)a1, &v55);
    v49 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 152LL))(
                      *(_QWORD *)(a1 + 288),
                      &v57);
    v50 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v49 + 40LL))(*v49, &v56);
    v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v50 + 176LL))(
            *v50,
            (unsigned int)v2,
            *(unsigned int *)(a1 + 528));
    if ( v51 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x174,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v51,
        v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
    v4 = v55;
  }
  v23 = *(unsigned int *)(a1 + 540);
  if ( (_DWORD)v23 != *(_DWORD *)(a1 + 684) )
  {
    PushWindowTransparencyModeToWindow(v2, v23, *(unsigned int *)(a1 + 628));
    v4 = v55;
  }
  if ( v4 )
  {
    v24 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 56LL))(v4);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v24,
        v52);
    v4 = v55;
  }
  *(_OWORD *)(a1 + 648) = *(_OWORD *)(a1 + 504);
  *(_OWORD *)(a1 + 664) = *(_OWORD *)(a1 + 520);
  *(_QWORD *)(a1 + 680) = *(_QWORD *)(a1 + 536);
  *(_OWORD *)(a1 + 632) = *(_OWORD *)(a1 + 480);
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v4 + 16LL))(v4);
}
