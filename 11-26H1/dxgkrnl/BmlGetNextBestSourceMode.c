/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1402DE3F8
 * Callers:
 *     BmlFunctionalizePath @ 0x140342374 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x140037850 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x140046D20 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     BmlCompareSourceModes @ 0x1402DE178 (BmlCompareSourceModes.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1402DE9F4 (BmlCompareSourceModesWithConstraint.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DEB90 (BmlDoesSourceModeObeyConstraint.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DED8C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     BmlGetPixelFormatPreference @ 0x1402DEE24 (BmlGetPixelFormatPreference.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1402DEFE4 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1402DF230 (BmlCompareModeRegions.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1402DF274 (BmlCompareSourceModesWithContentRes.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DF3B0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  __int64 v7; // r13
  __int64 v9; // r12
  __int64 v11; // rax
  unsigned __int64 BitsPerPixel; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 result; // rax
  __int64 v23; // rbx
  signed __int64 v24; // r8
  char v25; // r12
  unsigned int v26; // eax
  unsigned int v27; // ebp
  bool v28; // zf
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v30; // rax
  int v31; // ebx
  unsigned int v32; // ebx
  int PixelFormatPreference; // ebp
  int v34; // eax
  int v35; // eax
  int v36; // r8d
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // [rsp+70h] [rbp+8h]
  __int64 v41; // [rsp+88h] [rbp+20h]

  v6 = 0LL;
  v7 = a3;
  v9 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2079;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2080;
  }
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2081;
  }
  v11 = WdLogNewEntry5_WdTrace(a1, a2);
  v13 = a5;
  v14 = 0LL;
  v15 = 120 * v7;
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a5;
  WdLogGlobalForLineNumber = 2083;
  v39 = 0LL;
  *a6 = -1;
  if ( a5 != -1 )
  {
    v38 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5);
    v39 = v38;
    v14 = v38;
    if ( !v38 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v7, v38) )
    {
      WdLogNewEntry5_WdTrace(BitsPerPixel, v13);
      result = 3223192336LL;
      WdLogGlobalForLineNumber = 2102;
      return result;
    }
  }
  *(_QWORD *)(v15 + a1 + 92) = 0LL;
  v16 = *(_QWORD *)(a4 + 48);
  v41 = a4 + 48;
  if ( v16 == a4 + 48 )
    return 3223192326LL;
  v17 = v16 - 8;
  if ( !v17 )
    return 3223192326LL;
  do
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(BitsPerPixel, v13);
    v18[3] = *(unsigned int *)(v17 + 24);
    v18[4] = *(unsigned int *)(v17 + 76);
    v18[5] = *(unsigned int *)(v17 + 80);
    BitsPerPixel = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel((DMMVIDPNSOURCEMODE *)v17, v19);
    v18[6] = BitsPerPixel;
    v18[7] = *(int *)(v17 + 96);
    ++*(_DWORD *)(v15 + a1 + 92);
    WdLogGlobalForLineNumber = 2120;
    if ( v14 == v17 )
      goto LABEL_16;
    if ( (*(_DWORD *)(a1 + 4) & 0x20000) == 0 && (*(_DWORD *)(a1 + 8) & 4) == 0 )
    {
      BitsPerPixel = *(_QWORD *)(120 * v7 + a1 + 16);
      if ( !_bittest64((const signed __int64 *)BitsPerPixel, 0x37u)
        && (*(_DWORD *)(v17 + 76) > *(_DWORD *)(v15 + a1 + 36) || *(_DWORD *)(v17 + 80) > *(_DWORD *)(v15 + a1 + 40)) )
      {
        goto LABEL_16;
      }
    }
    v23 = *(_QWORD *)(v15 + a1 + 16);
    v24 = *(_QWORD *)v23;
    v13 = *(_QWORD *)v23 & 0x100LL;
    if ( (*(_QWORD *)v23 & 0x100) != 0 || (v24 & 0x18000000000LL) != 0 || (*(_DWORD *)(a1 + 4) & 0x40000) != 0 )
    {
      BitsPerPixel = 0LL;
      v25 = 0;
      if ( v13 )
        goto LABEL_24;
    }
    else
    {
      v25 = 1;
      BitsPerPixel = 0LL;
    }
    if ( (v24 & 0x10000000000LL) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x40000) == 0 )
        goto LABEL_31;
      v26 = (~*(_BYTE *)(v15 + a1 + 132) & 0x10 | 8u) >> 3;
      goto LABEL_32;
    }
LABEL_24:
    if ( (*(_BYTE *)(v15 + a1 + 132) & 0x10) != 0 )
    {
      if ( *(_BYTE *)(v23 + 128) )
        goto LABEL_65;
LABEL_31:
      v26 = 1;
      goto LABEL_32;
    }
    v26 = 2;
    if ( !*(_BYTE *)(v23 + 128) )
      goto LABEL_31;
