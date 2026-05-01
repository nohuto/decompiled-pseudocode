/*
 * XREFs of ??$RemoveEx@VComPtrCompareHelper@@@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@PEA_K@Z @ 0x1804AB6B8
 * Callers:
 *     ?UnregisterForFilterChanges@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x1804ABFD0 (-UnregisterForFilterChanges@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIWeakReference@WeakRef.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveEx<ComPtrCompareHelper>(
        _QWORD *a1,
        __int64 a2,
        struct IUnknown **a3)
{
  unsigned int v3; // esi
  unsigned __int64 i; // rdi
  __int64 v7; // r8

  v3 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= a1[1] )
      return (unsigned int)-2147319765;
    if ( SHIsSameObject(*(struct IUnknown **)(*a1 + 8 * i), *a3) )
      break;
  }
  if ( i < a1[1] )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*a1 + 8 * i));
    v7 = a1[1];
    if ( i != v7 - 1 )
      memmove_0((void *)(*a1 + 8 * i), (const void *)(*a1 + 8 * i + 8), 8 * (v7 - i) - 8);
    --a1[1];
  }
  else
  {
    return (unsigned int)-2147316575;
  }
  return v3;
}
