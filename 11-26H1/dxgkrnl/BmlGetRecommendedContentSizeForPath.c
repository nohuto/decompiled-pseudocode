/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1402DFC14
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140341EF8 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x14004B14C (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlAreRawModesEnabled @ 0x1402DD6C0 (BmlAreRawModesEnabled.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DED8C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1402DEF28 (BmlCompareRegionsWithPivot.c)
 *     BmlGetModeCategoryForRegion @ 0x1402DF1E4 (BmlGetModeCategoryForRegion.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r12
  struct DMMVIDPNTARGETMODESET *v8; // rax
  struct DMMVIDPNTARGETMODESET *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  int v12; // eax
  bool v13; // r13
  UINT v14; // r14d
  UINT v15; // eax
  UINT v16; // r15d
  __int64 v17; // rcx
  const struct DMMVIDPNSOURCEMODE *v18; // rdi
  __int64 v19; // rcx
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  __int64 v21; // rsi
  D3DDDIFORMAT PixelFormat; // ecx
  int v24; // eax
  int v25; // [rsp+38h] [rbp-60h]
  struct _D3DKMDT_2DREGION v26; // [rsp+40h] [rbp-58h] BYREF

  v4 = a2;
  v7 = (__int64)a1;
  if ( !a1 || a2 >= *a1 || !a3 || !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3823;
  }
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3827;
  }
  v8 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a3 + 88));
  v9 = v8;
  if ( !v8 )
    return 3223192328LL;
  v10 = (_QWORD *)((char *)v8 + 48);
  v11 = (_QWORD *)*v10;
  if ( (_QWORD *)*v10 == v10 )
  {
LABEL_26:
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v9 + 88));
    return 3223192326LL;
  }
  v12 = *(_DWORD *)(a4 + 132);
  v13 = v12 == 2 || v12 == 4;
  v14 = *(_DWORD *)(a4 + 152);
  v15 = *(_DWORD *)(a4 + 156);
  v26 = 0LL;
  if ( v13 )
  {
    v16 = v15;
    v26.cx = v15;
    v26.cy = v14;
  }
  else
  {
    v16 = v14;
    v26.cx = v14;
    v14 = v15;
    v26.cy = v15;
  }
  v17 = 120 * v4;
  v18 = 0LL;
  v19 = v7 + v17;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v11 - 1);
  if ( !NextMode )
  {
LABEL_25:
    WdLogSingleEntry4(2LL, v16, v14, a3, -1071774970LL);
    WdLogGlobalForLineNumber = 3914;
    goto LABEL_26;
  }
  v21 = v19;
  do
  {
    v25 = *(_DWORD *)(v21 + 120);
    if ( *((_DWORD *)NextMode + 18) != 1 )
      goto LABEL_23;
    PixelFormat = DMMVIDPNSOURCEMODE::GetGraphicsInfo(NextMode)->PixelFormat;
    if ( PixelFormat != D3DDDIFMT_A8R8G8B8 && PixelFormat != D3DDDIFMT_X8R8G8B8 )
    {
      if ( PixelFormat == D3DDDIFMT_A2B10G10R10 )
        goto LABEL_17;
      if ( PixelFormat != D3DDDIFMT_A8B8G8R8 )
      {
        if ( PixelFormat != D3DDDIFMT_A16B16G16R16F )
          goto LABEL_23;
LABEL_17:
        if ( !BmlPixelFormatMatchHdrPixelFormat(PixelFormat, v25, 0) )
          goto LABEL_23;
      }
    }
    if ( BmlAreRawModesEnabled(v7, a2)
      || (unsigned int)BmlGetModeCategoryForRegion((unsigned int *)NextMode + 19, (unsigned int *)(v21 + 36), 0) != 1 )
    {
      if ( v18 )
      {
        if ( (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                             (struct _D3DKMDT_2DREGION *)((char *)v18 + 76),
                             &v26) == 1 )
        {
          if ( *((_DWORD *)v18 + 19) == v16 && *((_DWORD *)v18 + 20) == v14 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3902;
          }
          v18 = NextMode;
        }
        v7 = (__int64)a1;
      }
      else
      {
        v18 = NextMode;
      }
    }
LABEL_23:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(v9, NextMode);
  }
  while ( NextMode );
  if ( !v18 )
    goto LABEL_25;
  if ( v13 )
  {
    *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 20);
    v24 = *((_DWORD *)v18 + 19);
  }
  else
  {
    *(_DWORD *)(a4 + 160) = *((_DWORD *)v18 + 19);
    v24 = *((_DWORD *)v18 + 20);
  }
  *(_DWORD *)(a4 + 164) = v24;
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v9 + 88));
  return 0LL;
}
