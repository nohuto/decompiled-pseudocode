/*
 * XREFs of ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18008AA30
 * Callers:
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D6294 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18008ABFC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180097020 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x180099934 (tip_details_GetKernelBaseModuleHandle.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009D0C0 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009D338 (--1last_error_context@wil@@QEAA@XZ.c)
 *     TestClose @ 0x1800D8D04 (TestClose.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall tip2::details::shared_data<0,0,0>::start(__int64 a1, _OWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // r8
  __int64 v7; // r14
  unsigned int v8; // edi
  char v9; // r13
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  _DWORD v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  char v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+59h] [rbp-A7h] BYREF
  char v19; // [rsp+5Dh] [rbp-A3h]
  char v20; // [rsp+5Eh] [rbp-A2h] BYREF
  char v21; // [rsp+859h] [rbp+759h] BYREF
  int *v22; // [rsp+860h] [rbp+760h]
  char *v23; // [rsp+868h] [rbp+768h]
  char *v24; // [rsp+870h] [rbp+770h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v16 = 0LL;
  v17 = 0;
  v22 = &v18;
  v24 = &v21;
  v18 = -2143256512;
  v19 = 0;
  v23 = &v20;
  if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 && (*(_DWORD *)(a1 + 20) & 0x8000) == 0 )
    v7 = tip2::details::shared_data<0,0,0>::serialize_data(a1, &v16, 1LL);
  else
    v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_BYTE *)(a1 + 32);
  v15[0] = *(_DWORD *)(a1 + 16);
  ProcAddress = (FARPROC)`TestCreate'::`2'::s_pfnTestCreate;
  if ( `TestCreate'::`2'::s_pfnTestCreate
    || (KernelBaseModuleHandle = (HMODULE)tip_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestCreate"),
        (`TestCreate'::`2'::s_pfnTestCreate = (__int64)ProcAddress) != 0) )
  {
    LOBYTE(v5) = v9;
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, __int64, __int64))ProcAddress)(
            v15[0],
            0LL,
            v5,
            v8,
            v7,
            a1 + 144);
  }
  else
  {
    *(_OWORD *)(a1 + 144) = 0LL;
    v12 = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 232);
  if ( v13 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)v15);
    TestClose(v13);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v15);
  }
  *(_QWORD *)(a1 + 232) = v12;
  *(_DWORD *)(a1 + 184) = 1;
  *a2 = *(_OWORD *)(a1 + 144);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v16);
  if ( v4 )
    LeaveCriticalSection(v4);
  return a2;
}
