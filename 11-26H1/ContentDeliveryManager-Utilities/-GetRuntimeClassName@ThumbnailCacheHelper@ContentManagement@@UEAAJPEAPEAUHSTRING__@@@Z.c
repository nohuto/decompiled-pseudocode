/*
 * XREFs of ?GetRuntimeClassName@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180032F10
 * Callers:
 *     ?GetRuntimeClassName@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180032F40 (-GetRuntimeClassName@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ThumbnailCacheHelper::GetRuntimeClassName(
        ContentManagement::ThumbnailCacheHelper *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ThumbnailCacheHelper", 0x26u, a2);
}
