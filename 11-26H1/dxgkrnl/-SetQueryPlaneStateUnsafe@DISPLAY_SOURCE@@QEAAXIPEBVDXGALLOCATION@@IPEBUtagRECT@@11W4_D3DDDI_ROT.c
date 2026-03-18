/*
 * XREFs of ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1403A8E54
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14039EE6C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14042A0A4 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        char a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        enum _D3DDDI_ROTATION a8,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a9,
        enum D3DDDI_COLOR_SPACE_TYPE a10,
        unsigned int a11)
{
  __int64 v12; // rdi
  int v15; // eax
  __int128 v16; // xmm0

  v12 = a2;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10001;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      10001LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_BYTE *)this + v12 + 2928) = 1;
  v15 = 3;
  *((_DWORD *)this + 20 * v12 + 738) = 3;
  if ( (a4 & 1) != 0 )
  {
    v15 = 19;
    *((_DWORD *)this + 20 * v12 + 738) = 19;
  }
  if ( (a4 & 2) != 0 )
  {
    v15 |= 0x20u;
    *((_DWORD *)this + 20 * v12 + 738) = v15;
  }
  if ( (a4 & 4) != 0 )
  {
    v15 |= 0x40u;
    *((_DWORD *)this + 20 * v12 + 738) = v15;
  }
  if ( a9 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND )
    *((_DWORD *)this + 20 * v12 + 738) = v15 | 4;
  *((_QWORD *)this + 10 * v12 + 368) = a3;
  *(struct tagRECT *)((char *)this + 80 * v12 + 2956) = *a5;
  *(struct tagRECT *)((char *)this + 80 * v12 + 2972) = *a6;
  v16 = (__int128)*a7;
  *((_DWORD *)this + 20 * v12 + 752) = a10;
  *((_DWORD *)this + 20 * v12 + 753) = a11;
  *((_DWORD *)this + 20 * v12 + 751) = a8;
  *((_DWORD *)this + 20 * v12 + 754) = 0;
  *(_OWORD *)((char *)this + 80 * v12 + 2988) = v16;
  if ( !a8 )
    *((_DWORD *)this + 20 * v12 + 751) = 1;
  if ( (unsigned int)v12 >= *((_DWORD *)this + 947) )
    *((_DWORD *)this + 947) = v12 + 1;
}
