/*
 * XREFs of _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x1800701A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___::Run @ 0x180070180 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$NavigateUwpView@AEAIIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAI$$QEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180070AF4 (--$NavigateUwpView@AEAIIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewMan.c)
 *     ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x18007210C (-PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall lambda_39a728035cbc11bf105c92e6056dabb4_::operator()(unsigned int **a1)
{
  unsigned int *v2; // rdi
  int v3; // r12d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int *v13; // rbx
  int v14; // eax
  const char *v15; // r9
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ebx
  __int64 *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, _QWORD, _QWORD **); // rsi
  _QWORD *v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, _QWORD, _QWORD **); // rsi
  __int64 v42; // rcx
  int v43; // eax
  __int64 *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  int v47; // eax
  wil::details::in1diag3 *v48; // rcx
  __int64 v49; // rsi
  __int64 (__fastcall *v50)(__int64, _QWORD, int *); // rbx
  int v51; // eax
  __int64 v52; // r14
  __int64 (__fastcall *v53)(__int64, _QWORD, _QWORD **); // rsi
  int v54; // eax
  int v55[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v56; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v57; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v59; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v60; // [rsp+88h] [rbp+10h] BYREF
  struct IUwpWindowWrapperInternal *v61; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v62; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v2 = *a1;
    v3 = *a1[1];
    v62 = 0LL;
    (*(void (__fastcall **)(_QWORD, struct IUwpWindowWrapperInternal **, _QWORD))(**((_QWORD **)a1[2] + 37) + 200LL))(
      *((_QWORD *)a1[2] + 37),
      &v61,
      *v2);
    v4 = *a1[1];
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 && (v6 = v5 - 1) != 0 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x150,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                (const char *)0x8000FFFFLL,
                v55[0]);
            goto LABEL_8;
          }
          if ( !v61 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x13D,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)0x8007139FLL,
              v55[0]);
          v59 = 0LL;
          v17 = (__int64 *)*((_QWORD *)a1[2] + 29);
          v18 = *v17;
          v59 = 0LL;
          v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v18 + 104))(v17, *v2, &v59);
          if ( v19 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x13F,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v19,
              v55[0]);
          if ( !v59 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x140,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)0x8007139FLL,
              v55[0]);
          (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, _QWORD))(*(_QWORD *)v61 + 488LL))(v61, 0LL);
          UwpWindowManagerBridge::PushWindowVisibility((UwpWindowManagerBridge *)a1[2], v61, 1);
          (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)a1[2] + 37) + 272LL))(*((_QWORD *)a1[2] + 37), v59);
          goto LABEL_32;
        }
        if ( !v61 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x12E,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v55[0]);
        v59 = 0LL;
        v20 = (__int64 *)*((_QWORD *)a1[2] + 29);
        v21 = *v20;
        v59 = 0LL;
        v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v21 + 104))(v20, *v2, &v59);
        if ( v22 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x130,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v22,
            v55[0]);
        if ( !v59 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x131,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v55[0]);
        v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v59 + 128LL))(v59, 2LL);
        if ( v23 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x134,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v23,
            v55[0]);
      }
      else
      {
        if ( !v61 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x122,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v55[0]);
        v59 = 0LL;
        v25 = (__int64 *)*((_QWORD *)a1[2] + 29);
        v26 = *v25;
        v59 = 0LL;
        v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v26 + 104))(v25, *v2, &v59);
        if ( v27 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x124,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v27,
            v55[0]);
        if ( !v59 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x125,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v55[0]);
      }
      (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, _QWORD))(*(_QWORD *)v61 + 488LL))(v61, 0LL);
      UwpWindowManagerBridge::PushWindowVisibility((UwpWindowManagerBridge *)a1[2], v61, 0);
LABEL_32:
      v24 = v59;
      goto LABEL_33;
    }
    if ( v61 )
    {
      v28 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v61 + 256LL))(v61);
      if ( !v28 )
      {
LABEL_8:
        if ( v3 != 3 )
        {
          v59 = 0LL;
          v9 = (__int64 *)*((_QWORD *)a1[2] + 29);
          v10 = *v9;
          v59 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v10 + 104))(v9, *v2, &v59);
          if ( v11 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x159,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v11,
              v55[0]);
          if ( !v59 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x15A,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)0x8007139FLL,
              v55[0]);
          v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v59 + 128LL))(v59, 1LL);
          if ( v12 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x15B,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v12,
              v55[0]);
          if ( v59 )
            (*(void (__fastcall **)(_QWORD *))(*v59 + 16LL))(v59);
        }
        v13 = a1[1];
        if ( v61 )
          v14 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v61 + 256LL))(v61);
        else
          v14 = 0;
        LODWORD(v59) = v14;
        ViewManagerInteropTelemetry::NavigateUwpView<unsigned int &,unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
          *a1,
          &v59,
          v13);
        if ( v61 )
          (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v61 + 16LL))(v61);
        if ( v62 )
          (*(void (__fastcall **)(_QWORD *))(*v62 + 16LL))(v62);
        return 0LL;
      }
      v57 = 0LL;
      v29 = (__int64 *)*((_QWORD *)a1[2] + 21);
      v30 = *v29;
      v57 = 0LL;
      v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v30 + 80))(v29, v28, &v57);
      if ( v31 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xFF,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v31,
          v55[0]);
      v56 = 0LL;
      v32 = *v57;
      v56 = 0LL;
      v33 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v32 + 48))(v57, &v56);
      if ( v33 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x102,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v33,
          v55[0]);
      *(_QWORD *)v55 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, int *))v56)(v56, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, v55);
      if ( *(_QWORD *)v55 )
      {
        LOBYTE(v59) = 0;
        v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)v55 + 168LL))(*(_QWORD *)v55, &v59);
        if ( v38 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x109,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v38,
            v55[0]);
        if ( (_BYTE)v59 )
        {
          v52 = *((_QWORD *)a1[2] + 21);
          v53 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v52 + 56LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v62);
          v54 = v53(v52, v28, &v62);
          if ( v54 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x10C,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v54,
              v55[0]);
        }
        else
        {
          LOBYTE(v60) = 0;
          v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)v55 + 176LL))(*(_QWORD *)v55, &v60);
          if ( v39 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x111,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v39,
              v55[0]);
          if ( (_BYTE)v60 )
          {
            v40 = *((_QWORD *)a1[2] + 29);
            v41 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v40 + 64LL);
            v42 = (__int64)v62;
            v62 = 0LL;
            if ( v42 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
            v43 = v41(v40, *v2, &v62);
            if ( v43 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x114,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                (const char *)(unsigned int)v43,
                v55[0]);
          }
        }
      }
      else
      {
        v34 = *((_QWORD *)a1[2] + 29);
        v35 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v34 + 64LL);
        v36 = v62;
        v62 = 0LL;
        if ( v36 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v36 + 16LL))(v36, *v36);
        v37 = v35(v34, *v2, &v62);
        if ( v37 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x11A,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v37,
            v55[0]);
      }
      if ( *(_QWORD *)v55 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v55 + 16LL))(*(_QWORD *)v55);
      if ( v56 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      v24 = v57;
    }
    else
    {
      v60 = 0LL;
      v44 = (__int64 *)*((_QWORD *)a1[2] + 29);
      v45 = *v44;
      v60 = 0LL;
      v46 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v45 + 104))(v44, *v2, &v60);
      if ( v46 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEB,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v46);
      }
      else
      {
        v24 = v60;
        if ( !v60 )
          goto LABEL_33;
        LODWORD(v59) = 0;
        *(_QWORD *)v55 = 0LL;
        v47 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **))(*v60 + 56LL))(v60, &v59);
        v48 = retaddr;
        if ( v47 < 0
          || (v49 = *((_QWORD *)a1[2] + 21),
              v50 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v49 + 80LL),
              wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v55),
              v47 = v50(v49, (unsigned int)v59, v55),
              v48 = retaddr,
              v47 < 0) )
        {
          wil::details::in1diag3::_Log_Hr(
            v48,
            (void *)0xEF,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v47);
        }
        else if ( *(_QWORD *)v55 )
        {
          v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)v55 + 80LL))(*(_QWORD *)v55, &v59);
          if ( v51 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xF2,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v51,
              v55[0]);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v55);
      }
      v24 = v60;
    }
LABEL_33:
    if ( v24 )
      (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    goto LABEL_8;
  }
  catch ( ... )
  {
    LODWORD(v59) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x160,
                     (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                     v15);
    return (unsigned int)v59;
  }
  return 0LL;
}
