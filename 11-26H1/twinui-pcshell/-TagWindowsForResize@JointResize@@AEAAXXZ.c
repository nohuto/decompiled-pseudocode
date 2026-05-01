/*
 * XREFs of ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053A908
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180538F90 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x180285324 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180537B38 (--4JointResize@JointResizeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TagViewWithLogoAsync@JointResize@@AEAA?AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTRANSITION_TARGET@@@Z @ 0x18053A860 (-TagViewWithLogoAsync@JointResize@@AEAA-AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTR.c)
 *     ?TagWindowsForResize@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x18053AA88 (-TagWindowsForResize@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
 *     ?TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA?AV12@XZ @ 0x18053AAD8 (-TransferToCurrentThread@JointResize@JointResizeTelemetry@@QEAA-AV12@XZ.c)
 *     ?TransferToMember@JointResize@JointResizeTelemetry@@QEAA?AV12@XZ @ 0x18053AB14 (-TransferToMember@JointResize@JointResizeTelemetry@@QEAA-AV12@XZ.c)
 */

void __fastcall JointResize::TagWindowsForResize(JointResize *this)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8[4]; // [rsp+20h] [rbp-2D8h] BYREF
  _BYTE v9[336]; // [rsp+30h] [rbp-2C8h] BYREF
  _BYTE v10[336]; // [rsp+180h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 496);
  JointResizeTelemetry::JointResize::TransferToCurrentThread((char *)this + 496, v9);
  DwmpTransitionWindow(*((_QWORD *)this + 36), 1073741918LL);
  v3 = *((_QWORD *)this + 27);
  v4 = *((_QWORD *)this + 28);
  while ( v3 != v4 )
  {
    switch ( *(_DWORD *)(v3 + 8) )
    {
      case 0xA:
        v5 = *(_BYTE *)(v3 + 40) != 0 ? 96 : 99;
        break;
      case 0xB:
        v5 = *(_BYTE *)(v3 + 40) != 0 ? 95 : 100;
        break;
      case 0xC:
        v5 = *(_BYTE *)(v3 + 40) != 0 ? 98 : 101;
        break;
      case 0xF:
        v5 = *(_BYTE *)(v3 + 40) != 0 ? 97 : 102;
        break;
      default:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x252,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)0x80070057LL,
          v8[0]);
    }
    v6 = v5;
    LODWORD(v6) = v5 | 0x40000000;
    DwmpTransitionWindow(*(_QWORD *)(v3 + 16), v6);
    JointResize::TagViewWithLogoAsync((void (__fastcall *)(char *))this, v8, (void (__fastcall *)(char *))v3, v5);
    v3 += 96LL;
  }
  JointResizeTelemetry::JointResize::TagWindowsForResize((JointResizeTelemetry::JointResize *)v9);
  v7 = JointResizeTelemetry::JointResize::TransferToMember(v9, v10);
  JointResizeTelemetry::JointResize::operator=(v1, v7);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v10);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v9);
}
