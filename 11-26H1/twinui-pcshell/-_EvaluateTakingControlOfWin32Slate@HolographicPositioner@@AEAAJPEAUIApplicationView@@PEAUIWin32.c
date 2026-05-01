/*
 * XREFs of ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x180406D1C
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18008EF10 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x1800F71BC (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[20]_ @ 0x18040127C (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[20]_.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[21]_ @ 0x180401328 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[21]_.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180407768 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3,
        char a4)
{
  __int64 result; // rax
  HWND ForegroundWindow; // rax
  HWND v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  LONG WindowLongW; // eax
  int v14; // ebx
  LONG v15; // eax
  __int64 v16; // rbx
  void (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  void *v18; // rdx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // eax
  void *v23; // rdx
  int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v29; // [rsp+70h] [rbp+30h] BYREF

  hWnd = 0LL;
  result = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a3 + 24LL))(a3, &hWnd);
  if ( (int)result >= 0 )
  {
    if ( !hWnd )
      return 2147943568LL;
    if ( GetWindow(hWnd, 4u) )
      return 0LL;
    if ( !HolographicPositioner::_IsInputContextHolographic(this) )
    {
      ForegroundWindow = GetForegroundWindow();
      v10 = hWnd;
      if ( hWnd == ForegroundWindow )
      {
LABEL_13:
        WindowLongW = GetWindowLongW(v10, -16);
        v14 = WindowLongW;
        if ( (WindowLongW & 0x40000000) != 0 )
          return 0LL;
        if ( (WindowLongW & 0x10000) == 0 )
          return 0LL;
        v15 = GetWindowLongW(hWnd, -20);
        if ( v14 < 0 && (v15 & 0x40000) == 0 && (v14 & 0x80880000) != 0x80880000 )
          return 0LL;
        Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(v27, (__int64)a3);
        v16 = v27[0];
        if ( v27[0] )
        {
          v17 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 34);
          v25 = 0LL;
          (**v17)(v17, &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1, &v25);
          if ( v25 )
          {
            v29 = (int)hWnd;
            LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____20__((__int64)a2, v18, &v29);
            v19 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64))(*(_QWORD *)v25 + 40LL))(
                    v25,
                    a2,
                    v16);
            v20 = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x9A1,
                (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v19);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
LABEL_34:
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v27);
              return v20;
            }
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
        }
        else if ( a4 )
        {
          v21 = *((_QWORD *)this + 32);
          if ( v21 )
          {
            if ( *((_BYTE *)this + 312) )
            {
              v29 = 0;
              v22 = (*(__int64 (__fastcall **)(__int64, struct IWin32ApplicationView *, int *))(*(_QWORD *)v21 + 32LL))(
                      v21,
                      a3,
                      &v29);
              if ( v22 >= 0 )
              {
                if ( v29 )
                {
                  LODWORD(v25) = (_DWORD)hWnd;
                  LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____21__(
                    (__int64)a2,
                    v23,
                    (int *)&v25);
                  v24 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 34)
                                                                                              + 24LL))(
                          *((_QWORD *)this + 34),
                          a2,
                          6LL);
                  v20 = v24;
                  if ( v24 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x9AA,
                      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                      (const char *)(unsigned int)v24);
                    goto LABEL_34;
                  }
                }
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x9A7,
                  (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                  (const char *)(unsigned int)v22);
              }
            }
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v27);
        return 0LL;
      }
      if ( !a4 )
        return 0LL;
      v11 = *((_QWORD *)this + 32);
      if ( !v11 )
        return 0LL;
      v29 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, struct IWin32ApplicationView *, int *))(*(_QWORD *)v11 + 32LL))(
              v11,
              a3,
              &v29);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x973,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v12);
        return 0LL;
      }
      if ( !v29 )
        return 0LL;
    }
    v10 = hWnd;
    goto LABEL_13;
  }
  return result;
}
