/*
 * XREFs of ?SetSite@immersive_shell_component@winrt@@EEAAJPEAUIUnknown@@@Z @ 0x1801D2100
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::immersive_shell_component::SetSite(
        winrt::immersive_shell_component *this,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rdi
  int AgileReference; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  if ( a2 )
  {
    v12 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, a2, &v12);
    if ( AgileReference < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x72B,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)AgileReference,
        v10);
    v7 = v12;
    v8 = 0LL;
    v12 = 0LL;
    v9 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v7;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v8 = v12;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 9);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
