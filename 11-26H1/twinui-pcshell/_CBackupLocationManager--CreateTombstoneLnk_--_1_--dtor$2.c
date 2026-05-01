/*
 * XREFs of _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$2 @ 0x1806FE495
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 144);
}
