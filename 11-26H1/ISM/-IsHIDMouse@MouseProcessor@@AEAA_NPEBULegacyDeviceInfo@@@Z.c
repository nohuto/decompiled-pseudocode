/*
 * XREFs of ?IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z @ 0x18019C134
 * Callers:
 *     ?Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18019BF58 (-Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082C60 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ?GetDeviceInstanceId@winpnp@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x18010E144 (-GetDeviceInstanceId@winpnp@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?GetDeviceNode@winpnp@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAK@Z @ 0x18010E160 (-GetDeviceNode@winpnp@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAK@.c)
 *     ?GetDeviceGUIDProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01PEAU_GUID@@@Z @ 0x18010E6AC (-GetDeviceGUIDProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01PEAU_GUID@@@Z.c)
 */

bool __fastcall MouseProcessor::IsHIDMouse(MouseProcessor *this, const struct LegacyDeviceInfo *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned int (*v4)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *); // rcx
  const struct _DEVPROPKEY *v5; // r8
  bool v6; // bl
  DEVNODE pdnDevInst; // [rsp+20h] [rbp-60h] BYREF
  DEVNODE v9; // [rsp+28h] [rbp-58h] BYREF
  BYTE Buf1[32]; // [rsp+30h] [rbp-50h] BYREF
  WCHAR pDeviceID[8]; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  *(_OWORD *)pDeviceID = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  pDeviceID[0] = 0;
  std::wstring::wstring((__int64)Buf1, (__int64)a2 + 76);
  v3 = (unsigned int)winpnp::GetDeviceInstanceId(Buf1, (__int64)pDeviceID, v2) >> 31;
  std::wstring::_Tidy_deallocate(Buf1);
  v6 = (unsigned __int8)v3 != 1
    && (pdnDevInst = 0, (int)winpnp::GetDeviceNode(pDeviceID, &pdnDevInst) >= 0)
    && (*(_OWORD *)Buf1 = 0LL, v9 = pdnDevInst, (int)Details::GetDeviceGUIDProperty(v4, (Adapters *)&v9, v5, Buf1) >= 0)
    && memcmp_0(Buf1, &GUID_BUS_TYPE_HID, 0x10uLL) == 0;
  std::wstring::_Tidy_deallocate(pDeviceID);
  return v6;
}
