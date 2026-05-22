/*
 * XREFs of ?GetDeviceInstanceId@winpnp@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x18010E144
 * Callers:
 *     ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C98D0 (-GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z.c)
 *     ?IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z @ 0x18019C134 (-IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winpnp::GetDeviceInstanceId(_QWORD *a1, __int64 a2, __int64 a3)
{
  if ( a1[3] > 7uLL )
    a1 = (_QWORD *)*a1;
  return Details::GetDeviceStringProperty(a1, a1, a3, a2);
}
