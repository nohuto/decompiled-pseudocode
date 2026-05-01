/*
 * XREFs of ?Uninitialize@VirtualDesktopDataSource@@UEAAXXZ @ 0x180490B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x180490BF8 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopDataSource::Uninitialize(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 (__fastcall ***Ptr)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = this - 4;
  wil::AcquireSRWLockExclusive(&v7, this + 31);
  v6 = 0LL;
  Ptr = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v1[34].Ptr;
  if ( Ptr )
  {
    v3 = **Ptr;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    v4 = v3(Ptr, &GUID_505ba63e_e2d2_4612_bf9e_378fc429a542, &v6);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v4);
  }
  VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)v1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
}
