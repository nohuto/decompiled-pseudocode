/*
 * XREFs of ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x180269900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Find@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801D1E3C (-Find@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@Q.c)
 *     ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x180269D90 (-IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CVirtualDesktopCollection::ContainsVirtualDesktop(CVirtualDesktopCollection *this, struct IUnknown *a2)
{
  char v4; // di
  char v5; // si
  bool v6; // bl
  struct IUnknown *v8; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-8h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF
  struct IUnknown *v11; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0;
  v5 = 0;
  LODWORD(v11) = 0;
  v10 = 0;
  if ( CVirtualDesktopCollection::IsRemote(this, (struct IVirtualDesktop *)a2, &v10) >= 0 && v10 )
  {
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v6 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::Find(
                (_QWORD *)this + 10,
                &v11,
                &v9) >= 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    return v6;
  }
  else
  {
    if ( SHIsSameObject(a2, *((struct IUnknown **)this + 5))
      || (v8 = a2,
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8),
          v5 = 1,
          LODWORD(v11) = 1,
          (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::Find(
                 (_QWORD *)this + 6,
                 &v8,
                 &v9) >= 0) )
    {
      v4 = 1;
    }
    if ( (v5 & 1) != 0 )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    return v4;
  }
}
