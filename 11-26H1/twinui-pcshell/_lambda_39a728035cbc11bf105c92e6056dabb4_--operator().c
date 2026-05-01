/*
 * XREFs of _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x18006AB04
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___::Run @ 0x18006AAE0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___--.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$NavigateUwpView@AEAIIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAI$$QEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18006B454 (--$NavigateUwpView@AEAIIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewMan.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x18006D050 (-PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall lambda_39a728035cbc11bf105c92e6056dabb4_::operator()(
        unsigned int **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  unsigned int v17; // edi
  int v18; // r12d
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  unsigned int *v28; // rbx
  int v29; // eax
  const char *v30; // r9
  __int64 *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  _QWORD *v39; // rcx
  __int64 *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // ebx
  __int64 *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rbx
  __int64 (__fastcall *v50)(__int64, _QWORD, _QWORD **); // rsi
  _QWORD *v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  __int64 v55; // rbx
  __int64 (__fastcall *v56)(__int64, _QWORD, _QWORD **); // rsi
  __int64 v57; // rcx
  int v58; // eax
  __int64 *v59; // rcx
  __int64 v60; // rax
  int v61; // eax
  int v62; // eax
  wil::details::in1diag3 *v63; // rcx
  __int64 v64; // rsi
  __int64 (__fastcall *v65)(__int64, _QWORD, int *); // rbx
  int v66; // eax
  __int64 v67; // r14
  __int64 (__fastcall *v68)(__int64, _QWORD, _QWORD **); // rsi
  int v69; // eax
  int v70; // edx
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  int v74[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v75; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v76; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v78; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v79; // [rsp+88h] [rbp+10h] BYREF
  struct IUwpWindowWrapperInternal *v80; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v81; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v17 = **a1;
    v18 = *a1[1];
    v81 = 0LL;
    (*(void (__fastcall **)(_QWORD, struct IUwpWindowWrapperInternal **, _QWORD))(**((_QWORD **)a1[2] + 37) + 200LL))(
      *((_QWORD *)a1[2] + 37),
      &v80,
      v17);
    v19 = *a1[1];
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 && (v21 = v20 - 1) != 0 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 != 1 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x150,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                (const char *)0x8000FFFFLL,
                v74[0]);
            goto LABEL_8;
          }
          if ( !v80 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x13D,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)0x8007139FLL,
              v74[0]);
          v78 = 0LL;
          v32 = (__int64 *)*((_QWORD *)a1[2] + 29);
          v33 = *v32;
          v78 = 0LL;
          v34 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v33 + 104))(v32, v17, &v78);
          if ( v34 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x13F,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v34,
              v74[0]);
          if ( !v78 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x140,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)0x8007139FLL,
              v74[0]);
          (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, _QWORD))(*(_QWORD *)v80 + 488LL))(v80, 0LL);
          UwpWindowManagerBridge::PushWindowVisibility((UwpWindowManagerBridge *)a1[2], v80, 1);
          (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)a1[2] + 37) + 272LL))(*((_QWORD *)a1[2] + 37), v78);
          goto LABEL_32;
        }
        if ( !v80 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x12E,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v74[0]);
        v78 = 0LL;
        v35 = (__int64 *)*((_QWORD *)a1[2] + 29);
        v36 = *v35;
        v78 = 0LL;
        v37 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v36 + 104))(v35, v17, &v78);
        if ( v37 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x130,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v37,
            v74[0]);
        if ( !v78 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x131,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v74[0]);
        v38 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v78 + 128LL))(v78, 2LL);
        if ( v38 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x134,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v38,
            v74[0]);
      }
      else
      {
        if ( !v80 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x122,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v74[0]);
        v78 = 0LL;
        v40 = (__int64 *)*((_QWORD *)a1[2] + 29);
        v41 = *v40;
        v78 = 0LL;
        v42 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v41 + 104))(v40, v17, &v78);
        if ( v42 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x124,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v42,
            v74[0]);
        if ( !v78 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x125,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v74[0]);
      }
      (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, _QWORD))(*(_QWORD *)v80 + 488LL))(v80, 0LL);
      UwpWindowManagerBridge::PushWindowVisibility((UwpWindowManagerBridge *)a1[2], v80, 0);
LABEL_32:
      v39 = v78;
      goto LABEL_33;
    }
    if ( v80 )
    {
      v43 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v80 + 256LL))(v80);
      if ( !v43 )
      {
LABEL_8:
        if ( v18 != 3 )
        {
          v78 = 0LL;
          v24 = (__int64 *)*((_QWORD *)a1[2] + 29);
          v25 = *v24;
          v78 = 0LL;
          v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v25 + 104))(v24, v17, &v78);
          if ( v26 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x159,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v26,
              v74[0]);
          if ( !v78 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x15A,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)0x8007139FLL,
              v74[0]);
          v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v78 + 128LL))(v78, 1LL);
          if ( v27 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x15B,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v27,
              v74[0]);
          if ( v78 )
            (*(void (__fastcall **)(_QWORD *))(*v78 + 16LL))(v78);
        }
        v28 = a1[1];
        if ( v80 )
          v29 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v80 + 256LL))(v80);
        else
          v29 = 0;
        LODWORD(v78) = v29;
        ViewManagerInteropTelemetry::NavigateUwpView<unsigned int &,unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
          *a1,
          &v78,
          v28);
        if ( v80 )
          (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v80 + 16LL))(v80);
        if ( v81 )
          (*(void (__fastcall **)(_QWORD *))(*v81 + 16LL))(v81);
        return 0LL;
      }
      v76 = 0LL;
      v44 = (__int64 *)*((_QWORD *)a1[2] + 21);
      v45 = *v44;
      v76 = 0LL;
      v46 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v45 + 80))(v44, v43, &v76);
      if ( v46 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xFF,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v46,
          v74[0]);
      v75 = 0LL;
      v47 = *v76;
      v75 = 0LL;
      v48 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v47 + 48))(v76, &v75);
      if ( v48 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x102,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v48,
          v74[0]);
      *(_QWORD *)v74 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, int *))v75)(v75, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, v74);
      if ( *(_QWORD *)v74 )
      {
        LOBYTE(v78) = 0;
        v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)v74 + 168LL))(*(_QWORD *)v74, &v78);
        if ( v53 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x109,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v53,
            v74[0]);
        if ( (_BYTE)v78 )
        {
          v67 = *((_QWORD *)a1[2] + 21);
          v68 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v67 + 56LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v81);
          v69 = v68(v67, v43, &v81);
          if ( v69 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x10C,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v69,
              v74[0]);
        }
        else
        {
          LOBYTE(v79) = 0;
          v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)v74 + 176LL))(*(_QWORD *)v74, &v79);
          if ( v54 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x111,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v54,
              v74[0]);
          if ( (_BYTE)v79 )
          {
            v55 = *((_QWORD *)a1[2] + 29);
            v56 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v55 + 64LL);
            v57 = (__int64)v81;
            v81 = 0LL;
            if ( v57 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
            v58 = v56(v55, v17, &v81);
            if ( v58 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x114,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                (const char *)(unsigned int)v58,
                v74[0]);
          }
        }
      }
      else
      {
        v49 = *((_QWORD *)a1[2] + 29);
        v50 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v49 + 64LL);
        v51 = v81;
        v81 = 0LL;
        if ( v51 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v51 + 16LL))(v51, *v51);
        v52 = v50(v49, v17, &v81);
        if ( v52 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x11A,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v52,
            v74[0]);
      }
      if ( *(_QWORD *)v74 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v74 + 16LL))(*(_QWORD *)v74);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      v39 = v76;
    }
    else
    {
      v79 = 0LL;
      v59 = (__int64 *)*((_QWORD *)a1[2] + 29);
      v60 = *v59;
      v79 = 0LL;
      v61 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD **))(v60 + 104))(v59, v17, &v79);
      if ( v61 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEB,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v61);
      }
      else
      {
        v39 = v79;
        if ( !v79 )
          goto LABEL_33;
        LODWORD(v78) = 0;
        *(_QWORD *)v74 = 0LL;
        v62 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **))(*v79 + 56LL))(v79, &v78);
        v63 = retaddr;
        if ( v62 < 0
          || (v64 = *((_QWORD *)a1[2] + 21),
              v65 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v64 + 80LL),
              wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v74),
              v62 = v65(v64, (unsigned int)v78, v74),
              v63 = retaddr,
              v62 < 0) )
        {
          wil::details::in1diag3::_Log_Hr(
            v63,
            (void *)0xEF,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v62);
        }
        else if ( *(_QWORD *)v74 )
        {
          v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)v74 + 80LL))(*(_QWORD *)v74, &v78);
          if ( v66 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xF2,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v66,
              v74[0]);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v74);
      }
      v39 = v79;
    }
LABEL_33:
    if ( v39 )
      (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
    goto LABEL_8;
  }
  catch ( ... )
  {
    LODWORD(v78) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x160,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                     v30);
    return sub_18006B440(v71, v70, v72, v73, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
  }
  return 0LL;
}
