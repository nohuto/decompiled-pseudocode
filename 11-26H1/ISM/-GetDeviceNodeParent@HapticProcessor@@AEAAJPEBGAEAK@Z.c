/*
 * XREFs of ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C98D0
 * Callers:
 *     ?OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z @ 0x1800C9B18 (-OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z.c)
 *     ?OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9D18 (-OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetDeviceInstanceId@winpnp@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x18010E144 (-GetDeviceInstanceId@winpnp@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?GetDeviceNode@winpnp@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAK@Z @ 0x18010E160 (-GetDeviceNode@winpnp@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAK@.c)
 *     ?GetDeviceNodeParent@winpnp@@YAJKAEAK@Z @ 0x18010E1F0 (-GetDeviceNodeParent@winpnp@@YAJKAEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticProcessor::GetDeviceNodeParent(
        HapticProcessor *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  int DeviceInstanceId; // ebx
  int DeviceNode; // eax
  unsigned int *v6; // r8
  DEVNODE pdnDevInst; // [rsp+20h] [rbp-50h] BYREF
  WCHAR pDeviceID[8]; // [rsp+28h] [rbp-48h] BYREF
  __m128i si128; // [rsp+38h] [rbp-38h]
  _QWORD v11[4]; // [rsp+48h] [rbp-28h] BYREF

  *(_OWORD *)pDeviceID = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  pDeviceID[0] = 0;
  std::wstring::wstring((__int64)v11, (__int64)a2);
  DeviceInstanceId = winpnp::GetDeviceInstanceId(v11, pDeviceID);
  std::wstring::_Tidy_deallocate(v11);
  if ( DeviceInstanceId >= 0 )
  {
    pdnDevInst = 0;
    DeviceNode = winpnp::GetDeviceNode(pDeviceID, &pdnDevInst);
    if ( DeviceNode >= 0 )
    {
      winpnp::GetDeviceNodeParent(pdnDevInst, a3, v6);
      DeviceInstanceId = 0;
    }
    else
    {
      DeviceInstanceId = DeviceNode;
    }
  }
  std::wstring::_Tidy_deallocate(pDeviceID);
  return (unsigned int)DeviceInstanceId;
}
