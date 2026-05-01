/*
 * XREFs of ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1803E93EC
 * Callers:
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1803E99D4 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x180129670 (-ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitm.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x180129DB4 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AddFrameToWICBitmap(
        struct IWICImagingFactory *a1,
        __int64 a2,
        struct IWICBitmapSource *a3,
        struct _GUID *a4)
{
  __int64 (__fastcall *v8)(__int64, __int64 *, __int64 *); // rbx
  int v9; // ebx
  enum WICBitmapDitherType v10; // r9d
  __int64 v12; // [rsp+30h] [rbp-71h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-65h] BYREF
  struct IWICBitmapSource *v15; // [rsp+40h] [rbp-61h] BYREF
  __int64 v16; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-51h] BYREF
  __int128 v18; // [rsp+68h] [rbp-39h]
  struct _GUID v19; // [rsp+80h] [rbp-21h] BYREF
  struct _GUID v20; // [rsp+90h] [rbp-11h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-1h]
  __int128 Buf1; // [rsp+A8h] [rbp+7h] BYREF

  v12 = 0LL;
  v16 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v12);
  v9 = v8(a2, &v12, &v16);
  if ( v9 >= 0 )
  {
    Buf1 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 32LL))(a2, &Buf1);
    if ( v9 >= 0 )
    {
      if ( memcmp_0(&Buf1, &GUID_ContainerFormatBmp, 0x10uLL) )
        goto LABEL_19;
      v20 = 0LL;
      v21 = 0LL;
      v17[0] = 0LL;
      v17[1] = 0LL;
      v18 = 0LL;
      LOWORD(v20.Data1) = 11;
      *(_WORD *)v20.Data4 = -1;
      v17[2] = L"EnableV5Header32bppBGRA";
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, struct _GUID *))(*(_QWORD *)v16 + 32LL))(
             v16,
             1LL,
             v17,
             &v20);
      if ( v9 >= 0 )
      {
LABEL_19:
        v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, v16);
        if ( v9 >= 0 )
        {
          v13 = 0;
          v14 = 0;
          v9 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, unsigned int *, unsigned int *))a3->lpVtbl->GetSize)(
                 a3,
                 &v13,
                 &v14);
          if ( v9 >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, v13, v14);
            if ( v9 >= 0 )
            {
              v20 = *a4;
              v9 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v12 + 48LL))(v12, &v20);
              if ( v9 >= 0 )
              {
                v15 = 0LL;
                if ( !memcmp_0(&v20, a4, 0x10uLL) )
                {
                  *(_QWORD *)&v19.Data1 = a3;
                  Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef((__int64 *)&v19);
                  *(_QWORD *)&v19.Data1 = v15;
                  v15 = a3;
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v19);
                }
                else
                {
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v15);
                  v19 = *a4;
                  v9 = ConvertWICBitmapPixelFormat(a1, a3, &v19, v10, &v15);
                  if ( v9 < 0 )
                  {
LABEL_15:
                    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v15);
                    goto LABEL_16;
                  }
                }
                *(_QWORD *)&v19.Data1 = 0LL;
                *(_DWORD *)v19.Data4 = v13;
                *(_DWORD *)&v19.Data4[4] = v14;
                v9 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, struct _GUID *))(*(_QWORD *)v12 + 88LL))(
                       v12,
                       v15,
                       &v19);
                if ( v9 >= 0 )
                  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12);
                goto LABEL_15;
              }
            }
          }
        }
      }
    }
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v12);
  return (unsigned int)v9;
}
