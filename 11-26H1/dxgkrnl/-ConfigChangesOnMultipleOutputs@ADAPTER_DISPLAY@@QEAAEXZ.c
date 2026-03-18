/*
 * XREFs of ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x14032F6BC
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140434008 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x14032ECB0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x14032F13C (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x14032F970 (-PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x140330528 (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 *     ?AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x140407C70 (-AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 */

bool __fastcall ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(ADAPTER_DISPLAY *this)
{
  unsigned int v2; // r15d
  char v3; // r13
  __int64 v4; // r14
  unsigned int i; // r12d
  __int64 v6; // rsi
  DISPLAY_SOURCE *v7; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v9; // rdi
  unsigned int v10; // edx
  unsigned int v11; // r8d
  DISPLAY_SOURCE *v12; // rcx
  bool v13; // zf
  unsigned int v14; // edi
  unsigned int v15; // ebx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v18; // rcx
  unsigned __int8 v19; // dl
  unsigned int v20; // [rsp+90h] [rbp+8h]
  unsigned int v21; // [rsp+98h] [rbp+10h]

  if ( !DXGFASTMUTEX::IsOwner((ADAPTER_DISPLAY *)((char *)this + 624)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10728;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayStateMutexOwner()", 10728LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = 0;
  v20 = 0;
  v21 = 0;
  if ( !*((_DWORD *)this + 24) )
    return 0;
  do
  {
    v3 = 0;
    v4 = 4024LL * v2;
    for ( i = 0; ; ++i )
    {
      v6 = *((_QWORD *)this + 16);
      v7 = (DISPLAY_SOURCE *)(v4 + v6);
      if ( i >= *(_DWORD *)(v4 + v6 + 3788) )
        break;
      if ( *((_BYTE *)v7 + i + 2928) )
      {
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(v7, i);
        v6 = *((_QWORD *)this + 16);
        if ( LatestPlaneConfigInternal )
        {
          v9 = 80LL * i + v4;
          v10 = *(_DWORD *)(v9 + v6 + 2952);
          v11 = (v10 >> 4) & 1 | 2;
          if ( (v10 & 0x20) == 0 )
            v11 = (v10 >> 4) & 1;
          if ( !PlaneConfigsMatch(
                  LatestPlaneConfigInternal,
                  v10 & 1,
                  v11,
                  (const struct tagRECT *)(v9 + v6 + 2956),
                  (const struct tagRECT *)(v9 + v6 + 2972),
                  (const struct tagRECT *)(v9 + v6 + 2988),
                  *(enum _D3DDDI_ROTATION *)(v9 + v6 + 3004),
                  (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)((v10 >> 2) & 1),
                  *(enum D3DDDI_COLOR_SPACE_TYPE *)(v9 + v6 + 3008),
                  *(_DWORD *)(v9 + v6 + 3012)) )
          {
LABEL_11:
            v3 = 1;
            break;
          }
        }
        else if ( *(_DWORD *)(v4 + v6 + 3788) > 1u && (*(_DWORD *)(v4 + 80LL * i + v6 + 2952) & 1) != 0 )
        {
          goto LABEL_11;
        }
      }
    }
    v12 = (DISPLAY_SOURCE *)(v6 + 4024LL * v2);
    if ( !*((_BYTE *)v12 + 3744) )
    {
      v13 = v3 == 0;
      goto LABEL_14;
    }
    if ( v3 )
      goto LABEL_15;
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(v12);
    v18 = *((_QWORD *)this + 16);
    v19 = *(_BYTE *)(v18 + v4 + 3748);
    if ( !LatestPostCompositionConfigInternal )
    {
      v13 = v19 == 0;
LABEL_14:
      if ( !v13 )
        goto LABEL_15;
      goto LABEL_19;
    }
    if ( !PostCompositionConfigsMatch(
            LatestPostCompositionConfigInternal,
            v19,
            (const struct tagRECT *)(v4 + v18 + 3752),
            (const struct tagRECT *)(v4 + v18 + 3768)) )
    {
LABEL_15:
      v14 = (1 << v2) | v21;
      v15 = v20 + 1;
      v21 = v14;
      ++v20;
      goto LABEL_16;
    }
LABEL_19:
    v15 = v20;
    v14 = v21;
LABEL_16:
    ++v2;
  }
  while ( v2 < *((_DWORD *)this + 24) );
  if ( v15 <= 1 )
    return 0;
  return ADAPTER_DISPLAY::AreSourcesSyncLocked(this, v14) == 0;
}
