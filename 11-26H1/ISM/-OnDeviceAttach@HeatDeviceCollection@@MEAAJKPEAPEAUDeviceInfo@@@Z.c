/*
 * XREFs of ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DBFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18008A840 (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HeatDeviceCollection::OnDeviceAttach(HeatDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  char *v6; // rdi
  int Device; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbx
  struct DeviceInfo *v12; // [rsp+30h] [rbp-40h] BYREF
  void *v13; // [rsp+38h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct RIMDevice *v18; // [rsp+A8h] [rbp+38h] BYREF

  v18 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = (char *)operator new(0x60CuLL);
  memset_0(v6, 0, 0x60CuLL);
  *((_DWORD *)v6 + 2) = 1548;
  v13 = v6;
  v12 = (struct DeviceInfo *)v6;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, &v12);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 110LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_9;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v18, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 115LL;
    goto LABEL_5;
  }
  v10 = *((_QWORD *)v18 + 2);
  NtRIMEnableMonitorMappingForDevice(*((_QWORD *)this + 10), v10, 0LL);
  if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v10, &v14) >= 0 )
  {
    *(_QWORD *)(v6 + 20) = v15;
    *((_DWORD *)v6 + 7) = DWORD2(v15);
  }
  *a3 = v12;
  v13 = 0LL;
  v8 = 0;
LABEL_9:
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(&v13);
  return v8;
}