LABEL_32:
    v27 = *(_DWORD *)(v15 + a1 + 120);
    BitsPerPixel = *(unsigned int *)(v17 + 72);
    if ( v26 == 2 )
    {
      if ( (_DWORD)BitsPerPixel == 3 )
        goto LABEL_36;
      v28 = (_DWORD)BitsPerPixel == 4;
      goto LABEL_35;
    }
    if ( v26 == 1 )
    {
      v28 = (_DWORD)BitsPerPixel == 1;
LABEL_35:
      if ( !v28 )
        goto LABEL_64;
      goto LABEL_36;
    }
    if ( (_DWORD)BitsPerPixel != 1 && (unsigned int)(BitsPerPixel - 3) > 1 )
      goto LABEL_64;
LABEL_36:
    GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v17);
    if ( !v25 )
      goto LABEL_42;
    BitsPerPixel = (unsigned int)GraphicsInfo->PixelFormat;
    if ( GraphicsInfo->PixelFormat == D3DDDIFMT_A8R8G8B8 || GraphicsInfo->PixelFormat == D3DDDIFMT_X8R8G8B8 )
      goto LABEL_42;
    if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A2B10G10R10 )
    {
      if ( GraphicsInfo->PixelFormat == D3DDDIFMT_A8B8G8R8 )
        goto LABEL_42;
      if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A16B16G16R16F )
        goto LABEL_64;
    }
    if ( !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat(BitsPerPixel, v27, 0LL) )
      goto LABEL_64;
LABEL_42:
    if ( _bittest64((const signed __int64 *)v23, 0x26u) && (unsigned int)BmlCompareModeExtents(v15 + a1 + 52, v17 + 76)
      || ((v30 = *(_QWORD *)(v23 + 8), BitsPerPixel = v30 & 0x100, (v30 & 0x100) != 0) || (v30 & 0x8000000000LL) != 0)
      && ((v35 = *(_DWORD *)(v23 + 116)) != 0 && *(_DWORD *)(v17 + 96) != v35
       || BitsPerPixel
       && (*(_DWORD *)(v17 + 76) != *(_DWORD *)(v23 + 96) || *(_DWORD *)(v17 + 80) != *(_DWORD *)(v23 + 100))) )
    {
LABEL_64:
      v14 = v39;
LABEL_65:
      v9 = a2;
LABEL_16:
      WdLogNewEntry5_WdTrace(BitsPerPixel, v13);
      WdLogGlobalForLineNumber = 2133;
      goto LABEL_17;
    }
    ++*(_DWORD *)(v15 + a1 + 96);
    v9 = a2;
    if ( !a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1927;
    }
    if ( (_DWORD *)v17 == v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1929;
    }
    if ( !v6 )
      goto LABEL_66;
    if ( (*(_BYTE *)(*(_QWORD *)(v15 + a1 + 16) + 129LL) && (*(_DWORD *)(a1 + 8) & 1) != 0
       || (v31 = BmlCompareSourceModesWithConstraint(a1, (unsigned __int16)v7, v17, v6)) == 0)
      && (!*(_BYTE *)(*(_QWORD *)(v15 + a1 + 16) + 129LL)
       || (*(_BYTE *)(v15 + a1 + 124) & 1) == 0
       || (v31 = BmlCompareSourceModesWithContentRes(a1, (unsigned __int16)v7, v17, v6)) == 0) )
    {
      v32 = *(_DWORD *)(v15 + a1 + 120);
      PixelFormatPreference = BmlGetPixelFormatPreference((unsigned int)v6[24], v32);
      v34 = BmlGetPixelFormatPreference(*(unsigned int *)(v17 + 96), v32);
      if ( v34 > PixelFormatPreference )
      {
        v31 = 1;
      }
      else if ( v34 >= PixelFormatPreference )
      {
        v31 = BmlCompareModeRegions(v17 + 76, v6 + 19);
        if ( v31 )
        {
          v37 = BmlCompareSourceModesWithMonitors(a1, (unsigned __int16)v7, v36, v17, (__int64)v6);
          if ( v37 )
            v31 = v37;
        }
      }
      else
      {
        v31 = -1;
      }
    }
    if ( v31 == 1 )
    {
LABEL_66:
      v14 = v39;
      if ( !v39 || (unsigned int)BmlCompareSourceModes(a1, a2, v7, v17, v39) == -1 )
      {
        WdLogNewEntry5_WdTrace(BitsPerPixel, v13);
        WdLogGlobalForLineNumber = 2160;
        v6 = (_DWORD *)v17;
      }
    }
    else
    {
      v14 = v39;
    }
LABEL_17:
    v20 = *(_QWORD *)(v17 + 8);
    v17 = v20 - 8;
    if ( v20 == v41 )
      v17 = 0LL;
  }
  while ( v17 );
  if ( v6 )
  {
    *a6 = v6[6];
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v9 + 48));
    DxgkLogCodePointPacket(0x20u, v7, v6[19], v6[20], *(_QWORD *)((char *)ContainingAdapter + 412));
    return 0LL;
  }
  return 3223192326LL;
}
