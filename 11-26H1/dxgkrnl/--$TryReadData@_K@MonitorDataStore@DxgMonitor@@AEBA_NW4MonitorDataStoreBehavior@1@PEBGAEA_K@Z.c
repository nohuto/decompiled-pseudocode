/*
 * XREFs of ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEA_K@Z @ 0x14027EC1C
 * Callers:
 *     ?TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_K@Z @ 0x14027F5C0 (-TryReadQWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEA_K@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEA_K@Z @ 0x14027EB1C (--$TryReadData@_K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEA_K@Z.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(
        __int64 a1,
        char a2,
        const WCHAR *a3,
        _QWORD *a4)
{
  char v4; // si
  __int64 *v5; // r14
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, __int64, void **); // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, __int64, __int64, void **); // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, __int64, void **); // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  void *v23; // [rsp+38h] [rbp-8h] BYREF

  v4 = 0;
  v22 = 0LL;
  v5 = (__int64 *)(a1 + 16);
  if ( (a2 & 8) != 0 )
  {
    v9 = *v5;
    v23 = 0LL;
    v10 = *(int (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v9 + 24LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v23,
      0LL);
    LOBYTE(v11) = 1;
    if ( v10(v9, v11, &v23) >= 0 && DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v12, v23, a3, &v22) )
    {
      v4 = 1;
      *a4 = v22;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v23);
  }
  if ( (a2 & 1) != 0 )
  {
    v13 = *v5;
    v23 = 0LL;
    v14 = *(int (__fastcall **)(__int64, __int64, __int64, void **))(*(_QWORD *)v13 + 16LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v23,
      0LL);
    LOBYTE(v15) = 1;
    if ( v14(v13, v15, 2LL, &v23) >= 0
      && DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v16, v23, a3, &v22) )
    {
      v4 = 1;
      *a4 = v22;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v23);
  }
  if ( (a2 & 2) != 0 )
  {
    v17 = *v5;
    v23 = 0LL;
    v18 = *(int (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v17 + 8LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v23,
      0LL);
    LOBYTE(v19) = 1;
    if ( v18(v17, v19, &v23) >= 0 && DxgMonitor::MonitorDataStore::TryReadData<unsigned __int64>(v20, v23, a3, &v22) )
    {
      v4 = 1;
      *a4 = v22;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v23);
  }
  return v4;
}
