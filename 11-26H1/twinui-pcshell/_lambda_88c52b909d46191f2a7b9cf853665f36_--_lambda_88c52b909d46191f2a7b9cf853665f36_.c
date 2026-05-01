/*
 * XREFs of _lambda_88c52b909d46191f2a7b9cf853665f36_::_lambda_88c52b909d46191f2a7b9cf853665f36_ @ 0x180585F64
 * Callers:
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1801DF5B0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x1801E6AC0 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 * Callees:
 *     ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@$$QEAV01@@Z @ 0x1802BA0B0 (--0-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_st.c)
 */

_QWORD *__fastcall lambda_88c52b909d46191f2a7b9cf853665f36_::_lambda_88c52b909d46191f2a7b9cf853665f36_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  *a1 = a2;
  std::list<std::wstring>::list<std::wstring>(a1 + 1, a3);
  return a1;
}
