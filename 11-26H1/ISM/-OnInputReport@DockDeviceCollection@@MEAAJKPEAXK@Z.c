/*
 * XREFs of ?OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DD1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800DFE3C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?GetInputInfoForReport@DockDevice@@QEAAJPEADGPEAUDockInputInfo@@@Z @ 0x1800E0F88 (-GetInputInfoForReport@DockDevice@@QEAAJPEADGPEAUDockInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DockDeviceCollection::OnInputReport(DockDeviceCollection *this, int a2, char *a3, unsigned int a4)
{
  int Device; // ebx
  __int64 v8; // rdx
  struct _HIDP_CAPS *v10; // rsi
  unsigned int InputReportByteLength; // ebx
  int InputInfoForReport; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  struct RIMDevice *v15; // [rsp+30h] [rbp-A8h] BYREF
  struct _HIDP_CAPS *v16; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v17[96]; // [rsp+40h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v15 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v15, 0LL);
  if ( Device < 0 )
  {
    v8 = 151LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v16 = 0LL;
  Device = HIDDevice::GetHIDCapabilities(v15, &v16);
  if ( Device < 0 )
  {
    v8 = 154LL;
    goto LABEL_3;
  }
  v10 = v16;
  InputReportByteLength = v16->InputReportByteLength;
  if ( a4 >= InputReportByteLength )
  {
    while ( 1 )
    {
      memset_0(v17, 0, 0x58uLL);
      InputInfoForReport = DockDevice::GetInputInfoForReport(
                             v15,
                             a3,
                             InputReportByteLength,
                             (struct DockInputInfo *)v17);
      if ( InputInfoForReport < 0 )
        break;
      InputInfoForReport = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                             *((_QWORD *)this + 2),
                             v17);
      if ( InputInfoForReport < 0 )
      {
        v13 = 166LL;
        goto LABEL_11;
      }
LABEL_12:
      v14 = v10->InputReportByteLength;
      a4 -= v14;
      a3 += v14;
      LOWORD(InputReportByteLength) = v10->InputReportByteLength;
      if ( a4 < (unsigned int)v14 )
        return 0LL;
    }
    v13 = 164LL;
LABEL_11:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)InputInfoForReport);
    goto LABEL_12;
  }
  return 0LL;
}
