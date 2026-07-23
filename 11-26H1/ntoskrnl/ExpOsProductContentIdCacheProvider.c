/*
 * XREFs of ExpOsProductContentIdCacheProvider @ 0x14083F140
 * Callers:
 *     <none>
 * Callees:
 *     ExpOsProductCacheProviderHelper @ 0x14083EFE8 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpOsProductContentIdCacheProvider(
        __int64 a1,
        _DWORD *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  return ExpOsProductCacheProviderHelper(a1, (UNICODE_STRING *)L"$&", a2, a3, a4, a5, a6);
}
