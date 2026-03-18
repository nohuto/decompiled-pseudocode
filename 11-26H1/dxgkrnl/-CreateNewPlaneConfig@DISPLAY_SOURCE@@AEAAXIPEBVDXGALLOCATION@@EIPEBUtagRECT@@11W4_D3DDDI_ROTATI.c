/*
 * XREFs of ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x14032C8D8
 * Callers:
 *     ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x14032CE3C (-SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x14032FAF0 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14032FCA8 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1400594A4 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x14032E9B0 (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPlaneConfig(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        unsigned __int8 a4,
        char a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        char a14)
{
  int v15; // ebx
  __int64 v17; // r12
  int NextConfigIndex; // eax
  _DWORD *v19; // rdx
  int v20; // r9d
  int v21; // ecx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r8
  int v25; // ecx
  __int128 v26; // xmm0

  v15 = a4;
  v17 = a2;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10144;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      10144LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 42 * v17 + 292));
  v21 = v19[1];
  v22 = NextConfigIndex;
  *v19 = NextConfigIndex;
  if ( NextConfigIndex == v21 || v21 == -1 )
  {
    v23 = GetNextConfigIndex(v21);
    v19[1] = v23;
  }
  v24 = 10 * v22;
  v25 = v20 & v15 | (2 * (v20 & v15 | (4 * (unsigned __int8)(v20 & a14))));
  v19[2 * v24 + 4] = v25;
  if ( ((unsigned __int8)a5 & (unsigned __int8)v20) != 0 )
  {
    v25 |= 0x10u;
    v19[2 * v24 + 4] = v25;
  }
  if ( (a5 & 2) != 0 )
  {
    v25 |= 0x20u;
    v19[2 * v24 + 4] = v25;
  }
  if ( (a5 & 4) != 0 )
  {
    v25 |= 0x40u;
    v19[2 * v24 + 4] = v25;
  }
  if ( a10 == v20 )
    v19[2 * v24 + 4] = v25 | 4;
  *(_QWORD *)&v19[2 * v24 + 2] = a3;
  *(struct tagRECT *)&v19[2 * v24 + 5] = *a6;
  *(struct tagRECT *)&v19[2 * v24 + 9] = *a7;
  v26 = (__int128)*a8;
  v19[2 * v24 + 18] = a11;
  v19[2 * v24 + 19] = a12;
  v19[2 * v24 + 17] = a9;
  v19[2 * v24 + 20] = a13;
  *(_OWORD *)&v19[2 * v24 + 13] = v26;
  if ( !a9 )
    v19[2 * v24 + 17] = v20;
  if ( ((unsigned __int8)v20 & BYTE1(Microsoft_Windows_DxgKrnlEnableBits)) != 0 )
    McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
      (unsigned int)a9,
      (__int64)v19,
      v24,
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
      *((_DWORD *)this + 4),
      v17,
      v15,
      a5,
      a6->left,
      a6->top,
      a6->right,
      a6->bottom,
      a7->left,
      a7->top,
      a7->right,
      a7->bottom,
      a8->left,
      a8->top,
      a8->right,
      a8->bottom,
      a10,
      a11,
      a12);
}
