/*
 * XREFs of ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1402D747C
 * Callers:
 *     FillDevmodeFromVidPn @ 0x1402D71CC (FillDevmodeFromVidPn.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x140046D20 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x1400542F0 (-DivideAndRound@@YA_K_K0@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1402D733C (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _CDD_DEVMODE *a2)
{
  DMMVIDPNTARGET *v4; // rbx
  struct DMMVIDPNTARGETMODESET *v5; // rbx
  DMMVIDPNSOURCEMODE *v6; // r15
  struct DMMVIDPNTARGETMODESET *v7; // rbx
  __int64 v8; // rbp
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  DWORD *p_PrimSurfSize; // r12
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v11; // edi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // esi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v13; // ebx
  DWORD v14; // eax
  int v15; // esi
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned int BitsPerPixel; // eax

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1284;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1285;
  }
  v4 = (DMMVIDPNTARGET *)*((_QWORD *)a1 + 11);
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1291;
  }
  v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v4);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1302;
  }
  v6 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v5 + 18);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1311;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
  v7 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)a1 + 12));
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1325;
  }
  v8 = *((_QWORD *)v7 + 18);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1336;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v7 + 88));
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v6);
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v8 + 152);
  p_PrimSurfSize = (DWORD *)&GraphicsInfo->PrimSurfSize;
  v11 = *((_DWORD *)a1 + 28);
  v12 = *((_DWORD *)a1 + 29);
  v13 = (int)(*(_DWORD *)(v8 + 120) << 29) >> 29;
  v14 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)((char *)a2 + 220), v13, 0LL);
  v15 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          0x20u,
          *p_PrimSurfSize,
          p_PrimSurfSize[1],
          v14,
          v13,
          v12,
          v11,
          (struct _devicemodeW *const)a2);
  if ( v15 < 0 )
  {
    v17 = (int)(*(_DWORD *)(v8 + 120) << 29) >> 29;
    v18 = (unsigned int)DivideAndRound(*(unsigned int *)(v8 + 152), *(unsigned int *)(v8 + 156));
    BitsPerPixel = DMMVIDPNSOURCEMODE::GetBitsPerPixel(v6, v19);
    WdLogSingleEntry5(3LL, *p_PrimSurfSize, p_PrimSurfSize[1], BitsPerPixel, v18, v17);
    result = (unsigned int)v15;
    WdLogGlobalForLineNumber = 1363;
  }
  else
  {
    *((_DWORD *)a2 + 57) = 21;
    return 0LL;
  }
  return result;
}
