/*
 * XREFs of ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DCFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180091F84 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$emplace_back@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAAEAUGetInputReportResult@@$$QEAU2@@Z @ 0x1800DC9C0 (--$emplace_back@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UGetInputRep.c)
 *     ??1?$unique_ptr@UDockDeviceInfo@@U?$default_delete@UDockDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800DCAD0 (--1-$unique_ptr@UDockDeviceInfo@@U-$default_delete@UDockDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z @ 0x1800DCDA0 (-DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800E1440 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800E17B8 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DockDeviceCollection::OnDeviceAttach(wil::details **this, int a2, struct DeviceInfo **a3)
{
  struct RIMDevice *v6; // rsi
  int Device; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int DockInputReport; // eax
  const struct std::nothrow_t *v11; // rdx
  void *v12; // rdx
  struct DeviceInfo *v14; // [rsp+30h] [rbp-30h] BYREF
  struct RIMDevice *v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  void *v17[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct RIMDevice *v19; // [rsp+98h] [rbp+38h] BYREF

  v6 = (struct RIMDevice *)operator new(0x694uLL);
  v19 = v6;
  memset_0(v6, 0, 0x694uLL);
  memset_0(v6, 0, 0x60CuLL);
  *((_DWORD *)v6 + 2) = 1548;
  v15 = v6;
  v14 = v6;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, &v14);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 99LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_12;
  }
  v19 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v19, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 105LL;
    goto LABEL_5;
  }
  Device = DockDevice::Initialize(v19, v6);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 107LL;
    goto LABEL_5;
  }
  InputTraceLogging::DeviceDock::DockDeviceAttached(a2, v6);
  v16 = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  DockInputReport = DockDevice::TryGetDockInputReport(v19, (struct GetInputReportResult *)&v16);
  if ( DockInputReport >= 0 )
  {
    v19 = (struct RIMDevice *)(this + 352);
    std::_Mutex_base::lock((std::_Mutex_base *)(this + 352));
    std::deque<GetInputReportResult>::emplace_back<GetInputReportResult>(this + 347, (__int64)&v16);
    wil::details::SetEvent(this[346], v12);
    _Mtx_unlock((_Mtx_t)(this + 352));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x71,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)DockInputReport);
  }
  *a3 = v14;
  v15 = 0LL;
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v17, v11);
  v8 = 0;
LABEL_12:
  std::unique_ptr<DockDeviceInfo>::~unique_ptr<DockDeviceInfo>((void **)&v15);
  return v8;
}
