/*
 * XREFs of ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x14032D46C
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1400594A4 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x14032E9B0 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x14032EB8C (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x14032ECB0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct DXGALLOCATIONREFERENCE *a3,
        enum _D3DDDIFORMAT *a4,
        int a5,
        unsigned int a6)
{
  DXGCONTEXT *v6; // r15
  enum _D3DDDIFORMAT *v7; // rdi
  struct DXGALLOCATIONREFERENCE *v8; // r12
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v9; // r14
  DXGFASTMUTEX *v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rbx
  UINT v13; // eax
  D3DKMT_MULTIPLANE_OVERLAY3 *v14; // rsi
  DXGFASTMUTEX *v15; // rcx
  __int64 LayerIndex; // r14
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rsi
  enum _D3DDDIFORMAT v18; // r13d
  UINT Flags; // r12d
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // ecx
  int v24; // eax
  _DWORD *v25; // r8
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  RECT ClipRect; // xmm0
  __int64 v32; // rax
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rsi
  DXGFASTMUTEX *v34; // rcx
  __int64 v35; // rax
  _BYTE *v36; // rax
  DXGFASTMUTEX *v37; // rbx
  bool v38; // zf
  __int64 v39; // rdi
  __int64 VidPnSourceId; // r14
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r8
  DXGFASTMUTEX *v44; // rbx
  __int64 v46; // rax
  _DWORD *v47; // rdx
  __int64 v48; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _DISPLAY_PLANE_CONFIG *v50; // rdi
  int NextConfigIndex; // eax
  __int64 v52; // rdx
  _DWORD *v53; // r8
  int v54; // ecx
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend; // [rsp+C8h] [rbp-80h]
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // [rsp+CCh] [rbp-7Ch]
  UINT SDRWhiteLevel; // [rsp+D0h] [rbp-78h]
  D3DDDI_ROTATION Rotation; // [rsp+D4h] [rbp-74h]
  UINT v62; // [rsp+D8h] [rbp-70h]
  struct tagRECT v63; // [rsp+E0h] [rbp-68h] BYREF
  DXGFASTMUTEX *v64; // [rsp+F0h] [rbp-58h] BYREF
  char v65; // [rsp+F8h] [rbp-50h]

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (DXGFASTMUTEX *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL) + 624LL);
  v65 = 0;
  v64 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v10 = 0LL;
  }
  if ( DXGFASTMUTEX::IsOwner(v10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v64);
  v11 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 1896LL) + 3160LL) + 128LL)
      + 4024LL * v9->VidPnSourceId;
  if ( *(_DWORD *)(v12 + 3788) )
  {
    do
    {
      v48 = v11++;
      *(_BYTE *)(v48 + v12 + 2928) = 0;
    }
    while ( v11 < *(_DWORD *)(v12 + 3788) );
  }
  *(_DWORD *)(v12 + 3788) = 0;
  v13 = 0;
  *(_BYTE *)(v12 + 3744) = 0;
  v62 = 0;
  if ( v9->PresentPlaneCount )
  {
    while ( 1 )
    {
      v14 = v9->ppPresentPlanes[v13];
      v15 = (DXGFASTMUTEX *)(*(_QWORD *)(v12 + 8) + 624LL);
      LayerIndex = v14->LayerIndex;
      if ( (v14->InputFlags.Value & 1) == 0 )
      {
        if ( !DXGFASTMUTEX::IsOwner(v15) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 9697;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
            9697LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v12, LayerIndex);
        v50 = LatestPlaneConfigInternal;
        if ( !LatestPlaneConfigInternal || (*((_BYTE *)LatestPlaneConfigInternal + 8) & 1) != 0 )
        {
          if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*(_QWORD *)(v12 + 8) + 624LL)) )
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
          NextConfigIndex = GetNextConfigIndex(*(_DWORD *)(168 * LayerIndex + v12 + 1168));
          v54 = *(_DWORD *)(v52 + v12 + 1172);
          v55 = NextConfigIndex;
          *v53 = NextConfigIndex;
          if ( NextConfigIndex == v54 || v54 == -1 )
          {
            v56 = GetNextConfigIndex(v54);
            v53[1] = v56;
          }
          v57 = 10 * v55;
          v53[2 * v57 + 4] = 0;
          *(_QWORD *)&v53[2 * v57 + 2] = 0LL;
          *(_OWORD *)&v53[2 * v57 + 5] = 0LL;
          *(_QWORD *)&v53[2 * v57 + 18] = 0LL;
          *(_OWORD *)&v53[2 * v57 + 9] = 0LL;
          v53[2 * v57 + 17] = 1;
          *(_OWORD *)&v53[2 * v57 + 13] = 0LL;
          v53[2 * v57 + 20] = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
              v57,
              v52,
              (__int64)v53,
              *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL),
              *(_DWORD *)(v12 + 16),
              LayerIndex,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0);
          if ( (unsigned int)LayerIndex >= *(_DWORD *)(v12 + 3784) )
            *(_DWORD *)(v12 + 3784) = LayerIndex + 1;
        }
        else
        {
          if ( *(_DWORD *)(v12 + 3784) <= (unsigned int)LayerIndex )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9706;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_MaxPlanesUsed > PlaneIndex",
              9706LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *((_DWORD *)v50 + 2) &= 0xFFFFFFFC;
          *(_QWORD *)v50 = 0LL;
        }
        goto LABEL_57;
      }
      pPlaneAttributes = v14->pPlaneAttributes;
      v18 = v7[LayerIndex];
      Flags = pPlaneAttributes->Flags;
      SDRWhiteLevel = pPlaneAttributes->SDRWhiteLevel;
      ColorSpace = pPlaneAttributes->ColorSpace;
      Blend = pPlaneAttributes->Blend;
      Rotation = pPlaneAttributes->Rotation;
      v20 = *((_QWORD *)a3 + LayerIndex);
      *(_QWORD *)&v63.left = v20;
      if ( !DXGFASTMUTEX::IsOwner(v15) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9697;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
          9697LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !v20 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9698;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!Enabled || pAllocation != NULL",
          9698LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (unsigned int)LayerIndex >= *(_DWORD *)(v12 + 3784) )
        goto LABEL_137;
      v21 = 168LL * (unsigned int)LayerIndex;
      if ( *(_DWORD *)(v21 + v12 + 1168) != -1 )
        goto LABEL_14;
      if ( *(_DWORD *)(v21 + v12 + 1172) != -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9441;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
          9441LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v21 + v12 + 1168) == -1 )
      {
LABEL_137:
        v22 = 0LL;
      }
      else
      {
LABEL_14:
        _mm_lfence();
        v22 = v12 + 80LL * *(int *)(v21 + v12 + 1168) + 1176 + v21;
        if ( v22 )
        {
          v23 = *(_DWORD *)(v22 + 8);
          if ( (((unsigned __int8)Flags ^ (unsigned __int8)(v23 >> 4)) & 1) == 0
            && (((unsigned __int8)Flags ^ (unsigned __int8)(v23 >> 4)) & 2) == 0
            && *(_DWORD *)(v22 + 12) == pPlaneAttributes->SrcRect.left
            && *(_DWORD *)(v22 + 20) == pPlaneAttributes->SrcRect.right
            && *(_DWORD *)(v22 + 16) == pPlaneAttributes->SrcRect.top
            && *(_DWORD *)(v22 + 24) == pPlaneAttributes->SrcRect.bottom
            && *(_DWORD *)(v22 + 28) == pPlaneAttributes->DstRect.left
            && *(_DWORD *)(v22 + 36) == pPlaneAttributes->DstRect.right
            && *(_DWORD *)(v22 + 32) == pPlaneAttributes->DstRect.top
            && *(_DWORD *)(v22 + 40) == pPlaneAttributes->DstRect.bottom
            && *(_DWORD *)(v22 + 44) == pPlaneAttributes->ClipRect.left
            && *(_DWORD *)(v22 + 52) == pPlaneAttributes->ClipRect.right
            && *(_DWORD *)(v22 + 48) == pPlaneAttributes->ClipRect.top
            && *(_DWORD *)(v22 + 56) == pPlaneAttributes->ClipRect.bottom
            && *(_DWORD *)(v22 + 60) == Rotation
            && ((v23 >> 2) & 1) == (Blend == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
            && *(_DWORD *)(v22 + 64) == ColorSpace
            && *(_DWORD *)(v22 + 68) == SDRWhiteLevel )
          {
            if ( *(_DWORD *)(v12 + 3784) <= (unsigned int)LayerIndex )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 9706;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_MaxPlanesUsed > PlaneIndex",
                9706LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v32 = *(_QWORD *)&v63.left;
            *(_DWORD *)(v22 + 8) |= 1u;
            *(_DWORD *)(v22 + 8) |= 2u;
            *(_QWORD *)v22 = v32;
            goto LABEL_57;
          }
        }
      }
      if ( v18 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v22 )
        v18 = *(_DWORD *)(v22 + 72);
      if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*(_QWORD *)(v12 + 8) + 624LL)) )
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
      v24 = GetNextConfigIndex(*(_DWORD *)(168LL * (unsigned int)LayerIndex + v12 + 1168));
      v27 = *(_DWORD *)(v26 + v12 + 1172);
      v28 = v24;
      *v25 = v24;
      if ( v24 == v27 || v27 == -1 )
      {
        v29 = GetNextConfigIndex(v27);
        v25[1] = v29;
      }
      v30 = 3;
      v25[20 * v28 + 4] = 3;
      if ( (Flags & 1) != 0 )
      {
        v30 = 19;
        v25[20 * v28 + 4] = 19;
      }
      if ( (Flags & 2) != 0 )
      {
        v30 |= 0x20u;
        v25[20 * v28 + 4] = v30;
      }
      if ( (Flags & 4) != 0 )
      {
        v30 |= 0x40u;
        v25[20 * v28 + 4] = v30;
      }
      if ( Blend == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND )
        v25[20 * v28 + 4] = v30 | 4;
      *(_QWORD *)&v25[20 * v28 + 2] = *(_QWORD *)&v63.left;
      *(RECT *)&v25[20 * v28 + 5] = pPlaneAttributes->SrcRect;
      *(RECT *)&v25[20 * v28 + 9] = pPlaneAttributes->DstRect;
      ClipRect = pPlaneAttributes->ClipRect;
      v25[20 * v28 + 20] = v18;
      v25[20 * v28 + 18] = ColorSpace;
      v25[20 * v28 + 19] = SDRWhiteLevel;
      v25[20 * v28 + 17] = Rotation;
      *(RECT *)&v25[20 * v28 + 13] = ClipRect;
      if ( !Rotation )
        v25[20 * v28 + 17] = 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
          10 * v28,
          SDRWhiteLevel,
          (__int64)v25,
          *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL),
          *(_DWORD *)(v12 + 16),
          LayerIndex,
          1,
          Flags,
          pPlaneAttributes->SrcRect.left,
          pPlaneAttributes->SrcRect.top,
          pPlaneAttributes->SrcRect.right,
          pPlaneAttributes->SrcRect.bottom,
          pPlaneAttributes->DstRect.left,
          pPlaneAttributes->DstRect.top,
          pPlaneAttributes->DstRect.right,
          pPlaneAttributes->DstRect.bottom,
          pPlaneAttributes->ClipRect.left,
          pPlaneAttributes->ClipRect.top,
          pPlaneAttributes->ClipRect.right,
          pPlaneAttributes->ClipRect.bottom,
          Blend,
          ColorSpace,
          SDRWhiteLevel);
      if ( (unsigned int)LayerIndex >= *(_DWORD *)(v12 + 3784) )
        *(_DWORD *)(v12 + 3784) = LayerIndex + 1;
      if ( (_DWORD)LayerIndex )
        *(_BYTE *)(v12 + 3792) = 1;
LABEL_57:
      v9 = a2;
      v13 = v62 + 1;
      v7 = a4;
      v62 = v13;
      if ( v13 >= a2->PresentPlaneCount )
      {
        v6 = this;
        v8 = a3;
        break;
      }
    }
  }
  pPostComposition = v9->pPostComposition;
  v34 = (DXGFASTMUTEX *)(*(_QWORD *)(v12 + 8) + 624LL);
  if ( pPostComposition )
  {
    if ( !DXGFASTMUTEX::IsOwner(v34) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9760;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
        9760LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v12 + 2848) == -1 && *(_DWORD *)(v12 + 2852) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9455;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9455LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v46 = *(int *)(v12 + 2848);
    if ( (_DWORD)v46 == -1
      || (v47 = (_DWORD *)(v12 + 4 * (v46 + 8 * v46 + 714))) == 0LL
      || v47[1] != pPostComposition->SrcRect.left
      || v47[3] != pPostComposition->SrcRect.right
      || v47[2] != pPostComposition->SrcRect.top
      || v47[4] != pPostComposition->SrcRect.bottom
      || v47[5] != pPostComposition->DstRect.left
      || v47[7] != pPostComposition->DstRect.right
      || v47[6] != pPostComposition->DstRect.top
      || v47[8] != pPostComposition->DstRect.bottom )
    {
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(
        (DISPLAY_SOURCE *)v12,
        1u,
        &pPostComposition->SrcRect,
        &pPostComposition->DstRect);
    }
    *(_BYTE *)(v12 + 3792) = 1;
  }
  else
  {
    v63 = 0LL;
    if ( !DXGFASTMUTEX::IsOwner(v34) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9760;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
        9760LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v12 + 2848) == -1 && *(_DWORD *)(v12 + 2852) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9455;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9455LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v35 = *(int *)(v12 + 2848);
    if ( (_DWORD)v35 != -1 )
    {
      v36 = (_BYTE *)(v12 + 4 * (9 * v35 + 714));
      if ( v36 )
      {
        if ( *v36 )
          DISPLAY_SOURCE::CreateNewPostCompositionConfig((DISPLAY_SOURCE *)v12, 0, &v63, &v63);
      }
    }
  }
  if ( !v65 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v64, 0LL, 0LL);
    WdLogGlobalForLineNumber = 685;
  }
  v37 = v64;
  v65 = 0;
  if ( *((struct _KTHREAD **)v64 + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v64, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *((int *)v37 + 8) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
  }
  v38 = (*((_DWORD *)v37 + 8))-- == 1;
  if ( v38 )
  {
    *((_QWORD *)v37 + 3) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v37 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( a5 > -1 )
  {
    v39 = *((_QWORD *)v6 + 2);
    VidPnSourceId = v9->VidPnSourceId;
    v41 = *((_QWORD *)v8 + a5);
    if ( v39 != -304 && *(struct _KTHREAD **)(v39 + 312) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1495LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v39 + 304, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v39 + 304), v42, v43);
      ExAcquirePushLockExclusiveEx(v39 + 304, 0LL);
    }
    *(_QWORD *)(v39 + 312) = KeGetCurrentThread();
    *(_QWORD *)(v39 + 8 * VidPnSourceId + 1048) = v41;
    *(_DWORD *)(v39 + 4 * VidPnSourceId + 1176) = a6;
    *(_QWORD *)(v39 + 312) = 0LL;
    ExReleasePushLockExclusiveEx(v39 + 304, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v65 )
  {
    v44 = v64;
    v65 = 0;
    if ( *((struct _KTHREAD **)v64 + 3) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v64, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *((int *)v44 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    v38 = (*((_DWORD *)v44 + 8))-- == 1;
    if ( v38 )
    {
      *((_QWORD *)v44 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v44 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
