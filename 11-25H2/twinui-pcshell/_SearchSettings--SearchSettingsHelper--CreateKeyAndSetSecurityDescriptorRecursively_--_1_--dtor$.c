/*
 * XREFs of _SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively_::_1_::dtor$0 @ 0x1806C0012
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>((HLOCAL *)(a2 + 128));
}
