/*
 * XREFs of ?ConvertIWICBitmapSourcePixelFormat@@YAJPEAUIWICBitmapSource@@U_GUID@@PEAUIWICImagingFactory@@PEAPEAU1@@Z @ 0x180131B48
 * Callers:
 *     ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x180130A24 (-ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConvertIWICBitmapSourcePixelFormat(
        struct IWICBitmapSource *a1,
        struct _GUID *a2,
        struct IWICImagingFactory *a3,
        struct IWICBitmapSource **a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  HRESULT (__stdcall *CreateFormatConverter)(IWICImagingFactory *, IWICFormatConverter **); // rbx
  struct IWICBitmapSource *v11; // rax
  struct IWICBitmapSource *v13; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF

  *a4 = 0LL;
  v14 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int128 *))a1->lpVtbl->GetPixelFormat)(a1, &v14);
  v9 = v14 - *(_QWORD *)&a2->Data1;
  if ( (_QWORD)v14 == *(_QWORD *)&a2->Data1 )
    v9 = *((_QWORD *)&v14 + 1) - *(_QWORD *)a2->Data4;
  if ( v9 )
  {
    v13 = 0LL;
    CreateFormatConverter = a3->lpVtbl->CreateFormatConverter;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v13);
    v8 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))CreateFormatConverter)(
           a3,
           &v13);
    if ( v8 >= 0 )
    {
      v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, struct _GUID *, _QWORD, _QWORD, _QWORD, _DWORD))v13->lpVtbl[1].QueryInterface)(
             v13,
             a1,
             a2,
             0LL,
             0LL,
             0LL,
             0);
      if ( v8 >= 0 )
      {
        v11 = v13;
        v13 = 0LL;
        *a4 = v11;
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    *a4 = a1;
    ((void (__fastcall *)(struct IWICBitmapSource *))a1->lpVtbl->AddRef)(a1);
  }
  return (unsigned int)v8;
}
