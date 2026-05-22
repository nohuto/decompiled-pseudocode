/*
 * XREFs of ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800E17B8
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DCFF0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007274C (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall DockDevice::TryGetDockInputReport(DockDevice *this, struct GetInputReportResult *a2)
{
  NTSTATUS SpecificButtonCaps; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  _BYTE *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  const struct std::nothrow_t *v11; // rdx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-A8h]
  USHORT ButtonCapsLength[2]; // [rsp+50h] [rbp-88h] BYREF
  int v15; // [rsp+54h] [rbp-84h] BYREF
  void *v16; // [rsp+58h] [rbp-80h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+60h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  memset_0(&ButtonCaps, 0, sizeof(ButtonCaps));
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  ButtonCapsLength[0] = 1;
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                         HidP_Input,
                         1u,
                         0,
                         0xD4u,
                         &ButtonCaps,
                         ButtonCapsLength,
                         PreparsedData);
  v5 = SpecificButtonCaps;
  if ( SpecificButtonCaps >= 0 )
  {
    v6 = *((unsigned __int16 *)this + 32);
    v7 = operator new[](*((unsigned __int16 *)this + 32));
    memset_0(v7, 0, v6);
    *v7 = ButtonCaps.ReportID;
    v8 = *((_QWORD *)this + 2);
    v9 = *((_QWORD *)this + 1);
    v16 = v7;
    v15 = 0;
    v10 = NtRIMDeviceIoControl(v9, v8, 721314LL, 0LL, 0, v7, v6, &v15, 0);
    v5 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)a2 = *((_DWORD *)this + 10);
      *((_DWORD *)a2 + 4) = v6;
      std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(
        (void **)a2 + 1,
        (const struct std::nothrow_t *)&v16);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
        (const char *)(unsigned int)v10);
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v16, v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)SpecificButtonCaps);
  }
  return v5;
}
