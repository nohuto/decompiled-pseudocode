/*
 * XREFs of ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402FF158
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1400664A4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402FF670 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 *     ?GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z @ 0x1403003A0 (-GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x140300640 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 */

__int64 __fastcall BLTQUEUE::PreparePresentIndirect(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_PRESENT *a3,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5,
        struct BLTENTRY *a6)
{
  struct DXGSWAPCHAIN **v6; // rax
  struct DXGSWAPCHAIN *v10; // rcx
  UINT DirtyRectCount; // r15d
  UINT MoveRectCount; // esi
  bool v13; // zf
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  D3DKMT_PRESENT_RGNS *v15; // rax
  UINT v16; // ecx
  RECT *pDirtyRects; // rax
  struct DXGSWAPCHAIN **v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 result; // rax
  struct DXGSWAPCHAIN **v22; // rcx
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v23; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v24[12]; // [rsp+80h] [rbp-59h] BYREF

  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  if ( v6 )
  {
    v10 = *v6;
    if ( *((_DWORD *)*v6 + 58) )
    {
      return 0LL;
    }
    else
    {
      v23.hNtSwapChain = 0LL;
      DirtyRectCount = 0;
      *(_QWORD *)&v23.DataCopied = 0LL;
      MoveRectCount = 0;
      v23.bProducer = 1;
      v13 = (a3->Flags.Value & 0x400000) == 0;
      v23.bSetMetaData = 1;
      v23.bGlobalMetaData = 0;
      if ( !v13 )
      {
        pPresentRegions = a3->pPresentRegions;
        if ( pPresentRegions )
        {
          MoveRectCount = pPresentRegions->MoveRectCount;
          DirtyRectCount = pPresentRegions->DirtyRectCount;
          if ( MoveRectCount )
          {
            v23.pBuffer = (PVOID)pPresentRegions->pMoveRects;
            v23.BufferSize = 24 * MoveRectCount;
            if ( (int)SwapChainGetSetMetaDataInternal(v10, &v23, 16 * DirtyRectCount + 84, 0) < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1513;
            }
          }
          v15 = a3->pPresentRegions;
          v16 = v15->DirtyRectCount;
          if ( v15->DirtyRectCount )
          {
            pDirtyRects = (RECT *)v15->pDirtyRects;
            v23.BufferSize = 16 * v16;
            v18 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
            v23.pBuffer = pDirtyRects;
            if ( (int)SwapChainGetSetMetaDataInternal(*v18, &v23, 0x54u, 0) < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1528;
            }
          }
        }
      }
      memset(v24, 0, 0x54uLL);
      HIDWORD(v24[1]) = a3->PresentCount;
      v24[2] = __PAIR64__(MoveRectCount, DirtyRectCount);
      v24[3] = 0LL;
      LODWORD(v24[6]) = 0;
      if ( !a2 )
        goto LABEL_15;
      v19 = *((_QWORD *)a2 + 2);
      if ( !v19 )
        goto LABEL_15;
      v20 = *(_QWORD *)(v19 + 1896);
      if ( !v20 )
        goto LABEL_15;
      if ( (int)PopulateHDRMetadataFromDisplay(
                  a3->VidPnSourceId,
                  *(struct ADAPTER_DISPLAY **)(v20 + 3160),
                  (struct _D3DDDI_HDR_METADATA_HDR10 *)((char *)&v24[6] + 4),
                  (enum _D3DDDI_HDR_METADATA_TYPE *)&v24[6]) < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1557;
      }
      result = GetSdrWhiteLevel(
                 a3->VidPnSourceId,
                 *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 1896LL) + 3160LL),
                 (unsigned int *)&v24[10]);
      if ( (int)result >= 0 )
      {
LABEL_15:
        v22 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
        v23.pBuffer = (char *)&v24[1] + 4;
        v23.BufferSize = 72;
        result = SwapChainGetSetMetaDataInternal(*v22, &v23, 0xCu, 0);
        if ( (int)result < 0 )
        {
          WdLogSingleEntry1(3LL);
          result = 0LL;
          WdLogGlobalForLineNumber = 1575;
        }
        if ( *((_DWORD *)this + 724) )
          return BLTQUEUE::CompletePresentIndirectInternal(this, a6, 0LL);
      }
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1587;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present to Indirect display does not have a shared swapchain to present to",
      1587LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}
