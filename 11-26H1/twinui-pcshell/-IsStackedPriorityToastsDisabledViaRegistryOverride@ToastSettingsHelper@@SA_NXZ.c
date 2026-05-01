/*
 * XREFs of ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x1801E1B38
 * Callers:
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x1802AB4CC (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0RegistryDataHelper@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1802B4C0C (--0RegistryDataHelper@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ?ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z @ 0x1802BCE34 (-ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
bool ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride(void)
{
  bool v0; // bl
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // [rsp+20h] [rbp-78h] BYREF
  RTL_SRWLOCK *v6; // [rsp+28h] [rbp-70h]
  _BYTE v7[32]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v8[8]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v9[5]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  AcquireSRWLockExclusive(&ToastSettingsHelper::m_regCheckLock);
  v6 = &ToastSettingsHelper::m_regCheckLock;
  if ( !ToastSettingsHelper::m_regCached )
  {
    v2 = std::wstring::wstring((__int64)v7, (__int64)L"Software\\Microsoft\\Windows\\CurrentVersion\\Notifications");
    RegistryDataHelper::RegistryDataHelper(v8, v3, v2);
    v5 = 0;
    v4 = RegistryDataHelper::ReadUInt32((RegistryDataHelper *)v8, L"DisableStackedPriorityToasts", 0, &v5);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2C,
        (int)"shellcommon\\internal\\shell\\inc\\ToastSettingsHelper.h",
        (const char *)(unsigned int)v4,
        v5);
    if ( v5 )
      ToastSettingsHelper::m_disabledViaRegistry = 1;
    ToastSettingsHelper::m_regCached = 1;
    std::wstring::_Tidy_deallocate(v9);
  }
  v0 = ToastSettingsHelper::m_disabledViaRegistry;
  ReleaseSRWLockExclusive(&ToastSettingsHelper::m_regCheckLock);
  return v0;
}
