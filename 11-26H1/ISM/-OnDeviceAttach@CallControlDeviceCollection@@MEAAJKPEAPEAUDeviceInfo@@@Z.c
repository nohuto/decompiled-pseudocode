/*
 * XREFs of ?OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DB7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??$_Insert_or_assign@AEBKV?$array@G$0BE@@std@@@?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x18005CA88 (--$_Insert_or_assign@AEBKV-$array@G$0BE@@std@@@-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall CallControlDeviceCollection::OnDeviceAttach(
        CallControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v5; // rdx
  unsigned int v7; // [rsp+30h] [rbp-58h] BYREF
  struct RIMDevice *v8[2]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v9[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v7 = a2;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( Device < 0 )
  {
    v5 = 69LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  std::unordered_map<unsigned long,std::array<unsigned short,20>>::_Insert_or_assign<unsigned long const &,std::array<unsigned short,20>>(
    (float *)this + 690,
    (__int64)v8,
    (unsigned __int8 *)&v7,
    (__int64)v9);
  Device = RIMDeviceCollection::FindDevice(this, v7, 0LL, v8, 0LL);
  if ( Device < 0 )
  {
    v5 = 79LL;
    goto LABEL_3;
  }
  return 0LL;
}
