/*
 * XREFs of ?GetEvictedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18069B700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::GetEvictedView(CAppLayoutOperation *this, struct IApplicationView **a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 i; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, struct IApplicationView **); // rbx
  int v13; // ebx
  struct IApplicationView *v15; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 11); ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * i);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
    if ( v7 <= 0xA )
    {
      v8 = 1470;
      if ( _bittest(&v8, v7) )
      {
        v3 = i;
        v9 = 0;
        goto LABEL_8;
      }
    }
  }
  v9 = -2147319765;
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  if ( v9 < 0 )
  {
    return 0;
  }
  else
  {
    v10 = *((_QWORD *)this + 10);
    v15 = 0LL;
    v11 = *(_QWORD *)(v10 + 8 * v3);
    v12 = *(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v11 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    v13 = v12(v11, &v15);
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v13 = 0;
      *a2 = v15;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  }
  return (unsigned int)v13;
}
