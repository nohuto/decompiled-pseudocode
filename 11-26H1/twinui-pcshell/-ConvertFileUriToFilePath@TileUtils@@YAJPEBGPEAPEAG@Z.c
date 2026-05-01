/*
 * XREFs of ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1802B451C
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800ABDC8 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800BFCC8 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TileUtils::ConvertFileUriToFilePath(LPCWSTR pwzURI, unsigned __int16 *a2, unsigned __int16 **a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  IUri *v8; // rcx
  IUri *ppURI; // [rsp+40h] [rbp+18h] BYREF
  BSTR bstrString; // [rsp+48h] [rbp+20h] BYREF

  ppURI = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppURI);
  v5 = CreateUri(pwzURI, 0x8020u, 0LL, &ppURI);
  if ( v5 >= 0 )
  {
    bstrString = 0LL;
    v5 = ((__int64 (__fastcall *)(IUri *, BSTR *))ppURI->lpVtbl->GetPath)(ppURI, &bstrString);
    if ( v5 >= 0 )
    {
      v5 = _AllocString<CTCoAllocPolicy>(v7, v6, bstrString, a2);
      SysFreeString(bstrString);
    }
  }
  v8 = ppURI;
  if ( ppURI )
  {
    ppURI = 0LL;
    ((void (__fastcall *)(IUri *))v8->lpVtbl->Release)(v8);
  }
  return (unsigned int)v5;
}
