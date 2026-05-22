/*
 * XREFs of ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x1800F6364
 * Callers:
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x1800F0400 (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardOverriderDispatcher::RuntimeClassInitialize(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  const char *v5; // r9
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, PSECURITY_DESCRIPTOR, const wchar_t *, __int64 *); // rbx
  int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64 *, _QWORD, _QWORD, const wchar_t *, __int64, __int64 *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1 + 94;
  v14 = 0;
  Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(a1 + 94, a2);
  SecurityDescriptor = 0LL;
  if ( !IsEdition(253345LL) )
    return 2147942405LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x01;;;SY)(A;;0x01;;;BA)(A;;0x01;;;AU)(A;;0x01;;;S-1-15-3-1024-681439765-775820322-820945240-645585533-5"
           "24008629-2436029359-2385409943-1660172268)",
          1u,
          &SecurityDescriptor,
          0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x47,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardov"
                  "erriderdispatcher.cpp",
             v5);
  v6 = *v2;
  v7 = *(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, const wchar_t *, __int64 *))(*(_QWORD *)v6 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 96);
  v8 = v7(v6, SecurityDescriptor, L"KeyboardOverriderDispatcher", a1 + 96);
  LocalFree(SecurityDescriptor);
  if ( v8 < 0 )
  {
    v9 = 82LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardoverriderdispatcher.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v10 = a1 + 95;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 95);
  v8 = CoreUIFactoryCreate(a1 + 95);
  if ( v8 < 0 )
  {
    v9 = 84LL;
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v10 + 24LL))(
         *v10,
         &GUID_2c657f91_d10a_486d_b793_25a3c5057719,
         &v14);
  if ( v8 < 0 )
  {
    v9 = 88LL;
    goto LABEL_7;
  }
  v11 = *v10;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, const wchar_t *, __int64, __int64 *))(*(_QWORD *)v11 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 97);
  v8 = v12(v11, a1, 0LL, v14, L"System\\LowLevelKeyboardOverriderCallback", a1[96], a1 + 97);
  if ( v8 < 0 )
  {
    v9 = 96LL;
    goto LABEL_7;
  }
  return 0LL;
}
