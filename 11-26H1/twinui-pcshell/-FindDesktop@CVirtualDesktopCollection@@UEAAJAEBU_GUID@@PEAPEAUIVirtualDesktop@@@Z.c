/*
 * XREFs of ?FindDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180261D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$FindEx@UVirtualDesktopGuidFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBUVirtualDesktopGuidFinder@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18054E19C (--$FindEx@UVirtualDesktopGuidFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::FindDesktop(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  struct IVirtualDesktop *v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 *v10; // rbx
  __int128 v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0LL;
  if ( *(_OWORD *)a2 == __PAIR128__(0x1012647F7CCD4687LL, 0x4658059A45DB96FFLL) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
    v5 = (struct IVirtualDesktop *)*((_QWORD *)this + 5);
  }
  else
  {
    v11 = (__int128)*a2;
    v12 = 0LL;
    v13 = 0LL;
    v6 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<VirtualDesktopGuidFinder>(
           (char *)this + 48,
           &v11,
           &v13,
           &v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    if ( v6 < 0 )
    {
      v13 = 0LL;
      v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<VirtualDesktopGuidFinder>(
             (char *)this + 80,
             &v11,
             &v13,
             &v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v7 = *((_QWORD *)this + 10);
    }
    else
    {
      v7 = *((_QWORD *)this + 6);
    }
    v10 = (__int64 *)(v7 + 8 * v12);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v5 = (struct IVirtualDesktop *)*v10;
  }
  *a3 = v5;
  return 0LL;
}
