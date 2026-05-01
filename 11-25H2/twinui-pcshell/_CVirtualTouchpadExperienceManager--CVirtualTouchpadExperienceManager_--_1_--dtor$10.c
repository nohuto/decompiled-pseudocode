/*
 * XREFs of _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$10 @ 0x1806AC37D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>>((HMODULE *)(*(_QWORD *)(a2 + 48) + 784LL));
}
