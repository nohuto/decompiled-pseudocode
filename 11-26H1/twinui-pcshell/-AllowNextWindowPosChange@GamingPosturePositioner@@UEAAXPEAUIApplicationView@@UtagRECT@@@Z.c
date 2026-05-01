/*
 * XREFs of ?AllowNextWindowPosChange@GamingPosturePositioner@@UEAAXPEAUIApplicationView@@UtagRECT@@@Z @ 0x1804F8CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801C0804 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$AllowNextRepositionOfView@PEAUHWND__@@AEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAX$$QEAPEAUHWND__@@AEAJ111@Z @ 0x1804F2890 (--$AllowNextRepositionOfView@PEAUHWND__@@AEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvid.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingPosturePositioner::AllowNextWindowPosChange(
        GamingPosturePositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct tagRECT *a3)
{
  struct IApplicationView *v6; // rdx
  const struct _tlgProvider_t *v7; // rax
  const char *v8; // r9
  LONG v9; // ecx
  LONG v10; // edx
  LONG v11; // r8d
  LONG bottom; // [rsp+50h] [rbp-38h] BYREF
  LONG right; // [rsp+54h] [rbp-34h] BYREF
  LONG top; // [rsp+58h] [rbp-30h] BYREF
  __int64 WindowForView; // [rsp+60h] [rbp-28h] BYREF
  __int64 (__fastcall ***v16)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v6);
      GamingPosturePositionerTelemetryProvider::AllowNextRepositionOfView<HWND__ *,long &,long &,long &,long &>(
        &WindowForView,
        &a3->left,
        &a3->top,
        &a3->right,
        &a3->bottom);
    }
    else if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v7 = GamingPosturePositionerTelemetryProvider::Provider();
      if ( *(_DWORD *)v7 > 4u )
      {
        bottom = a3->bottom;
        right = a3->right;
        top = a3->top;
        LODWORD(WindowForView) = a3->left;
        v16 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)v7,
          byte_180816640,
          0LL,
          0LL,
          (__int64)&v16,
          (__int64)&WindowForView,
          (__int64)&top,
          (__int64)&right,
          (__int64)&bottom);
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
      (__int64 *)this + 99,
      (__int64)a2);
    v9 = a3->top;
    v10 = a3->right;
    v11 = a3->bottom;
    *((_DWORD *)this + 200) = a3->left;
    *((_DWORD *)this + 201) = v9;
    *((_DWORD *)this + 202) = v10;
    *((_DWORD *)this + 203) = v11;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x897,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v8);
  }
}
