/*
 * XREFs of ?ReportEdgeGesture_@TouchEdgeGestureTelemetry@@QEAAXW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@AEBUInputGestureOperation@Input@5UI@67@@Z @ 0x180571354
 * Callers:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x180570438 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180005218 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800FC65C (-Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?AnimationData@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18049200C (-AnimationData@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperatio.c)
 */

const struct _tlgProvider_t *__fastcall TouchEdgeGestureTelemetry::ReportEdgeGesture_(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v5; // rbx
  __int64 v6; // [rsp+48h] [rbp-30h] BYREF
  _QWORD v7[3]; // [rsp+58h] [rbp-20h] BYREF

  result = TouchGestureLogging::Provider(a1);
  v5 = (__int64)result;
  if ( *(_DWORD *)result > 5u )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::AnimationData(
      a3,
      &v6);
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::AnimationData(
      a3,
      v7);
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                                            v5,
                                            (__int64)&unk_1807E57D1);
  }
  return result;
}
