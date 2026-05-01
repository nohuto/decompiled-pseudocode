/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f___::_CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f___ @ 0x18045C378
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___::_scalar_deleting_destructor_ @ 0x18045F4E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f___::_scalar_deleting_destructor_ @ 0x18045F660 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f___--_scala.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f___::_CTaskWrapper__lambda_764a1297a52a98304490b9424ce1b78f___(
        __int64 a1)
{
  std::wstring::_Tidy_deallocate((void **)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
