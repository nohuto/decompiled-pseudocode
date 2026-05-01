/*
 * XREFs of ??1?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1803A50D4
 * Callers:
 *     _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$6 @ 0x1806BFF69 (_SearchSettings--SearchSettingsHelper--AddAceToKeyRecursively_--_1_--dtor$6.c)
 *     _SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively_::_1_::dtor$0 @ 0x1806C0012 (_SearchSettings--SearchSettingsHelper--CreateKeyAndSetSecurityDescriptorRecursively_--_1_--dtor$.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::~unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>(
        HLOCAL *a1)
{
  return wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(a1, 0LL);
}
