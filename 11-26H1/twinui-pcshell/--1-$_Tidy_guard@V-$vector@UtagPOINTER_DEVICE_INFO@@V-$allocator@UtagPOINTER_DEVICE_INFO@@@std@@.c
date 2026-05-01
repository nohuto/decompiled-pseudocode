/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x180482C9C
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x1804826B0 (--$_Construct_n@$$V@-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std.c)
 * Callees:
 *     ?_Tidy@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAXXZ @ 0x1804858AC (-_Tidy@-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<tagPOINTER_DEVICE_INFO>>::~_Tidy_guard<std::vector<tagPOINTER_DEVICE_INFO>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<tagPOINTER_DEVICE_INFO>::_Tidy();
  return result;
}
