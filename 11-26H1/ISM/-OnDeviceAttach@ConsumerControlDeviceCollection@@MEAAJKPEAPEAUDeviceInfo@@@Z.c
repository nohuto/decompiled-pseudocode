/*
 * XREFs of ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DADC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     ??$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@?$unordered_map@KUUsageList@MobileButtonDeviceCollection@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@4@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x1800D915C (--$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@-$unordered_map@KUUsageLis.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceAttach(
        ConsumerControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v5; // rdx
  _OWORD *v7; // rax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  struct RIMDevice *v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a2;
  HIDWORD(v8) = 0;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( Device < 0 )
  {
    v5 = 92LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v7 = operator new[](0x28uLL);
  *(_QWORD *)&v8 = v7;
  DWORD2(v8) = 20;
  *v7 = 0LL;
  v7[1] = 0LL;
  *((_QWORD *)v7 + 4) = 0LL;
  std::unordered_map<unsigned long,MobileButtonDeviceCollection::UsageList>::_Insert_or_assign<unsigned long const &,MobileButtonDeviceCollection::UsageList &>(
    (float *)this + 690,
    (__int64)v9,
    (unsigned __int8 *)&v11,
    &v8);
  Device = RIMDeviceCollection::FindDevice(this, v11, 0LL, &v12, 0LL);
  if ( Device < 0 )
  {
    v5 = 108LL;
    goto LABEL_3;
  }
  return 0LL;
}
