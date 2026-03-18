/*
 * XREFs of ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x14027EED0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAX$$T@Z @ 0x14003B024 (-reset@-$unique_ptr@$$BY0A@V-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWm.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1400546F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005EB68 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x14005EBD8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14006D89C (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x14027F7EC (-_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV-$uniq.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x140409F64 (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        char **this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **); // rbx
  NTSTATUS v6; // r15d
  void *v7; // rbx
  __int64 i; // rsi
  int OneBlockMonitorDescriptorFromRegistry; // eax
  void **v10; // rbx
  void **v11; // rbx
  void **v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rax
  bool v15; // cf
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  void **v18; // rdi
  __int64 j; // r12
  int v20; // r12d
  void **v22; // [rsp+30h] [rbp-29h] BYREF
  void **v23; // [rsp+38h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-19h] BYREF
  void *v25; // [rsp+48h] [rbp-11h] BYREF
  struct _UNICODE_STRING v26; // [rsp+50h] [rbp-9h] BYREF
  __int128 v27; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+78h] [rbp+1Fh]
  int v29; // [rsp+80h] [rbp+27h]

  v29 = *(_DWORD *)L"E";
  v25 = 0LL;
  v26.Buffer = (wchar_t *)&v27;
  v4 = *(_QWORD *)a2;
  v27 = *(_OWORD *)L"EDID_OVERRIDE";
  KeyHandle = 0LL;
  v5 = *(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **))(v4 + 16);
  v28 = *(_QWORD *)L"RRIDE";
  *(_QWORD *)&v26.Length = 1835034LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v25,
    0LL);
  v6 = v5(a2, 0LL, 1LL, &v25);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 841;
LABEL_42:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v25);
LABEL_38:
    DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors((DxgMonitor::EdidMonitorDescriptor *)this);
    return (unsigned int)v6;
  }
  v7 = v25;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    0LL);
  v6 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, v7, &v26);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 850;
    goto LABEL_42;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v22 = 0LL;
    if ( (unsigned int)i >= *((_DWORD *)this + 4) )
      break;
    OneBlockMonitorDescriptorFromRegistry = DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle);
    v6 = OneBlockMonitorDescriptorFromRegistry;
    if ( OneBlockMonitorDescriptorFromRegistry == -1073741801 )
    {
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        (void **)&v22,
        0LL);
      goto LABEL_42;
    }
    if ( OneBlockMonitorDescriptorFromRegistry >= 0 )
    {
      v10 = v22;
      if ( !v22 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 884;
      }
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        v10,
        (void **)&this[3][8 * i]);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)&this[3][8 * i],
        (void **)&v22);
      ++*((_DWORD *)this + 5);
    }
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v22,
      0LL);
  }
  while ( (unsigned int)i <= 0xFE )
  {
    v23 = 0LL;
    LODWORD(i) = i + 1;
    v6 = DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle);
    if ( v6 < 0 )
    {
      v6 = 0;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        (void **)&v23,
        0LL);
      break;
    }
    v11 = v23;
    if ( !v23 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 923;
    }
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      v11,
      (void **)&v22);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      (void **)&v22,
      (void **)&v23);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v23,
      0LL);
  }
  v12 = v22;
  v13 = i - 1;
  if ( v22 )
  {
    if ( v13 <= *((_DWORD *)this + 4) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 937;
    }
    v14 = 8LL * v13;
    if ( !is_mul_ok(v13, 8uLL) )
      v14 = -1LL;
    v15 = __CFADD__(v14, 8LL);
    v16 = v14 + 8;
    if ( v15 )
      v16 = -1LL;
    v17 = operator new[](v16, 0x4D677844u, 256LL);
    if ( v17 )
    {
      v18 = (void **)(v17 + 8);
      *(_QWORD *)v17 = v13;
      `vector constructor iterator'(
        (char *)(v17 + 8),
        8LL,
        v13,
        (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
      v23 = v18;
      if ( v18 )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 4); j = (unsigned int)(j + 1) )
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
            &v18[j],
            (void **)&this[3][8 * j]);
        v20 = 1;
        while ( v12 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
            &v18[v13 - v20],
            (void **)&v22);
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
            (void **)&v22,
            (void **)v18[v13 - v20]);
          ++*((_DWORD *)this + 4);
          ++*((_DWORD *)this + 5);
          v12 = v22;
          ++v20;
        }
        v23 = 0LL;
        wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
          this + 3,
          (char *)v18);
        wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset((__int64 *)&v23);
        goto LABEL_35;
      }
    }
    else
    {
      v23 = 0LL;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 945;
    wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset((__int64 *)&v23);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v22,
      0LL);
    v6 = -1073741801;
    goto LABEL_42;
  }
LABEL_35:
  if ( v13 != *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 984;
  }
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    (void **)&v22,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v25);
  if ( v6 < 0 )
    goto LABEL_38;
  return (unsigned int)v6;
}
