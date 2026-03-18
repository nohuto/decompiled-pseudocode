/*
 * XREFs of ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14032FCA8
 * Callers:
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x140050024 (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x14032FF60 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140330244 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1403A9ED8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14042E234 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x14032C8D8 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x14032EB8C (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x14032ECB0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x14032F13C (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x14032FC6C (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableOverlayPlanes(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rbx
  DXGFASTMUTEX *v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  DXGFASTMUTEX *v9; // [rsp+78h] [rbp+37h] BYREF
  char v10; // [rsp+80h] [rbp+3Fh]
  struct tagRECT v11; // [rsp+88h] [rbp+47h] BYREF

  v2 = a2;
  v10 = 0;
  v4 = (ADAPTER_DISPLAY *)((char *)this + 624);
  v9 = v4;
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v4 = 0LL;
  }
  if ( DXGFASTMUTEX::IsOwner(v4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v9);
  v5 = *((_QWORD *)this + 16) + 4024 * v2;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*(_QWORD *)(v5 + 8) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10276;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      10276LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_BYTE *)(v5 + 3792) )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)v5);
    if ( *(_DWORD *)(v5 + 3784) > 1u )
    {
      v6 = 1;
      do
      {
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v5, v6);
        if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        {
          v11 = 0LL;
          DISPLAY_SOURCE::CreateNewPlaneConfig(
            (DISPLAY_SOURCE *)v5,
            v6,
            0LL,
            0,
            0,
            &v11,
            &v11,
            &v11,
            D3DDDI_ROTATION_IDENTITY,
            D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
            D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
            0,
            D3DDDIFMT_UNKNOWN,
            0);
        }
        ++v6;
      }
      while ( v6 < *(_DWORD *)(v5 + 3784) );
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((DISPLAY_SOURCE *)v5);
    if ( LatestPostCompositionConfigInternal && *(_BYTE *)LatestPostCompositionConfigInternal )
    {
      v11 = 0LL;
      DISPLAY_SOURCE::CreateNewPostCompositionConfig((DISPLAY_SOURCE *)v5, 0, &v11, &v11);
    }
    *(_BYTE *)(v5 + 3792) = 0;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v9);
}
