/*
 * XREFs of ?ConvertMPOThunkToLegacyPresentThunk@@YAXAEAU_D3DKMT_PRESENT@@AEAU_D3DKMT_PRESENT_RGNS@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x14041B930
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertMPOThunkToLegacyPresentThunk(
        struct _D3DKMT_PRESENT *a1,
        struct _D3DKMT_PRESENT_RGNS *a2,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a3,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a4)
{
  D3DKMT_HANDLE v6; // r8d
  void *pDriverPrivateData; // rax
  UINT v8; // ecx
  UINT v9; // ecx
  UINT v10; // ecx
  UINT v11; // edx
  UINT v12; // ecx

  a2->MoveRectCount = 0;
  a2->pMoveRects = 0LL;
  a2->DirtyRectCount = a4->pPlaneAttributes->DirtyRectCount;
  a2->pDirtyRects = a4->pPlaneAttributes->pDirtyRects;
  v6 = *a3->pContextList;
  a1->BroadcastContextCount = 0;
  a1->hDevice = v6;
  a1->hSource = *a4->pAllocationList;
  a1->VidPnSourceId = a3->VidPnSourceId;
  a1->SrcRect = a4->pPlaneAttributes->SrcRect;
  a1->SubRectCnt = a4->pPlaneAttributes->DirtyRectCount;
  a1->pSrcSubRects = a4->pPlaneAttributes->pDirtyRects;
  a1->PresentCount = a3->PresentCount;
  a1->FlipInterval = a4->FlipInterval;
  a1->pPresentRegions = a2;
  a1->Duration = a3->Duration;
  a1->PrivateDriverDataSize = a4->DriverPrivateDataSize;
  pDriverPrivateData = a4->pDriverPrivateData;
  a1->Flags.Value |= 4u;
  a1->pPrivateDriverData = pDriverPrivateData;
  v8 = a1->Flags.Value ^ ((unsigned __int8)*(_DWORD *)&a1->Flags.0 ^ (unsigned __int8)(a3->Flags.Value >> 1)) & 8;
  a1->Flags.Value = v8;
  LODWORD(pDriverPrivateData) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * a3->Flags.Value)) & 0x10;
  a1->Flags.Value = (unsigned int)pDriverPrivateData;
  v9 = (unsigned int)pDriverPrivateData ^ (a3->Flags.Value ^ (unsigned int)pDriverPrivateData) & 0x20 | 0x1000;
  a1->Flags.Value = v9;
  LODWORD(pDriverPrivateData) = v9 ^ (v9 ^ (a3->Flags.Value << 17)) & 0x20000;
  a1->Flags.Value = (unsigned int)pDriverPrivateData;
  v10 = (unsigned int)pDriverPrivateData ^ ((unsigned int)pDriverPrivateData ^ (a3->Flags.Value << 17)) & 0x40000;
  a1->Flags.Value = v10;
  v11 = v10 ^ (v10 ^ (a3->Flags.Value << 17)) & 0x80000 | 0x400000;
  a1->Flags.Value = v11;
  LODWORD(pDriverPrivateData) = v11 ^ (v11 ^ (a3->Flags.Value << 21)) & 0x8000000;
  a1->Flags.Value = (unsigned int)pDriverPrivateData;
  v12 = (unsigned int)pDriverPrivateData ^ ((unsigned int)pDriverPrivateData ^ (a3->Flags.Value << 17)) & 0x10000000;
  a1->Flags.Value = v12;
  a1->Flags.Value = v12 ^ (v12 ^ (a3->Flags.Value << 21)) & 0x20000000;
}
