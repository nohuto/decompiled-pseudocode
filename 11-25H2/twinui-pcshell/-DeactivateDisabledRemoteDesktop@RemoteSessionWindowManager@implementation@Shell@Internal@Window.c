/*
 * XREFs of ?DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x1806346CC
 * Callers:
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18061A0B8 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x1806347FC (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x180644E18 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateDisabledRemoteDesktop(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        const struct winrt::hstring *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-38h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+38h] [rbp-28h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 104LL))(
                   *((_QWORD *)this + 5),
                   v7);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(*v4, &v6, a2);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v5 = v6;
  if ( v6 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 32LL))(v6, &v9);
    v10 = v9;
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateRemoteDesktop(
      this,
      (const struct winrt::guid *)&v10);
  }
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v6);
}
