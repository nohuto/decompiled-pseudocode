/*
 * XREFs of ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804E4070
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804DE9E4 (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804DF4A4 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?BringToFront@ApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z @ 0x1804E1F18 (-BringToFront@ApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2E50 (-HandleViewFallback@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E31E0 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E3B24 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N@Z @ 0x1804E49D8 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  RTL_SRWLOCK *v5; // rdi
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r9
  unsigned __int8 *v14; // rdx
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r9
  int ViewPrimary; // eax
  const char *v18; // r9
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r9
  struct IUnknown *Ptr; // rdx
  const struct _tlgProvider_t *v22; // rax
  GamingPosturePositioner *v23; // rcx
  __int64 v24; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v26)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v5 = a1 - 5;
  if ( !LOBYTE(a1[72].Ptr) )
    return 0LL;
  if ( !a3 )
  {
    v22 = GamingPosturePositionerTraceProvider::Provider();
    if ( *(_DWORD *)v22 > 4u )
    {
      v26 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v22,
        byte_1807DD09A,
        0LL,
        v24,
        (__int64)&v26);
    }
    if ( GamingPosturePositioner::IsWin32ApplicationView(v23, (struct IApplicationView *)a2) )
      GamingPosturePositioner::HandleWin32ApplicationView(v5, a2);
    return 0LL;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v19 = GamingPosturePositionerTraceProvider::Provider();
    if ( *(_DWORD *)v19 > 4u )
    {
      v26 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v19,
        byte_1807DD079,
        0LL,
        v20,
        (__int64)&v26);
    }
    ApplicationViewCollection::RemoveView(a1 + 78, (struct IUnknown *)a2);
    ApplicationViewCollection::RemoveView(a1 + 74, (struct IUnknown *)a2);
    Ptr = (struct IUnknown *)a1[23].Ptr;
    if ( Ptr && SHIsSameObject((struct IUnknown *)a2, Ptr) )
    {
      GamingPosturePositioner::ReleasePrimaryView((GamingPosturePositioner *)v5, 0);
      GamingPosturePositioner::HandleViewFallback((GamingPosturePositioner *)v5);
    }
    return 0LL;
  }
  v8 = v7 - 6;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 0LL;
          v12 = GamingPosturePositionerTraceProvider::Provider();
          if ( *(_DWORD *)v12 <= 4u )
            return 0LL;
          v14 = (unsigned __int8 *)&unk_1807DCA05;
          goto LABEL_18;
        }
        v12 = GamingPosturePositionerTraceProvider::Provider();
        if ( *(_DWORD *)v12 > 4u )
        {
          v14 = (unsigned __int8 *)&unk_1807DCFE7;
LABEL_18:
          v26 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (__int64)v12,
            v14,
            0LL,
            v13,
            (__int64)&v26);
        }
      }
      else
      {
        v12 = GamingPosturePositionerTraceProvider::Provider();
        if ( *(_DWORD *)v12 > 4u )
        {
          v14 = (unsigned __int8 *)&unk_1807DD012;
          goto LABEL_18;
        }
      }
    }
    else
    {
      v12 = GamingPosturePositionerTraceProvider::Provider();
      if ( *(_DWORD *)v12 > 4u )
      {
        v14 = (unsigned __int8 *)&unk_1807DD033;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v15 = GamingPosturePositionerTraceProvider::Provider();
    if ( *(_DWORD *)v15 > 4u )
    {
      v26 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v15,
        byte_1807DD05A,
        0LL,
        v16,
        (__int64)&v26);
    }
    try
    {
      ApplicationViewCollection::BringToFront(a1 + 78, (struct IUnknown *)a2);
      ViewPrimary = GamingPosturePositioner::MakeViewPrimary((GamingPosturePositioner *)v5, a2);
      if ( ViewPrimary < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x352,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          (const char *)(unsigned int)ViewPrimary);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x374,
                             (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                             v18);
    }
  }
  return 0LL;
}
