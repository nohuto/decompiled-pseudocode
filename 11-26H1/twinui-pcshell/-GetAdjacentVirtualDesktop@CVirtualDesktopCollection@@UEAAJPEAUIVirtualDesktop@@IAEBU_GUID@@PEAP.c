/*
 * XREFs of ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x180261E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180061984 (-Find@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@Q.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::GetAdjacentVirtualDesktop(
        CVirtualDesktopCollection *this,
        void **a2,
        int a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v6; // r14
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  char v12; // bl
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // esi
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a5;
  *a5 = 0LL;
  v7 = a3 - 3;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          v10 = -2147024809;
          v11 = 165LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v11,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
            (const char *)v10);
          return v10;
        }
        v12 = 0;
      }
      else
      {
        v12 = 1;
      }
    }
    else
    {
      v12 = *((_BYTE *)this + 16) == 0;
    }
  }
  else
  {
    v12 = *((_BYTE *)this + 16);
  }
  v13 = (_QWORD *)((char *)this + 112);
  if ( !a2 )
  {
    if ( v12 )
      v14 = 0LL;
    else
      v14 = *((_QWORD *)this + 15) - 1LL;
    v10 = (***(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*v13 + 8 * v14))(
            *(_QWORD *)(*v13 + 8 * v14),
            a4,
            v6);
    if ( (v10 & 0x80000000) == 0 )
      return v10;
    v11 = 173LL;
    goto LABEL_6;
  }
  *(_QWORD *)v19 = 0LL;
  a5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a5);
  v15 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::Find(
          v13,
          (struct IUnknown **)&a5,
          (unsigned __int64 *)v19);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  v17 = *(_QWORD *)v19 + (v12 != 0 ? 1LL : -1LL);
  a5 = 0LL;
  if ( v17 >= v13[1] )
  {
    v10 = -2147316575;
  }
  else
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&a5, (_QWORD *)(*v13 + 8 * v17));
    v18 = (*(__int64 (__fastcall **)(void **, const struct _GUID *, void **))*a5)(a5, a4, v6);
    v10 = v18;
    if ( v18 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
        (const char *)(unsigned int)v18);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  return v10;
}
