/*
 * XREFs of ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x180128EBC
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x1801290B4 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x180129670 (-ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitm.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapScaler@@@WRL@Microsoft@@IEAAKXZ @ 0x180129C8C (-InternalRelease@-$ComPtr@UIWICBitmapScaler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x180129DB4 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CoCreateInstance_0 @ 0x1802CA570 (CoCreateInstance_0.c)
 *     MulDiv_0 @ 0x1802CA996 (MulDiv_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ScaleImageWithWIC(
        struct IWICImagingFactory *a1,
        struct IWICBitmapSource *a2,
        struct tagSIZE a3,
        char a4,
        struct IWICBitmapSource **nNumerator)
{
  struct IWICBitmapSource **v5; // r14
  unsigned int cx; // ebx
  unsigned int cy; // esi
  enum WICBitmapDitherType v9; // r9d
  HRESULT Instance_0; // edi
  struct IWICBitmapSource *v11; // r15
  struct IWICImagingFactory *v12; // r12
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  struct IWICImagingFactoryVtbl *v14; // rax
  HRESULT (__stdcall *CreateBitmapScaler)(IWICImagingFactory *, IWICBitmapScaler **); // rdi
  struct _GUID v17; // [rsp+30h] [rbp-20h] BYREF
  struct IWICBitmapSource *v18[2]; // [rsp+40h] [rbp-10h] BYREF
  struct IWICImagingFactory *ppv; // [rsp+90h] [rbp+40h] BYREF
  struct tagSIZE nNumber; // [rsp+A0h] [rbp+50h]
  int nDenominator; // [rsp+A8h] [rbp+58h] BYREF

  LOBYTE(nDenominator) = a4;
  nNumber = a3;
  v5 = nNumerator;
  cx = a3.cx;
  ppv = a1;
  *nNumerator = 0LL;
  Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(&ppv);
  cy = 1;
  if ( ppv
    || (Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv),
        Instance_0 = CoCreateInstance_0(
                       &CLSID_WICImagingFactory2,
                       0LL,
                       1u,
                       &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                       (LPVOID *)&ppv),
        Instance_0 >= 0) )
  {
    v18[0] = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)v18);
    v17 = GUID_WICPixelFormat32bppPBGRA;
    Instance_0 = ConvertWICBitmapPixelFormat(ppv, a2, &v17, v9, v18);
    if ( Instance_0 >= 0 )
    {
      v11 = v18[0];
      v12 = ppv;
      *v5 = 0LL;
      LODWORD(nNumerator) = 0;
      lpVtbl = v11->lpVtbl;
      nDenominator = 0;
      Instance_0 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource ***, int *))lpVtbl->GetSize)(
                     v11,
                     &nNumerator,
                     &nDenominator);
      if ( Instance_0 >= 0 )
      {
        if ( (unsigned int)nNumerator > nDenominator )
        {
          if ( MulDiv_0(nNumber.cy, nDenominator, (int)nNumerator) > 1 )
            cy = MulDiv_0(nNumber.cy, nDenominator, (int)nNumerator);
        }
        else
        {
          if ( MulDiv_0(cx, (int)nNumerator, nDenominator) <= 1 )
            cx = 1;
          else
            cx = MulDiv_0(cx, (int)nNumerator, nDenominator);
          cy = nNumber.cy;
        }
        v14 = v12->lpVtbl;
        *(_QWORD *)&v17.Data1 = 0LL;
        CreateBitmapScaler = v14->CreateBitmapScaler;
        Microsoft::WRL::ComPtr<IWICBitmapScaler>::InternalRelease(&v17);
        Instance_0 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct _GUID *))CreateBitmapScaler)(
                       v12,
                       &v17);
        if ( Instance_0 >= 0 )
        {
          Instance_0 = (*(__int64 (__fastcall **)(_QWORD, struct IWICBitmapSource *, _QWORD, _QWORD, int))(**(_QWORD **)&v17.Data1 + 64LL))(
                         *(_QWORD *)&v17.Data1,
                         v11,
                         cx,
                         cy,
                         3);
          if ( Instance_0 >= 0 )
          {
            *v5 = *(struct IWICBitmapSource **)&v17.Data1;
            *(_QWORD *)&v17.Data1 = 0LL;
          }
        }
        Microsoft::WRL::ComPtr<IWICBitmapScaler>::InternalRelease(&v17);
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)v18);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance_0;
}
