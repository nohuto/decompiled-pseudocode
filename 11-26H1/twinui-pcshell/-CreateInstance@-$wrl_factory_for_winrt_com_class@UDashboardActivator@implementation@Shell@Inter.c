/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18029CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18018C840 (--0-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@W.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _OWORD *v7; // rax
  _QWORD *v8; // rax
  char v9; // cl
  char v10; // dl
  char v11; // r9
  char v12; // r10
  char v13; // r11
  char v14; // bl
  char v15; // di
  char v16; // si
  unsigned int v17; // ebx
  __int64 (__fastcall ***v18)(_QWORD, int *, _QWORD *); // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+28h] [rbp-30h] BYREF
  __int16 v20; // [rsp+2Ch] [rbp-2Ch]
  __int16 v21; // [rsp+2Eh] [rbp-2Ah]
  char v22; // [rsp+30h] [rbp-28h]
  char v23; // [rsp+31h] [rbp-27h]
  char v24; // [rsp+32h] [rbp-26h]
  char v25; // [rsp+33h] [rbp-25h]
  char v26; // [rsp+34h] [rbp-24h]
  char v27; // [rsp+35h] [rbp-23h]
  char v28; // [rsp+36h] [rbp-22h]
  char v29; // [rsp+37h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v7 = operator new(0x20uLL);
    *v7 = 0LL;
    v7[1] = 0LL;
    v8 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>(v7);
    v18 = (__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))((unsigned __int64)(v8 + 1) & -(__int64)(v8 != 0LL));
    v9 = *((_BYTE *)a3 + 8);
    v10 = *((_BYTE *)a3 + 9);
    v11 = *((_BYTE *)a3 + 10);
    v12 = *((_BYTE *)a3 + 11);
    v13 = *((_BYTE *)a3 + 12);
    v14 = *((_BYTE *)a3 + 13);
    v15 = *((_BYTE *)a3 + 14);
    v16 = *((_BYTE *)a3 + 15);
    v19 = *a3;
    v20 = *((_WORD *)a3 + 2);
    v21 = *((_WORD *)a3 + 3);
    v22 = v9;
    v23 = v10;
    v24 = v11;
    v25 = v12;
    v26 = v13;
    v27 = v14;
    v28 = v15;
    v29 = v16;
    v17 = (**v18)(v18, &v19, a4);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v18);
    return v17;
  }
}
