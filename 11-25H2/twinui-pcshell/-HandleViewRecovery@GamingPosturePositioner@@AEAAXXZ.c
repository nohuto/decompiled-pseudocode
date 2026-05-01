/*
 * XREFs of ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2EFC
 * Callers:
 *     ?perform_delayed_initialization@GamingPosturePositioner@@UEAAXXZ @ 0x1804E53C0 (-perform_delayed_initialization@GamingPosturePositioner@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?BringToFront@ApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z @ 0x1804E1F18 (-BringToFront@ApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetForegroundRootSwitchableView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E2750 (-GetForegroundRootSwitchableView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@.c)
 *     ?GetLastView@ApplicationViewCollection@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E2860 (-GetLastView@ApplicationViewCollection@@QEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 *     ?GetRootSwitchableView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1804E2B20 (-GetRootSwitchableView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_excep.c)
 *     ?HandleApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E2C10 (-HandleApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsViewManaged@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804E3AA0 (-IsViewManaged@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E3B24 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E4C54 (-SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall GamingPosturePositioner::HandleViewRecovery(GamingPosturePositioner *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  struct IUnknown *v5; // rdi
  unsigned int i; // r15d
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, _QWORD, GUID *, struct IApplicationView **); // rsi
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r9
  int v14; // eax
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r9
  int ViewPrimary; // eax
  struct IApplicationView *v18; // rbx
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r9
  int v21; // eax
  struct IUnknown *v22; // [rsp+30h] [rbp-28h] BYREF
  int v23[2]; // [rsp+38h] [rbp-20h] BYREF
  GamingPosturePositioner *v24; // [rsp+40h] [rbp-18h]
  char v25; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  struct IApplicationView *v27; // [rsp+90h] [rbp+38h] BYREF
  struct IApplicationView *v28; // [rsp+98h] [rbp+40h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+48h] BYREF
  struct IUnknown *v30; // [rsp+A8h] [rbp+50h] BYREF

  *((_BYTE *)this + 618) = 1;
  v24 = this;
  v25 = 1;
  GamingPosturePositioner::GetForegroundRootSwitchableView((__int64)this, (__int64 *)&v22);
  v29 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 20);
  v3 = *v2;
  v29 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 24))(v2, &v29);
  v5 = v22;
  if ( v4 >= 0 )
  {
    LODWORD(v27) = 0;
    (*(void (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v29 + 24LL))(v29, &v27);
    for ( i = 0; i < (unsigned int)v27; ++i )
    {
      v28 = 0LL;
      v7 = v29;
      v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v29 + 32LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v28);
      if ( v8(v7, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v28) >= 0
        && GamingPosturePositioner::IsViewManaged(this, v28) )
      {
        v9 = GamingPosturePositionerTraceProvider::Provider();
        if ( *(_DWORD *)v9 > 4u )
        {
          *(_QWORD *)v23 = v28;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (__int64)v9,
            byte_1807DCE10,
            0LL,
            v10,
            (__int64)v23);
        }
        GamingPosturePositioner::HandleApplicationView(this, v28);
        GamingPosturePositioner::GetRootSwitchableView(v11, (__int64 *)&v30, (__int64)v28);
        if ( !SHIsSameObject(v30, v5) )
        {
          v12 = GamingPosturePositionerTraceProvider::Provider();
          if ( *(_DWORD *)v12 > 4u )
          {
            *(_QWORD *)v23 = v28;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
              (__int64)v12,
              byte_1807DCDDD,
              0LL,
              v13,
              (__int64)v23);
          }
          v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64))(*(_QWORD *)v28 + 96LL))(
                  v28,
                  1LL,
                  1LL);
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1A1,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
              (const char *)(unsigned int)v14);
        }
        ApplicationViewCollection::BringToFront((RTL_SRWLOCK *)this + 83, (struct IUnknown *)v28);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
    }
  }
  if ( v5 && GamingPosturePositioner::IsViewManaged(this, (struct IApplicationView *)v5) )
  {
    v15 = GamingPosturePositionerTraceProvider::Provider();
    if ( *(_DWORD *)v15 > 4u )
    {
      v27 = (struct IApplicationView *)v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v15,
        byte_1807DCD96,
        0LL,
        v16,
        (__int64)&v27);
    }
    ApplicationViewCollection::BringToFront((RTL_SRWLOCK *)this + 83, v5);
    ViewPrimary = GamingPosturePositioner::MakeViewPrimary(this, (struct IApplicationView *)v5);
    if ( ViewPrimary < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AE,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        (const char *)(unsigned int)ViewPrimary);
  }
  else
  {
    ApplicationViewCollection::GetLastView((RTL_SRWLOCK *)this + 83, (__int64 *)&v27);
    v18 = v27;
    if ( v27 )
    {
      v19 = GamingPosturePositionerTraceProvider::Provider();
      if ( *(_DWORD *)v19 > 4u )
      {
        v28 = v18;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (__int64)v19,
          byte_1807DCFA6,
          0LL,
          v20,
          (__int64)&v28);
      }
      v21 = GamingPosturePositioner::MakeViewPrimary(this, v18);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1B7,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          (const char *)(unsigned int)v21);
      GamingPosturePositioner::SetFocus(this, v18);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  *((_BYTE *)this + 618) = 0;
}
