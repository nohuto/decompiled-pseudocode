/*
 * XREFs of ?OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF540
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A622C (-GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ.c)
 *     ?OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z @ 0x1800C9B18 (-OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticDeviceCollection::OnDeviceAttach(
        HapticDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  struct RIMDevice *v7; // r14
  int v8; // eax
  size_t v10; // rax
  struct RIMDevice *v11; // rax
  const unsigned __int16 *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  const struct std::nothrow_t *v16; // rdx
  HapticProcessor *HapticProcessor; // rax
  int v18; // eax
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct RIMDevice *v23; // [rsp+90h] [rbp+30h] BYREF

  if ( a3 )
  {
    *a3 = 0LL;
    Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
    if ( Device < 0 )
    {
      v6 = 83LL;
      goto LABEL_3;
    }
    v23 = 0LL;
    Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v23, 0LL);
    if ( Device < 0 )
    {
      v6 = 89LL;
      goto LABEL_3;
    }
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    LODWORD(v19) = 4;
    v7 = v23;
    v8 = RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v23 + 2), &v19);
    if ( v8 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x5E,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
               (const char *)(unsigned int)v8);
    v10 = 2LL * DWORD2(v19);
    if ( !is_mul_ok(DWORD2(v19), 2uLL) )
      v10 = -1LL;
    v11 = (struct RIMDevice *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = (const unsigned __int16 *)v11;
    v23 = v11;
    if ( v11 )
    {
      *(_QWORD *)&v20 = v11;
      v15 = RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v7 + 2), &v19);
      if ( v15 < 0 )
      {
        Device = wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)0x63,
                   (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
                   (const char *)(unsigned int)v15);
LABEL_20:
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v23, v16);
        return (unsigned int)Device;
      }
      HapticProcessor = ISMStatics::GetHapticProcessor();
      v18 = HapticProcessor::OnHapticInterfaceArrival(HapticProcessor, a2, v12);
      Device = v18;
      if ( v18 >= 0 )
      {
        Device = 0;
        goto LABEL_20;
      }
      v13 = (unsigned int)v18;
      v14 = 104LL;
    }
    else
    {
      Device = -2147024882;
      v13 = 2147942414LL;
      v14 = 97LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
      (const char *)v13);
    goto LABEL_20;
  }
  Device = -2147467261;
  v6 = 78LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
    (const char *)(unsigned int)Device);
  return (unsigned int)Device;
}
