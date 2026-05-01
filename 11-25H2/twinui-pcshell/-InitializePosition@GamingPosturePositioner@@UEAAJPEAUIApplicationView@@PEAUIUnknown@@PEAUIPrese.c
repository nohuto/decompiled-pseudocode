/*
 * XREFs of ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804E3810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804DE9E4 (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E2D00 (-HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsBackgroundActivation@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804E3974 (-IsBackgroundActivation@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall GamingPosturePositioner::InitializePosition(
        GamingPosturePositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  __int64 result; // rax
  const struct _tlgProvider_t *v8; // rax
  GamingPosturePositioner *v9; // rcx
  __int64 v10; // r9
  bool IsWin32ApplicationView; // al
  struct IApplicationView *v12; // rdx
  GamingPosturePositioner *v13; // rcx
  const char *v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v16; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 600) )
  {
    v8 = GamingPosturePositionerTraceProvider::Provider();
    if ( *(_DWORD *)v8 > 4u )
    {
      v16 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v8,
        byte_1807DCF7E,
        0LL,
        v10,
        (__int64)&v16);
    }
    IsWin32ApplicationView = GamingPosturePositioner::IsWin32ApplicationView(v9, a2);
    try
    {
      if ( IsWin32ApplicationView || GamingPosturePositioner::IsBackgroundActivation(v13, v12, a3) )
      {
        result = 0LL;
      }
      else
      {
        GamingPosturePositioner::HandleUwpApplicationView(
          (RTL_SRWLOCK *)this - 2,
          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2);
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
          (__int64 *)this + 24,
          (__int64)a2);
        result = 0LL;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x241,
                             (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                             v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22F,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
