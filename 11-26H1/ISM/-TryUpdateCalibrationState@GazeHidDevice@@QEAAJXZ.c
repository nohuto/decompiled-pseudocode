/*
 * XREFs of ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800E0BA8
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800E088C (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180187820 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x180187C54 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateCalibrationState(GazeHidDevice *this)
{
  __int64 v2; // rsi
  char *v3; // r14
  const struct std::nothrow_t *v4; // rdx
  int v5; // ebx
  unsigned int v7; // ebx
  int v8; // eax
  int PropertyValue; // eax
  const struct std::nothrow_t *v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v12; // [rsp+90h] [rbp+30h] BYREF
  int v13; // [rsp+98h] [rbp+38h] BYREF
  int v14; // [rsp+A0h] [rbp+40h] BYREF
  void *v15; // [rsp+A8h] [rbp+48h] BYREF

  v15 = 0LL;
  v12 = 0;
  v2 = *((_QWORD *)this + 4);
  *(_BYTE *)(v2 + 1548) = 2;
  v3 = (char *)this + 128;
  v5 = GazeHidParser::CreateReportForProperty((char *)this + 128, 2LL, &v15, &v12);
  if ( v5 < 0 )
  {
LABEL_2:
    if ( v15 )
      operator delete(v15, v4);
    return (unsigned int)v5;
  }
  v14 = 0;
  v7 = v12;
  v8 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v15, v12, &v14, 0);
  if ( v8 < 0 )
  {
    v5 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x133,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
           (const char *)(unsigned int)v8);
    goto LABEL_2;
  }
  v13 = 0;
  PropertyValue = GazeHidParser::GetPropertyValue(v3, 2LL, v15, v7, 2, &v13, 4);
  if ( PropertyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x13D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)PropertyValue);
  *(_BYTE *)(v2 + 1548) = v13;
  if ( v15 )
    operator delete(v15, v10);
  return 0LL;
}
