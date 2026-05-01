/*
 * XREFs of ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x18005D17C
 * Callers:
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x18005C9BC (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18005D260 (-SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18005D4C0 (-TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800645C4 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall JsonGameMruManager::JsonGameMruManager(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        void **a3)
{
  _QWORD *v6; // rcx

  *(_BYTE *)a1 = 12;
  v6 = (_QWORD *)(a1 + 8);
  *v6 = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v6);
  std::wstring::wstring(a1 + 16, (__int64)a3);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  JsonGameMruManager::DeserializeFromJsonFile(a1);
  JsonGameMruManager::SortNewestToOldest(a1);
  JsonGameMruManager::TrimItemsToMaxSize(a1);
  if ( a1 != -48 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 48));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  std::wstring::_Tidy_deallocate(a3);
  return a1;
}
