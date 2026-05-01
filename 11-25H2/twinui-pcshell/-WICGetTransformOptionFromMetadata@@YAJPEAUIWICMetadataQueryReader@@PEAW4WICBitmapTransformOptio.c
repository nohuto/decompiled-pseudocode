/*
 * XREFs of ?WICGetTransformOptionFromMetadata@@YAJPEAUIWICMetadataQueryReader@@PEAW4WICBitmapTransformOptions@@@Z @ 0x1801D5A84
 * Callers:
 *     ?WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadataQueryReader@@PEAPEAU2@@Z @ 0x1802C0C24 (-WICCreateOrientedBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAUIWICMetadat.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WICGetTransformOptionFromMetadata(
        struct IWICMetadataQueryReader *a1,
        enum WICBitmapTransformOptions *a2)
{
  struct IWICMetadataQueryReaderVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // edi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  *a2 = WICBitmapTransformRotate0;
  v8 = 0LL;
  lpVtbl = a1->lpVtbl;
  *(_OWORD *)pvar = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IWICMetadataQueryReader *, const wchar_t *, PROPVARIANT *))lpVtbl->GetMetadataByName)(
         a1,
         L"System.Photo.Orientation",
         pvar);
  v5 = v4;
  if ( v4 == -2003292352 || LOWORD(pvar[0]) != 18 )
  {
    *a2 = WICBitmapTransformRotate0;
    v5 = 0;
  }
  else if ( v4 >= 0 )
  {
    switch ( LOWORD(pvar[1]) )
    {
      case 1u:
        goto LABEL_21;
      case 2u:
        *a2 = WICBitmapTransformFlipHorizontal;
        goto LABEL_3;
      case 3u:
        *a2 = WICBitmapTransformRotate180;
        goto LABEL_3;
      case 4u:
        *a2 = WICBitmapTransformFlipVertical;
        goto LABEL_3;
      case 5u:
        *a2 = WICBitmapTransformFlipVertical|WICBitmapTransformRotate90;
        goto LABEL_3;
      case 6u:
        *a2 = WICBitmapTransformRotate90;
        goto LABEL_3;
      case 7u:
        *a2 = WICBitmapTransformFlipVertical|WICBitmapTransformRotate270;
        goto LABEL_3;
    }
    if ( LOWORD(pvar[1]) != 8 )
    {
LABEL_21:
      *a2 = WICBitmapTransformRotate0;
      goto LABEL_3;
    }
    *a2 = WICBitmapTransformRotate270;
  }
LABEL_3:
  PropVariantClear(pvar);
  return v5;
}
