/*
 * XREFs of ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x14032ED6C
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140434008 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x14032ECB0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x14032F13C (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
        ADAPTER_DISPLAY *this,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        unsigned int *a5,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a6,
        unsigned int *a7,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *a8)
{
  unsigned int v10; // r13d
  unsigned int v11; // r10d
  unsigned int v12; // ebp
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v13; // r12d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v14; // ebx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // r12
  __int64 v21; // r9
  unsigned int v22; // esi
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  bool v26; // zf
  int v27; // ecx
  __int64 v28; // r11
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  RECT v32; // xmm1
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v35; // rdx
  RECT v36; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+60h] [rbp-58h]
  unsigned int v39; // [rsp+C0h] [rbp+8h]
  unsigned int v40; // [rsp+C8h] [rbp+10h]

  v10 = 0;
  if ( !DXGFASTMUTEX::IsOwner((ADAPTER_DISPLAY *)((char *)this + 624)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10611;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayStateMutexOwner()", 10611LL, 0LL, 0LL, 0LL, 0LL);
  }
  v40 = 0;
  v11 = 0;
  v39 = 0;
  v12 = 0;
  if ( a2 == -1 )
    v13 = *((_DWORD *)this + 24);
  else
    v13 = a2 + 1;
  v14 = 0;
  v37 = v13;
  if ( a2 != -1 )
    v14 = a2;
  if ( v14 < v13 )
  {
    v15 = a8;
    v16 = 4024LL * v14;
    while ( 1 )
    {
      v17 = *((_QWORD *)this + 16);
      if ( *(_BYTE *)(v17 + v16 + 762) )
        break;
LABEL_10:
      v11 = v40;
      ++v14;
      v16 += 4024LL;
      if ( v14 >= v13 )
        goto LABEL_11;
    }
    v18 = *(_DWORD *)(v17 + v16 + 3784);
    v19 = *(_DWORD *)(v17 + v16 + 3788);
    if ( v19 <= v18 )
      v19 = v18;
    if ( !v19 )
    {
LABEL_31:
      v30 = *((_QWORD *)this + 16);
      v10 = 0;
      if ( *(_BYTE *)(v30 + v16 + 3744) )
      {
        if ( !*(_BYTE *)(v30 + v16 + 3748) )
          goto LABEL_10;
        v31 = v12;
        v15[v31].VidPnSourceId = v14;
        v15[v31].PostComposition.Flags.Value = 0;
        v15[v31].PostComposition.SrcRect = *(RECT *)(*((_QWORD *)this + 16) + v16 + 3752);
        v32 = *(RECT *)(*((_QWORD *)this + 16) + v16 + 3768);
        v15[v31].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
        v15[v31].PostComposition.DstRect = v32;
      }
      else
      {
        LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((DISPLAY_SOURCE *)(v30 + 4024LL * v14));
        if ( !LatestPostCompositionConfigInternal || !*(_BYTE *)LatestPostCompositionConfigInternal )
          goto LABEL_10;
        v35 = v12;
        v15[v35].VidPnSourceId = v14;
        v15[v35].PostComposition.Flags.Value = 0;
        v15[v35].PostComposition.SrcRect = *(RECT *)((char *)LatestPostCompositionConfigInternal + 4);
        v36 = *(RECT *)((char *)LatestPostCompositionConfigInternal + 20);
        v15[v35].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
        v15[v35].PostComposition.DstRect = v36;
      }
      v39 = ++v12;
      goto LABEL_10;
    }
    v20 = v14;
    v21 = v16;
    v38 = v16;
    v22 = v19;
    while ( 1 )
    {
      v23 = *((_QWORD *)this + 16);
      v24 = 0LL;
      if ( *(_BYTE *)(v10 + v23 + v16 + 2928) )
        break;
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                    (DISPLAY_SOURCE *)(v23 + 4024 * v20),
                                    v10);
      v21 = v38;
      v24 = (__int64)LatestPlaneConfigInternal;
      v11 = v40;
      v25 = v20;
      if ( LatestPlaneConfigInternal )
      {
        v26 = (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) == 0;
LABEL_20:
        if ( !v26 && v11 < a3 )
        {
          a4[v11] = *(struct DXGALLOCATION **)v24;
          v27 = 0;
          v28 = v11;
          pPlaneAttributes = a6[v28].pPlaneAttributes;
          a6[v28].LayerIndex = v10;
          a6[v28].VidPnSourceId = v14;
          pPlaneAttributes->Flags = 0;
          if ( (*(_DWORD *)(v24 + 8) & 0x10) != 0 )
          {
            pPlaneAttributes->Flags = 1;
            v27 = 1;
          }
          if ( (*(_DWORD *)(v24 + 8) & 0x20) != 0 )
          {
            v27 |= 2u;
            pPlaneAttributes->Flags = v27;
          }
          if ( (*(_DWORD *)(v24 + 8) & 0x40) != 0 )
            pPlaneAttributes->Flags = v27 | 4;
          pPlaneAttributes->SrcRect = *(RECT *)(v24 + 12);
          pPlaneAttributes->DstRect = *(RECT *)(v24 + 28);
          pPlaneAttributes->ClipRect = *(RECT *)(v24 + 44);
          pPlaneAttributes->Rotation = *(_DWORD *)(v24 + 60);
          pPlaneAttributes->Blend = (*(_DWORD *)(v24 + 8) >> 2) & 1;
          ++v11;
          pPlaneAttributes->ColorSpace = *(_DWORD *)(v24 + 64);
          pPlaneAttributes->SDRWhiteLevel = *(_DWORD *)(v24 + 68);
          v21 = v38;
          v40 = v11;
          a6[v28].pPlaneAttributes->DirtyRectCount = 0;
          a6[v28].pPlaneAttributes->pDirtyRects = 0LL;
          a6[v28].pPlaneAttributes->StretchQuality = DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH;
        }
      }
      v21 += 80LL;
      ++v10;
      v38 = v21;
      v20 = v25;
      if ( v10 >= v22 )
      {
        v15 = a8;
        v12 = v39;
        v13 = v37;
        goto LABEL_31;
      }
    }
    if ( (*(_DWORD *)(v23 + v21 + 2952) & 1) != 0 )
      v24 = 4024LL * v14 + v23 + 80LL * v10 + 2944;
    v25 = v14;
    v26 = v24 == 0;
    goto LABEL_20;
  }
LABEL_11:
  *a5 = v11;
  *a7 = v12;
}
