/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1402DEB90
 * Callers:
 *     BmlCompareSourceModes @ 0x1402DE178 (BmlCompareSourceModes.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1402DE9F4 (BmlCompareSourceModesWithConstraint.c)
 *     _BmlGetPathModeListForPath @ 0x1402DFF2C (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DED8C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DF3B0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

bool __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, DMMVIDPNSOURCEMODE *a3)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  signed __int64 v7; // rdx
  char v8; // bp
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // r15d
  int v12; // ecx
  bool v13; // zf
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v15; // rcx
  int v17; // ecx

  v4 = 120LL * a2;
  v6 = *(_QWORD *)(v4 + a1 + 16);
  v7 = *(_QWORD *)v6;
  if ( (*(_QWORD *)v6 & 0x100) == 0
    && (v7 & 0x8000000000LL) == 0
    && (v7 & 0x10000000000LL) == 0
    && !_bittest((const signed __int32 *)(a1 + 4), 0x12u) )
  {
    v8 = 1;
    goto LABEL_8;
  }
  v8 = 0;
  v9 = v7 & 0x10000000000LL;
  if ( (*(_QWORD *)v6 & 0x100LL) != 0 || v9 )
  {
    if ( (*(_BYTE *)(v4 + a1 + 132) & 0x10) != 0 )
    {
      if ( *(_BYTE *)(v6 + 128) )
        return 0;
      goto LABEL_8;
    }
    v10 = 2;
    if ( !*(_BYTE *)(v6 + 128) )
LABEL_8:
      v10 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x40000) == 0 )
      goto LABEL_8;
    v10 = (~*(_BYTE *)(v4 + a1 + 132) & 0x10 | 8u) >> 3;
  }
  v11 = *(_DWORD *)(v4 + a1 + 120);
  if ( !a3 )
    return 0;
  v12 = *((_DWORD *)a3 + 18);
  if ( v10 == 2 )
  {
    if ( v12 == 3 )
      goto LABEL_14;
    v13 = v12 == 4;
  }
  else
  {
    if ( v10 != 1 )
    {
      if ( v12 != 1 && (unsigned int)(v12 - 3) > 1 )
        return 0;
      goto LABEL_14;
    }
    v13 = v12 == 1;
  }
  if ( !v13 )
    return 0;
LABEL_14:
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a3);
  if ( v8 && GraphicsInfo->PixelFormat != D3DDDIFMT_A8R8G8B8 && GraphicsInfo->PixelFormat != D3DDDIFMT_X8R8G8B8 )
  {
    if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A2B10G10R10 )
    {
      if ( GraphicsInfo->PixelFormat == D3DDDIFMT_A8B8G8R8 )
        goto LABEL_19;
      if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A16B16G16R16F )
        return 0;
    }
    if ( !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat((unsigned int)GraphicsInfo->PixelFormat, v11, 0LL) )
      return 0;
  }
LABEL_19:
  if ( _bittest64((const signed __int64 *)v6, 0x26u)
    && (unsigned int)BmlCompareModeExtents(v4 + a1 + 52, (char *)a3 + 76) )
  {
    return 0;
  }
  v15 = *(_QWORD *)(v6 + 8);
  if ( (v15 & 0x100) == 0 && (v15 & 0x8000000000LL) == 0 )
    return 1;
  v17 = *(_DWORD *)(v6 + 116);
  if ( v17 )
  {
    if ( *((_DWORD *)a3 + 24) != v17 )
      return 0;
  }
  if ( (*(_QWORD *)(v6 + 8) & 0x100LL) == 0 )
    return 1;
  if ( *((_DWORD *)a3 + 19) != *(_DWORD *)(v6 + 96) )
    return 0;
  return *((_DWORD *)a3 + 20) == *(_DWORD *)(v6 + 100);
}
