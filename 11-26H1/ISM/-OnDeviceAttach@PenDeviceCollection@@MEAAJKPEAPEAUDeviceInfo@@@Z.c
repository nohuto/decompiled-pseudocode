/*
 * XREFs of ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5E0C (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceManager@@@Z @ 0x1800C7ED4 (--0-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceMana.c)
 *     ??4?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVHapticDeviceManager@@@Z @ 0x1800C8080 (--4-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVHapticDevi.c)
 *     ??$?9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800C80D4 (--$-9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ??0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018D88C (--0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z @ 0x18018E1EC (-AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenDeviceCollection::OnDeviceAttach(void **this, int a2, struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v9; // rax
  struct ISMBamos_AutoBamos::BamoConnection *v10; // rbx
  HapticDeviceManager *v11; // rax
  struct InputSystemServerConnection *v12; // rax
  HapticDeviceManager *v13; // rbx
  struct RIMDevice *v14; // [rsp+30h] [rbp-18h] BYREF
  HapticDeviceManager *v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HapticDeviceManager *v17; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( Device < 0 )
  {
    v6 = 83LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v14, 0LL);
  if ( Device < 0 )
  {
    v6 = 87LL;
    goto LABEL_3;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>(
    &v17,
    v9);
  if ( wil::operator!=<PenHapticDevice,wil::err_exception_policy>(&v17) )
  {
    v13 = v17;
  }
  else
  {
    v10 = ISMStatics::GetBamoServerConnection();
    v15 = (HapticDeviceManager *)operator new(0xA0uLL);
    v11 = HapticDeviceManager::HapticDeviceManager(v15, v10);
    wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::operator=((__int64 *)&v17, (__int64)v11);
    v12 = ISMStatics::GetBamoServerConnection();
    v13 = v17;
    (*(void (__fastcall **)(__int64, HapticDeviceManager *))(*(_QWORD *)(*((_QWORD *)v12 + 31) + 8LL) + 176LL))(
      *((_QWORD *)v12 + 31) + 8LL,
      v17);
  }
  HapticDeviceManager::AttachRIMDevice(v13, this[10], *((void **)v14 + 2));
  wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)&v17);
  return 0LL;
}
