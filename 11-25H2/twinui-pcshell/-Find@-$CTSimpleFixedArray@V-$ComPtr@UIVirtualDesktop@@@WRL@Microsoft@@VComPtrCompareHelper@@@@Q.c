/*
 * XREFs of ?Find@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801D1E3C
 * Callers:
 *     ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x180269900 (-ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z.c)
 *     ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x180269AF0 (-GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAP.c)
 *     ?DetermineRelativeDirection@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z @ 0x18052B840 (-DetermineRelativeDirection@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z.c)
 *     ?GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z @ 0x18052B970 (-GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::Find(
        _QWORD *a1,
        struct IUnknown **a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // edi
  unsigned __int64 i; // rbx

  v3 = 0;
  *a3 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    if ( SHIsSameObject(*(struct IUnknown **)(*a1 + 8 * i), *a2) )
    {
      *a3 = i;
      return v3;
    }
  }
  return (unsigned int)-2147319765;
}
