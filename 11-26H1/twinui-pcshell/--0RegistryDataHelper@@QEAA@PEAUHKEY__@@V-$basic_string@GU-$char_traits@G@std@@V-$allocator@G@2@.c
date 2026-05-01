/*
 * XREFs of ??0RegistryDataHelper@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1802B4C0C
 * Callers:
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x1801E1B38 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall RegistryDataHelper::RegistryDataHelper(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r8

  *a1 = -2147483646LL;
  std::wstring::wstring((__int64)(a1 + 1), a3);
  a1[5] = 0LL;
  std::wstring::_Tidy_deallocate(v4);
  return a1;
}
