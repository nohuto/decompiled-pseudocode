/*
 * XREFs of ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18010E758
 * Callers:
 *     ?GetDeviceInstanceId@winpnp@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x18010E144 (-GetDeviceInstanceId@winpnp@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B33E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x18010E32C (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ?GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18010E830 (-GetDeviceStringProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAV-$vector@V-$basic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Details::GetDeviceStringProperty(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  int DeviceStringProperty; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  const char *v8; // r9
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = 0LL;
  v10 = 0LL;
  DeviceStringProperty = Details::GetDeviceStringProperty(
                           Adapters::GetDeviceInterfaceProperty,
                           a2,
                           &DEVPKEY_Device_InstanceId,
                           &v9);
  v6 = DeviceStringProperty;
  if ( DeviceStringProperty >= 0 )
  {
    if ( *((_QWORD *)&v9 + 1) - (_QWORD)v9 == 32LL )
    {
      try
      {
        std::wstring::operator=(a4, (void *)v9);
        std::vector<std::wstring>::_Tidy((__int64)&v9);
        result = 0LL;
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x13F,
                               (int)"onecore\\drivers\\winpnp\\details.cpp",
                               v8);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x138,
        (int)"onecore\\drivers\\winpnp\\details.cpp",
        (const char *)0x80004005LL);
      std::vector<std::wstring>::_Tidy((__int64)&v9);
      return 2147500037LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x134,
      (int)"onecore\\drivers\\winpnp\\details.cpp",
      (const char *)(unsigned int)DeviceStringProperty);
    std::vector<std::wstring>::_Tidy((__int64)&v9);
    return v6;
  }
  return result;
}
