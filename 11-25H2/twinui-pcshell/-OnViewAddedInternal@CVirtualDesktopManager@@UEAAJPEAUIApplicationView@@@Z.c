/*
 * XREFs of ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18026A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180194050 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1801BEEA0 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopManager::OnViewAddedInternal(
        CVirtualDesktopManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  int CurrentDesktopInternal; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall **v6)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v7; // eax
  __int64 v8; // rdx
  struct IApplicationView *v9; // rdx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, __int128 *); // rbx
  __int64 WindowForView; // rax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  struct IVirtualDesktop *v19; // [rsp+28h] [rbp-48h] BYREF
  int v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  struct IVirtualDesktop *v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v22 = 0LL;
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(this, &v22);
  v5 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal >= 0 )
  {
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      (__int64 *)&v19,
      (__int64 *)&v22);
    v18 = 0LL;
    v6 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v22;
    v18 = 0LL;
    v7 = (*v6)(v22, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v18);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v20 = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 64LL))(v18, &v20);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v23 = 0LL;
        v24 = 0LL;
        v10 = *((_QWORD *)this + 27);
        if ( v10 )
        {
          v11 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v10 + 136LL);
          WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v9);
          v13 = v11(v10, WindowForView, &v23);
          if ( v13 >= 0 )
          {
            if ( v20 )
            {
              if ( !(_BYTE)v23 )
                wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
                  (__int64 *)&v19,
                  *((_QWORD *)this + 23));
            }
            else if ( (_BYTE)v23 && !BYTE4(v24) )
            {
              v21 = 0LL;
              v14 = (__int64 *)*((_QWORD *)this + 12);
              v15 = *v14;
              v21 = 0LL;
              v16 = (*(__int64 (__fastcall **)(__int64 *, char *, __int64 *))(v15 + 88))(v14, (char *)&v23 + 4, &v21);
              if ( v16 >= 0 )
                wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
                  (__int64 *)&v19,
                  v21);
              else
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x50D,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                  (const char *)(unsigned int)v16);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4FF,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v13);
          }
        }
        v7 = CVirtualDesktopManager::OnViewAddedInternal(this, (struct IApplicationView *)a2, v19);
        v5 = v7;
        if ( v7 >= 0 )
          goto LABEL_22;
        v8 = 1299LL;
      }
      else
      {
        v8 = 1275LL;
      }
    }
    else
    {
      v8 = 1273LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_22:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F5,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)CurrentDesktopInternal);
LABEL_23:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  return v5;
}
