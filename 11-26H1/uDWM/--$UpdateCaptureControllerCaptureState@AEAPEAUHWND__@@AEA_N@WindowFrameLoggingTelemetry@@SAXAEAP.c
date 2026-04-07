/*
 * XREFs of ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x18009C808
 * Callers:
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5E48 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800415C4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

char __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(
        __int64 *a1,
        char *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  char v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  char *v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v4 = wil::details::static_lazy<WindowFrameLogging>::get((__int64)a1, (__int64)a2);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v8 = *a2;
      v9 = *a1;
      v13 = &v8;
      v11 = &v9;
      v14 = 1LL;
      v12 = 8LL;
      LOBYTE(v4) = tlgWriteTransfer_EtwEventWriteTransfer(v6, byte_1800FFBAC, 0LL, 0LL, 4, (__int64)v10);
    }
  }
  return (char)v4;
}
