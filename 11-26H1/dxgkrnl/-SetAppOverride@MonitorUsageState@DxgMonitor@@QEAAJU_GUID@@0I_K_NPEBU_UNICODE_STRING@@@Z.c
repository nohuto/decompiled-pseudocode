/*
 * XREFs of ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14027E0EC
 * Callers:
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140194F34 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140060408 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x14027E384 (-_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsageState::SetAppOverride(
        DxgMonitor::MonitorUsageState *this,
        struct _GUID *Buf1,
        struct _GUID *a3,
        int a4,
        unsigned __int64 a5,
        bool a6,
        const struct _UNICODE_STRING *a7)
{
  NTSTATUS AppOverrideKey; // ebx
  unsigned __int64 *v12; // rdx
  unsigned __int64 *p_p_GuidString; // rcx
  unsigned __int64 v15; // r12
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, HANDLE *); // rbx
  NTSTATUS v18; // eax
  unsigned __int64 p_GuidString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING *v20; // [rsp+38h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+48h] [rbp-18h] BYREF

  if ( memcmp(Buf1, &GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED, 0x10uLL)
    && memcmp(Buf1, &GUID_MONITOR_OVERRIDE_TEST_SPECIALIZED, 0x10uLL)
    || memcmp(a3, &GUID_NULL, 0x10uLL)
    || a7 && !a7->Length )
  {
    return 3221225485LL;
  }
  GuidString = 0LL;
  AppOverrideKey = RtlStringFromGUID(Buf1, &GuidString);
  if ( AppOverrideKey < 0 )
  {
    v20 = (struct _UNICODE_STRING *)RtlFreeUnicodeString;
    v12 = &p_GuidString;
    p_p_GuidString = (unsigned __int64 *)&v20;
    p_GuidString = (unsigned __int64)&GuidString;
LABEL_8:
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(
      (__int64 (__fastcall **)(_QWORD))p_p_GuidString,
      v12);
    return (unsigned int)AppOverrideKey;
  }
  p_GuidString = 0LL;
  AppOverrideKey = DxgMonitor::MonitorUsageState::_GetAppOverrideKey(this, &GuidString, &p_GuidString);
  if ( AppOverrideKey < 0 )
    goto LABEL_10;
  v15 = p_GuidString;
  if ( !a6 && p_GuidString != a5 )
  {
    v20 = &GuidString;
    p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(
      (__int64 (__fastcall **)(_QWORD))&p_GuidString,
      &v20);
    return 3221225485LL;
  }
  v16 = *((_QWORD *)this + 1);
  KeyHandle = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)v16 + 8LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    0LL);
  AppOverrideKey = v17(v16, 0LL, &KeyHandle);
  if ( AppOverrideKey < 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
LABEL_10:
    v20 = &GuidString;
    p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
LABEL_11:
    v12 = (unsigned __int64 *)&v20;
    p_p_GuidString = &p_GuidString;
    goto LABEL_8;
  }
  if ( a4 )
  {
    (*(void (__fastcall **)(_QWORD, HANDLE, wchar_t *, unsigned __int64))(**((_QWORD **)this + 1) + 112LL))(
      *((_QWORD *)this + 1),
      KeyHandle,
      GuidString.Buffer,
      v15);
  }
  else
  {
    v18 = ZwDeleteValueKey(KeyHandle, &GuidString);
    AppOverrideKey = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v18);
      WdLogGlobalForLineNumber = 539;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
      v20 = &GuidString;
      p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
      goto LABEL_11;
    }
  }
  if ( !memcmp(Buf1, &GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED, 0x10uLL) )
  {
    *((_BYTE *)this + 21) = a4 != 0;
LABEL_26:
    *((_BYTE *)this + 20) = 0;
    *((_DWORD *)this + 4) = a4 != 0 ? 2 : 0;
    goto LABEL_27;
  }
  if ( !memcmp(Buf1, &GUID_MONITOR_OVERRIDE_TEST_SPECIALIZED, 0x10uLL) )
  {
    *((_BYTE *)this + 22) = a4 != 0;
    goto LABEL_26;
  }
LABEL_27:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  v20 = &GuidString;
  p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
  ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&p_GuidString, &v20);
  return 0LL;
}
