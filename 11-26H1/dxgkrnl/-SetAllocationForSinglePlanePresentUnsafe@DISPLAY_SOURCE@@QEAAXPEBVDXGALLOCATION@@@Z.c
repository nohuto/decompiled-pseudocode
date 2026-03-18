/*
 * XREFs of ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x14032CE3C
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x14032CCFC (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1400594A4 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x14032C8D8 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x14032D3F4 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x14032E9B0 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x14032EB8C (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x14032ECB0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x14032F13C (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x14032FC6C (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_SOURCE::SetAllocationForSinglePlanePresentUnsafe(
        DISPLAY_SOURCE *this,
        const struct DXGALLOCATION *a2)
{
  char *v4; // rdi
  int v5; // r9d
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int NextConfigIndex; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  unsigned int i; // ecx
  __int64 v16; // rax
  unsigned int v17; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  struct tagRECT v20; // [rsp+C0h] [rbp-38h] BYREF

  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9645;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9645LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 624LL)) )
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
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9698;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!Enabled || pAllocation != NULL", 9698LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 946)
    && !IsDisplayPlaneConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 1168))
    && (v4 = (char *)this + 80 * *((int *)this + 292) + 1176) != 0LL
    && (v5 = *((_DWORD *)v4 + 2), (v5 & 0x10) == 0)
    && (v5 & 0x20) == 0
    && (v6 = *((_DWORD *)this + 172), *((_DWORD *)v4 + 3) == v6)
    && (v7 = *((_DWORD *)this + 174), *((_DWORD *)v4 + 5) == v7)
    && (v8 = *((_DWORD *)this + 173), *((_DWORD *)v4 + 4) == v8)
    && (v9 = *((_DWORD *)this + 175), *((_DWORD *)v4 + 6) == v9)
    && *((_DWORD *)v4 + 7) == v6
    && *((_DWORD *)v4 + 9) == v7
    && *((_DWORD *)v4 + 8) == v8
    && *((_DWORD *)v4 + 10) == v9
    && *((_DWORD *)v4 + 11) == v6
    && *((_DWORD *)v4 + 13) == v7
    && *((_DWORD *)v4 + 12) == v8
    && *((_DWORD *)v4 + 14) == v9
    && *((_DWORD *)v4 + 15) == 1
    && (v5 & 4) == 0
    && !*((_DWORD *)v4 + 16)
    && !*((_DWORD *)v4 + 17) )
  {
    if ( !*((_DWORD *)this + 946) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9706;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaxPlanesUsed > PlaneIndex", 9706LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_DWORD *)v4 + 2) |= 1u;
    *((_DWORD *)v4 + 2) |= 2u;
    *(_QWORD *)v4 = a2;
  }
  else
  {
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
    NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 292));
    v11 = *((_DWORD *)this + 293);
    v12 = NextConfigIndex;
    *((_DWORD *)this + 292) = NextConfigIndex;
    if ( NextConfigIndex == v11 || v11 == -1 )
      *((_DWORD *)this + 293) = GetNextConfigIndex(v11);
    v13 = 10 * v12;
    *((_DWORD *)this + 2 * v13 + 296) = 3;
    *((_QWORD *)this + v13 + 147) = a2;
    *(_OWORD *)((char *)this + 8 * v13 + 1188) = *((_OWORD *)this + 43);
    *(_OWORD *)((char *)this + 8 * v13 + 1204) = *((_OWORD *)this + 43);
    v14 = *((_OWORD *)this + 43);
    *((_QWORD *)this + v13 + 155) = 0LL;
    *((_DWORD *)this + 2 * v13 + 309) = 1;
    *(_OWORD *)((char *)this + 8 * v13 + 1220) = v14;
    *((_DWORD *)this + 2 * v13 + 312) = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
        *((unsigned int *)this + 174),
        *((unsigned int *)this + 173),
        *((unsigned int *)this + 172),
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
        *((_DWORD *)this + 4),
        0,
        1,
        0,
        *((_DWORD *)this + 172),
        *((_DWORD *)this + 173),
        *((_DWORD *)this + 174),
        *((_DWORD *)this + 175),
        *((_DWORD *)this + 172),
        *((_DWORD *)this + 173),
        *((_DWORD *)this + 174),
        *((_DWORD *)this + 175),
        *((_DWORD *)this + 172),
        *((_DWORD *)this + 173),
        *((_DWORD *)this + 174),
        *((_DWORD *)this + 175),
        0,
        0,
        0);
    if ( !*((_DWORD *)this + 946) )
      *((_DWORD *)this + 946) = 1;
  }
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 624LL)) )
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
  if ( *((_BYTE *)this + 3792) )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
    if ( *((_DWORD *)this + 946) > 1u )
    {
      v17 = 1;
      do
      {
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, v17);
        if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        {
          v20 = 0LL;
          DISPLAY_SOURCE::CreateNewPlaneConfig(
            this,
            v17,
            0LL,
            0,
            0,
            &v20,
            &v20,
            &v20,
            D3DDDI_ROTATION_IDENTITY,
            D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
            D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
            0,
            D3DDDIFMT_UNKNOWN,
            0);
        }
        ++v17;
      }
      while ( v17 < *((_DWORD *)this + 946) );
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
    if ( LatestPostCompositionConfigInternal && *(_BYTE *)LatestPostCompositionConfigInternal )
    {
      v20 = 0LL;
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, 0, &v20, &v20);
    }
    *((_BYTE *)this + 3792) = 0;
  }
  for ( i = 0; i < *((_DWORD *)this + 947); *((_BYTE *)this + v16 + 2928) = 0 )
    v16 = i++;
  *((_DWORD *)this + 947) = 0;
  *((_BYTE *)this + 3744) = 0;
}
