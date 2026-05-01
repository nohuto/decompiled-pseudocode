/*
 * XREFs of ?AssociateAppWindowWithRemoteVirtualDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@_K@Z @ 0x18066CE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18066ABB4 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::AssociateAppWindowWithRemoteVirtualDesktop(
        RTL_SRWLOCK **this,
        const struct winrt::hstring *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v5; // rsi
  unsigned int (__fastcall *v6)(RTL_SRWLOCK *, __int64, __int64 *); // rdi
  int v7; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(this[17], &v11, (__int64 *)a2);
  if ( !v11 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2DB,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)0x80004005LL,
      v8);
  v10 = 0LL;
  v5 = this[21];
  v6 = (unsigned int (__fastcall *)(RTL_SRWLOCK *, __int64, __int64 *))*((_QWORD *)v5->Ptr + 6);
  winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v10);
  if ( !v6(v5, a3, &v10) )
  {
    v7 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))this[19]->Ptr + 4))(this[19], v10, v11);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E1,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v7,
        v8);
  }
  winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v10);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
}
