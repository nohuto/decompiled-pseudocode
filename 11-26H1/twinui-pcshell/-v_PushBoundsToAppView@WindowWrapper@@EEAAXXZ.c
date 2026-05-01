/*
 * XREFs of ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x18042F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E9F40 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18042E82C (-GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall WindowWrapper::v_PushBoundsToAppView(WindowWrapper *this)
{
  WindowWrapper *v2; // r13
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v3; // rcx
  int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  int v8; // eax
  bool v9; // di
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  unsigned int *v13; // r15
  __int64 v14; // r8
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  int v23; // edx
  _QWORD *v24; // rdi
  unsigned int *v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  int v28; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  int v31; // eax
  int v32; // edx
  _QWORD *v33; // r14
  unsigned int *v34; // r15
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  int v37; // eax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  int v40; // eax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  int v43; // eax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  int v46; // eax
  int v47; // edx
  int v48; // eax
  __int128 v49; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v51; // [rsp+70h] [rbp+40h] BYREF
  __int64 v52; // [rsp+78h] [rbp+48h] BYREF
  __int64 v53; // [rsp+80h] [rbp+50h] BYREF

  v2 = (WindowWrapper *)((char *)this - 8);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  v3 = 0LL;
  v51 = 0LL;
  v4 = *((_DWORD *)this + 126);
  if ( (*((_BYTE *)this + 640) & 1) != (v4 & 1) )
  {
    v51 = 0LL;
    WindowWrapper::GetBatch(v2, &v51);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                     *((_QWORD *)this + 35),
                     &v53);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v5 + 40LL))(*v5, &v52);
    LOBYTE(v7) = v4 & 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 128LL))(
           *v6,
           *((unsigned int *)this + 88),
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v8,
        v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    v4 = *((_DWORD *)this + 126);
    v3 = v51;
  }
  v9 = (v4 & 2) != 0;
  if ( ((*((_DWORD *)this + 160) & 2) != 0) == v9 )
  {
    v10 = (_QWORD *)((char *)this + 280);
    v13 = (unsigned int *)((char *)this + 352);
  }
  else
  {
    v51 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
    WindowWrapper::GetBatch(v2, &v51);
    v10 = (_QWORD *)((char *)this + 280);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v53);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v11 + 40LL))(*v11, &v52);
    v13 = (unsigned int *)((char *)this + 352);
    LOBYTE(v14) = v9;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v12 + 136LL))(
            *v12,
            *((unsigned int *)this + 88),
            v14);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x107,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v15,
        v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    v3 = v51;
  }
  if ( *((float *)this + 154) != *((float *)this + 118)
    || *((float *)this + 155) != *((float *)this + 119)
    || *((float *)this + 156) != *((float *)this + 120)
    || *((float *)this + 157) != *((float *)this + 121) )
  {
    v51 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
    WindowWrapper::GetBatch(v2, &v51);
    v10 = (_QWORD *)((char *)this + 280);
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v53);
    v17 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v16 + 40LL))(*v16, &v52);
    v13 = (unsigned int *)((char *)this + 352);
    v49 = *(_OWORD *)((char *)this + 472);
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v17 + 176LL))(
            v17,
            *((unsigned int *)this + 88),
            &v49);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x110,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v18,
        v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    v3 = v51;
  }
  if ( *((_DWORD *)this + 128) != *((_DWORD *)this + 162) )
  {
    v51 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
    WindowWrapper::GetBatch(v2, &v51);
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 144LL))(*v10, &v53);
    v20 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v19 + 40LL))(*v19, &v52);
    LOBYTE(v21) = *((_BYTE *)this + 512);
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v20 + 192LL))(*v20, *v13, v21);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x116,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v22,
        v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    v10 = (_QWORD *)((char *)this + 280);
    v13 = (unsigned int *)((char *)this + 352);
    v3 = v51;
  }
  v23 = *((_DWORD *)this + 129);
  v24 = v10;
  v25 = v13;
  if ( v23 != *((_DWORD *)this + 163) )
  {
    if ( v23 )
    {
      if ( v23 != 1 )
        goto LABEL_41;
      v51 = 0LL;
      if ( v3 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
      WindowWrapper::GetBatch(v2, &v51);
      v24 = (_QWORD *)((char *)this + 280);
      v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                        *((_QWORD *)this + 35),
                        &v53);
      v27 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v26 + 40LL))(*v26, &v52);
      v25 = (unsigned int *)((char *)this + 352);
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v27 + 160LL))(
              *v27,
              *((unsigned int *)this + 88),
              1LL);
      if ( v28 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x126,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v28,
          v49);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    }
    else
    {
      v51 = 0LL;
      if ( v3 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
      WindowWrapper::GetBatch(v2, &v51);
      v29 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 144LL))(*v10, &v53);
      v30 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v29 + 40LL))(*v29, &v52);
      v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v30 + 160LL))(*v30, *v13, 0LL);
      if ( v31 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x120,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v31,
          v49);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
      v24 = (_QWORD *)((char *)this + 280);
      v25 = (unsigned int *)((char *)this + 352);
    }
    v3 = v51;
  }
LABEL_41:
  v32 = *((_DWORD *)this + 131);
  v33 = v24;
  v34 = v25;
  if ( v32 == *((_DWORD *)this + 165) )
    goto LABEL_55;
  if ( v32 )
  {
    if ( v32 != 1 )
      goto LABEL_55;
    v51 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
    WindowWrapper::GetBatch(v2, &v51);
    v33 = (_QWORD *)((char *)this + 280);
    v35 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v53);
    v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v35 + 40LL))(*v35, &v52);
    v34 = (unsigned int *)((char *)this + 352);
    v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v36 + 144LL))(
            *v36,
            *((unsigned int *)this + 88),
            2LL);
    if ( v37 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v37,
        v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
  }
  else
  {
    v51 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
    WindowWrapper::GetBatch(v2, &v51);
    v38 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v24 + 144LL))(*v24, &v53);
    v39 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v38 + 40LL))(*v38, &v52);
    v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v39 + 144LL))(*v39, *v25, 1LL);
    if ( v40 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x135,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v40,
        v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    v33 = (_QWORD *)((char *)this + 280);
    v34 = (unsigned int *)((char *)this + 352);
  }
  v3 = v51;
LABEL_55:
  if ( *((_DWORD *)this + 132) != *((_DWORD *)this + 166) )
  {
    v51 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
    WindowWrapper::GetBatch(v2, &v51);
    v33 = (_QWORD *)((char *)this + 280);
    v41 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 144LL))(
                      *((_QWORD *)this + 35),
                      &v53);
    v42 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v41 + 40LL))(*v41, &v52);
    v34 = (unsigned int *)((char *)this + 352);
    v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v42 + 224LL))(
            *v42,
            *((unsigned int *)this + 88),
            *((unsigned int *)this + 132));
    if ( v43 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x146,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v43,
        v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    v3 = v51;
  }
  if ( *((_DWORD *)this + 164) != *((_DWORD *)this + 130) )
  {
    v51 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 16LL))(v3);
    WindowWrapper::GetBatch(v2, &v51);
    v44 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v33 + 144LL))(*v33, &v53);
    v45 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v44 + 40LL))(*v44, &v52);
    v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v45 + 208LL))(
            *v45,
            *v34,
            *((unsigned int *)this + 130));
    if ( v46 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v46,
        v49);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v52);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v53);
    v3 = v51;
  }
  v47 = *((_DWORD *)this + 133);
  if ( v47 != *((_DWORD *)this + 167) )
  {
    PushWindowTransparencyModeToWindow((HWND)*((int *)this + 74), v47, *((_DWORD *)this + 153));
    v3 = v51;
  }
  if ( v3 )
  {
    v48 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v3 + 56LL))(v3);
    if ( v48 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x157,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v48,
        v49);
  }
  *(_OWORD *)((char *)this + 632) = *((_OWORD *)this + 31);
  *(_OWORD *)((char *)this + 648) = *((_OWORD *)this + 32);
  *((_QWORD *)this + 83) = *((_QWORD *)this + 66);
  *(_OWORD *)((char *)this + 616) = *(_OWORD *)((char *)this + 472);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v51);
}
