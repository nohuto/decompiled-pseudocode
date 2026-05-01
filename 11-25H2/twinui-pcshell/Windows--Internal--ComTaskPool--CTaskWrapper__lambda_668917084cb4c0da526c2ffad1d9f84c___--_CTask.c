/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::_CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___ @ 0x1803986FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::_scalar_deleting_destructor_ @ 0x180398B80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___--_scala.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::_CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___(
        __int64 a1)
{
  std::wstring::_Tidy_deallocate((void **)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
