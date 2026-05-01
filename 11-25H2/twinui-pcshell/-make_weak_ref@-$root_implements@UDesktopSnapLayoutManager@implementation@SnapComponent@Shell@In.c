/*
 * XREFs of ?make_weak_ref@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180597C3C
 * Callers:
 *     ?query_interface_common@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180597D90 (-query_interface_common@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802E09B0 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  if ( v1 >= 0 )
  {
    v4 = (unsigned __int64)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
      *(_QWORD *)(v4 + 8) = &winrt::impl::weak_source<0,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_DWORD *)(v4 + 24) = v1;
      *(_DWORD *)(v4 + 28) = 1;
      *(_QWORD *)(v4 + 16) = v5;
    }
    else
    {
      v4 = 0LL;
    }
    v9 = (volatile signed __int32 *)v4;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = _InterlockedCompareExchange64(a1 + 4, (v4 >> 1) | 0x8000000000000000uLL, v1);
        v6 = v1 == v7;
        v1 = v7;
        if ( v6 )
          break;
        if ( v7 < 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 24));
          v8 = 2 * v7 + 8;
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(&v9);
          return v8;
        }
        _InterlockedExchange((volatile __int32 *)(v4 + 24), v7);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 24));
      return v4 + 8;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
    return 2 * v1 + 8;
  }
}
