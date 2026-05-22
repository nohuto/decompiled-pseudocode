/*
 * XREFs of ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800E0D04
 * Callers:
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x1800E06A4 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800E088C (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x18010B450 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180187820 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x180187AD8 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x180187C54 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateDisplayMapping(GazeHidDevice *this)
{
  __int64 v2; // r14
  GazeHidParser *v3; // rdi
  int CalibratedRegion; // eax
  int v5; // ebx
  const struct std::nothrow_t *v6; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  int PropertyValue; // eax
  unsigned int *v11; // r9
  int AdapterAndTargetFromEdid; // eax
  int v13; // eax
  const struct std::nothrow_t *v14; // rdx
  char *v15; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+Fh] BYREF
  int v17; // [rsp+64h] [rbp+13h] BYREF
  char **v18; // [rsp+68h] [rbp+17h]
  char v19; // [rsp+70h] [rbp+1Fh]
  __int64 v20; // [rsp+78h] [rbp+27h] BYREF
  __int16 v21; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v15 = 0LL;
  v16 = 0;
  v18 = &v15;
  v19 = 1;
  v2 = *((_QWORD *)this + 4);
  v3 = (GazeHidDevice *)((char *)this + 128);
  CalibratedRegion = GazeHidParser::GetCalibratedRegion(
                       (GazeHidDevice *)((char *)this + 128),
                       0LL,
                       0,
                       (struct tagRECT *)(v2 + 1552));
  v5 = CalibratedRegion;
  if ( CalibratedRegion < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)CalibratedRegion);
LABEL_3:
    if ( v15 )
      operator delete(v15, v6);
    return (unsigned int)v5;
  }
  v5 = GazeHidParser::CreateReportForProperty(v3, 3LL, &v15, &v16);
  if ( v5 < 0 )
    goto LABEL_3;
  v17 = 0;
  v8 = v16;
  v9 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v15, v16, &v17, 0);
  if ( v9 < 0 )
  {
    v5 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xD0,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
           (const char *)(unsigned int)v9);
    goto LABEL_3;
  }
  v20 = 0LL;
  v21 = 0;
  PropertyValue = GazeHidParser::GetPropertyValue(v3, 3LL, v15, v8, 2, &v20, 10);
  if ( PropertyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)PropertyValue);
  AdapterAndTargetFromEdid = DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
                               (DisplayEdidHelpers *)&v20,
                               (const struct EdidIdentificationBlock *)(v2 + 1572),
                               (struct _LUID *)(v2 + 1580),
                               v11);
  if ( AdapterAndTargetFromEdid < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)AdapterAndTargetFromEdid);
  v13 = GazeHidParser::GetCalibratedRegion(v3, v15, v8, (struct tagRECT *)(v2 + 1552));
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v13);
  if ( v15 )
    operator delete(v15, v14);
  return 0LL;
}
