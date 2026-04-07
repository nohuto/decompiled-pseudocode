/*
 * XREFs of ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x18009C8D0
 * Callers:
 *     ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A6310 (-_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004020C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 */

char __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = wil::details::static_lazy<WindowFrameLogging>::get((__int64)a1, a2);
  v4 = (_DWORD *)v3[1];
  if ( *v4 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v4, 0x200000000000LL);
    if ( (_BYTE)v3 )
    {
      v9 = *a1;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
                     v5,
                     (int)&unk_1800FFBED,
                     v6,
                     v7,
                     (__int64)&v9);
    }
  }
  return (char)v3;
}
