/*
 * XREFs of DxgkUpdateCddDevmodeExtraData @ 0x140426EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD3dFormatFromGdiBitsPerPixel@@YA?AW4_D3DDDIFORMAT@@K@Z @ 0x14025C5D0 (-GetD3dFormatFromGdiBitsPerPixel@@YA-AW4_D3DDDIFORMAT@@K@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkUpdateCddDevmodeExtraData(_DWORD *a1, __int64 a2)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (a1[18] & 0x40000) != 0 )
  {
    v4 = a1[42];
    if ( v4 )
      *(_DWORD *)(a2 + 228) = GetD3dFormatFromGdiBitsPerPixel(v4);
  }
  if ( (a1[18] & 0x600000) == 0x600000 )
  {
    v5 = a1[45];
    v9 = 0;
    v6 = DmmMapVSyncFromRationalToInteger(
           (const struct _D3DDDI_RATIONAL *)(a2 + 220),
           (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)(((v5 & 2) != 0) + 1),
           &v9);
    v7 = a1[46];
    if ( v6 != v7 && (v6 + 1 != v7 || !v9) )
    {
      *(_DWORD *)(a2 + 220) = v7;
      *(_DWORD *)(a2 + 224) = 1;
    }
  }
  return 0LL;
}
