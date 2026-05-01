/*
 * XREFs of ?InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801FBE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802B5EE4 (-reset@-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KioskPositioner::InitializePrivilegedOperations(
        KioskPositioner *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  char *v4; // rsi
  __int64 v5; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v7; // r9
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (char *)this + 72;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data4;
  try
  {
    if ( v5 )
    {
      v7 = 2147500033LL;
    }
    else
    {
      QueryInterface = a3->lpVtbl->QueryInterface;
      wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((char *)this + 72);
      ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
        a3,
        &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
        v4);
      v7 = 0LL;
    }
    if ( (int)v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3BB,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)v7,
        v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3BE,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           (const char *)v7);
  }
  return result;
}
