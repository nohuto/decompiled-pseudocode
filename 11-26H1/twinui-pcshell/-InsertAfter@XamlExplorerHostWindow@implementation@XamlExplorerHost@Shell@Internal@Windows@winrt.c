/*
 * XREFs of ?InsertAfter@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x180025660
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002604C (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x180208DC8 (--$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA-A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::InsertAfter(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this,
        __int64 a2)
{
  int v4; // edx
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, GUID *, GUID *, char *); // r12
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-68h]
  int v15; // [rsp+30h] [rbp-58h] BYREF
  GUID v16; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h] BYREF
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread(this);
  v5 = 0LL;
  v18 = 0LL;
  if ( this )
  {
    v5 = this;
    v18 = this;
    (*(void (__fastcall **)(winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *))(*(_QWORD *)this + 8LL))(this);
  }
  try
  {
    v6 = (_QWORD *)((char *)this + 96);
    if ( !*((_QWORD *)this + 12) )
    {
      v16 = CLSID_ImmersiveShell;
      v19 = 0LL;
      v15 = 4;
      ___capture_UIServiceProvider__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIServiceProvider___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
        (unsigned int)&v17,
        v4,
        (unsigned int)&v16,
        (unsigned int)&v19,
        (__int64)&v15);
      v7 = v17;
      v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v17 + 24LL);
      if ( *v6 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((char *)this + 96);
      v9 = v8(
             v7,
             &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
             &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
             (char *)this + 96);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x154,
          (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
          (const char *)(unsigned int)v9,
          v14);
      if ( v7 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v17);
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 40LL))(*v6, *((_QWORD *)this + 5), a2);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15A,
        (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
        (const char *)(unsigned int)v10,
        v14);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 40LL))(*v6, *((_QWORD *)this + 7), a2);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15D,
        (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
        (const char *)(unsigned int)v11,
        v14);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x160,
                           (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
                           v12);
  }
  return result;
}
