/*
 * XREFs of ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x18012C244
 * Callers:
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18004A8F0 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresen.c)
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18012BC10 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1804D8D20 (-InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnkno.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18008E394 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?get@?$static_lazy@VShellPositionerTelemetry@@@details@wil@@QEAAPEAVShellPositionerTelemetry@@P6AXXZ@Z @ 0x18008E6C8 (-get@-$static_lazy@VShellPositionerTelemetry@@@details@wil@@QEAAPEAVShellPositionerTelemetry@@P6.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18012CFF0 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x18012D1C8 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1804D99C4 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 ShellPositionerManager::HandleActivationRequest(
        ShellPositionerManager *a1,
        int a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IUnknown *a5,
        __int64 a6,
        __int64 a7,
        ...)
{
  __int64 v10; // r12
  int PositionerPriorityForView; // eax
  unsigned int v12; // edi
  struct IShellPositionerPriority *v13; // rbx
  __int64 (__fastcall *v14)(struct IShellPositionerPriority *, struct IShellPositionerPriority **); // rdi
  int updated; // eax
  struct IUnknown *v16; // r13
  __int64 v17; // r15
  IUnknown *v18; // r14
  int v19; // eax
  void *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  char v23; // r14
  int v24; // eax
  void *v25; // rcx
  struct IShellPositionerPriority *v26; // rcx
  struct IShellPositionerPriority *v27; // rcx
  struct IShellPositionerPriority *v29; // rcx
  void *v30; // rcx
  struct IShellPositionerPriority *v31; // rcx
  struct IShellPositionerPriority *v32; // rcx
  _DWORD *v33; // rcx
  int v34; // eax
  void *v35; // rcx
  struct IShellPositionerPriority *v36; // rcx
  struct IShellPositionerPriority *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  HRESULT v40; // eax
  HRESULT v41; // r14d
  __int64 v42; // rdx
  unsigned __int64 v43; // r9
  unsigned int v44; // edi
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  struct IShellPositionerPriority *v48; // [rsp+40h] [rbp-20h] BYREF
  struct IShellPositionerPriority *v49; // [rsp+48h] [rbp-18h] BYREF
  void *ppvOut[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  void *v53; // [rsp+B0h] [rbp+50h] BYREF
  IUnknown *punk; // [rsp+B8h] [rbp+58h]
  __int64 v55; // [rsp+D8h] [rbp+78h] BYREF
  va_list va; // [rsp+D8h] [rbp+78h]
  _OWORD *v57; // [rsp+E0h] [rbp+80h] BYREF
  va_list va1; // [rsp+E0h] [rbp+80h]
  va_list va2; // [rsp+E8h] [rbp+88h] BYREF

  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v55 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v57 = va_arg(va2, _OWORD *);
  punk = a4;
  v10 = v55;
  if ( v55 )
    *(_DWORD *)v55 = 0;
  if ( v57 )
    *v57 = 0LL;
  v48 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(a1, a3, &v48);
  v12 = PositionerPriorityForView;
  if ( PositionerPriorityForView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerPriorityForView);
    v29 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return v12;
  }
  LODWORD(v55) = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v48 + 24LL))(v48);
  v49 = 0LL;
  v13 = v48;
  v14 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v48 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
  updated = v14(v13, &v49);
  v12 = updated;
  if ( updated < 0 )
  {
    v39 = 818LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
LABEL_68:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
    return v12;
  }
  v16 = a5;
  updated = ShellPositionerManager::UpdatePositionerPriorityForActivation(
              a1,
              v49,
              a3,
              (struct IImmersiveMonitor *)a4,
              a5);
  v12 = updated;
  if ( updated < 0 )
  {
    v39 = 821LL;
    goto LABEL_48;
  }
  v17 = (*(int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v49 + 24LL))(v49);
  v53 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v53);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  v18 = punk;
  if ( IUnknown_QueryService(
         punk,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         ppvOut) >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, void **))(*(_QWORD *)ppvOut[0] + 24LL))(
            ppvOut[0],
            (unsigned int)v17,
            &GUID_ee010e17_919a_4068_868b_675acf787303,
            &v53);
    v12 = v19;
    if ( v19 >= 0 )
      goto LABEL_10;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v19);
LABEL_54:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    v42 = 826LL;
LABEL_56:
    v43 = v12;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v43);
LABEL_67:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v53);
    goto LABEL_68;
  }
  v40 = IUnknown_QueryService(v18, &c_positionersSIDs + v17, &GUID_ee010e17_919a_4068_868b_675acf787303, &v53);
  v41 = v40;
  if ( v40 < 0 )
  {
    v12 = -2147467262;
    if ( v40 != -2147467262 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C1,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v40);
      v12 = v41;
    }
    goto LABEL_54;
  }
  v18 = punk;
LABEL_10:
  v20 = ppvOut[0];
  if ( ppvOut[0] )
  {
    ppvOut[0] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( (*(unsigned int (__fastcall **)(void *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v53 + 32LL))(
         v53,
         a3,
         v16) )
  {
    v12 = -2147467260;
    v42 = 829LL;
    goto LABEL_56;
  }
  v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IShellPositionerPriority *))(*(_QWORD *)a3 + 272LL))(
          a3,
          v49);
  v12 = v21;
  if ( v21 < 0 )
  {
    v43 = (unsigned int)v21;
    v42 = 832LL;
    goto LABEL_58;
  }
  if ( a2 )
  {
    v44 = v55;
    if ( (_DWORD)v17 != (_DWORD)v55 )
    {
      v57 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va1);
      v46 = ShellPositionerManager::SendControlLostToPositioner(v45, a3, v18, v44, v17, (_OWORD **)va1);
      v12 = v46;
      if ( v46 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x348,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v46);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va1);
        goto LABEL_67;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va1);
      v44 = v55;
    }
    v33 = (_DWORD *)wil::details::static_lazy<ShellPositionerTelemetry>::get(
                      v22,
                      (void (__cdecl *)())_lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_)[1];
    if ( v33 && *v33 )
    {
      wil::details::static_lazy<ShellPositionerTelemetry>::get(
        (__int64)v33,
        (void (__cdecl *)())_lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
      ShellPositionerTelemetry::PositionViewForActivation_(v38, (__int64 *)a3, v17);
    }
    v34 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD, struct IUnknown *))(*(_QWORD *)v53 + 48LL))(
            v53,
            a3,
            v44,
            v16);
    v12 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x363,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v34);
      v35 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v37 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v37 + 16LL))(v37);
      }
      return v12;
    }
    goto LABEL_28;
  }
  v23 = 1;
  if ( v10 )
  {
    v55 = 0LL;
    (**(void (__fastcall ***)(void *, GUID *, __int64 *))v53)(
      v53,
      &GUID_ce1ad7e6_6f3e_45e0_bbf3_cca1181639d0,
      (__int64 *)va);
    if ( !v55
      || (v23 = 0,
          v47 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IUnknown *, __int64, __int64, _OWORD *))(*(_QWORD *)v55 + 112LL))(
                  v55,
                  a3,
                  v16,
                  a6,
                  v10,
                  v57),
          v12 = v47,
          v47 >= 0) )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)va);
      if ( !v23 )
        goto LABEL_28;
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x356,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v47);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)va);
    goto LABEL_67;
  }
LABEL_16:
  v24 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IUnknown *, __int64, __int64))(*(_QWORD *)v53 + 40LL))(
          v53,
          a3,
          v16,
          a6,
          a7);
  v12 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v24);
    v25 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return v12;
  }
LABEL_28:
  v30 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return 0LL;
}
