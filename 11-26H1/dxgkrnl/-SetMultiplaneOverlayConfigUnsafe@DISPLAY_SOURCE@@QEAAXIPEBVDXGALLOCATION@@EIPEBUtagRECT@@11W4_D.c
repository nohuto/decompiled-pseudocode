/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x14032E360
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14042A0A4 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1400594A4 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x14032E9B0 (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        char a4,
        char a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        unsigned __int8 a14)
{
  const struct DXGALLOCATION *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rbx
  char *v19; // rbx
  unsigned int v20; // ecx
  char v21; // r12
  const struct tagRECT *v22; // rbp
  const struct tagRECT *v23; // r15
  const struct tagRECT *v24; // r14
  enum _D3DDDIFORMAT v25; // ebx
  int NextConfigIndex; // eax
  _DWORD *v27; // r8
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  struct tagRECT v33; // xmm0
  int v34; // eax

  v16 = a3;
  v17 = a2;
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
  if ( a4 && !v16 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9698;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!Enabled || pAllocation != NULL", 9698LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v17 >= *((_DWORD *)this + 946) )
    goto LABEL_51;
  v18 = 168 * v17;
  if ( *((_DWORD *)this + 42 * v17 + 292) == -1 )
  {
    if ( *(_DWORD *)((char *)this + v18 + 1172) != -1 )
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
    if ( *(_DWORD *)((char *)this + v18 + 1168) == -1 )
    {
LABEL_51:
      v19 = 0LL;
      goto LABEL_52;
    }
  }
  _mm_lfence();
  v19 = (char *)this + 80 * *(int *)((char *)this + v18 + 1168) + v18 + 1176;
  if ( !v19 )
  {
LABEL_52:
    v21 = a5;
LABEL_53:
    v22 = a6;
LABEL_54:
    v23 = a7;
LABEL_55:
    v24 = a8;
LABEL_28:
    if ( a13 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v19 )
      v25 = *((_DWORD *)v19 + 18);
    else
      v25 = a13;
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
    v28 = v27[1];
    v29 = NextConfigIndex;
    *v27 = NextConfigIndex;
    if ( NextConfigIndex == v28 || v28 == -1 )
    {
      v30 = GetNextConfigIndex(v28);
      v27[1] = v30;
    }
    v31 = 10 * v29;
    v32 = a4 & 1 | (2 * (a4 & 1 | (4 * (a14 & 1u))));
    v27[2 * v31 + 4] = v32;
    if ( (v21 & 1) != 0 )
    {
      v32 = (unsigned int)v32 | 0x10;
      v27[2 * v31 + 4] = v32;
    }
    if ( (v21 & 2) != 0 )
    {
      v32 = (unsigned int)v32 | 0x20;
      v27[2 * v31 + 4] = v32;
    }
    if ( (v21 & 4) != 0 )
    {
      v32 = (unsigned int)v32 | 0x40;
      v27[2 * v31 + 4] = v32;
    }
    if ( a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND )
    {
      v32 = (unsigned int)v32 | 4;
      v27[2 * v31 + 4] = v32;
    }
    *(_QWORD *)&v27[2 * v31 + 2] = a3;
    *(struct tagRECT *)&v27[2 * v31 + 5] = *v22;
    *(struct tagRECT *)&v27[2 * v31 + 9] = *v23;
    v33 = *v24;
    v27[2 * v31 + 18] = a11;
    v27[2 * v31 + 19] = a12;
    v27[2 * v31 + 17] = a9;
    v27[2 * v31 + 20] = v25;
    *(struct tagRECT *)&v27[2 * v31 + 13] = v33;
    if ( !a9 )
      v27[2 * v31 + 17] = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
        v31,
        v32,
        (__int64)v27,
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
        *((_DWORD *)this + 4),
        v17,
        a4,
        v21,
        v22->left,
        v22->top,
        v22->right,
        v22->bottom,
        v23->left,
        v23->top,
        v23->right,
        v23->bottom,
        v24->left,
        v24->top,
        v24->right,
        v24->bottom,
        a10,
        a11,
        a12);
    if ( (unsigned int)v17 >= *((_DWORD *)this + 946) )
      *((_DWORD *)this + 946) = v17 + 1;
    if ( (_DWORD)v17 )
    {
      if ( a4 )
        *((_BYTE *)this + 3792) = 1;
    }
    return;
  }
  v20 = *((_DWORD *)v19 + 2);
  if ( a4 )
  {
    v21 = a5;
    if ( (((unsigned __int8)a5 ^ (unsigned __int8)(v20 >> 4)) & 1) != 0
      || (((unsigned __int8)a5 ^ (unsigned __int8)(v20 >> 4)) & 2) != 0 )
    {
      goto LABEL_53;
    }
    v22 = a6;
    if ( *((_DWORD *)v19 + 3) != a6->left
      || *((_DWORD *)v19 + 5) != a6->right
      || *((_DWORD *)v19 + 4) != a6->top
      || *((_DWORD *)v19 + 6) != a6->bottom )
    {
      goto LABEL_54;
    }
    v23 = a7;
    if ( *((_DWORD *)v19 + 7) != a7->left
      || *((_DWORD *)v19 + 9) != a7->right
      || *((_DWORD *)v19 + 8) != a7->top
      || *((_DWORD *)v19 + 10) != a7->bottom )
    {
      goto LABEL_55;
    }
    v24 = a8;
    if ( *((_DWORD *)v19 + 11) != a8->left
      || *((_DWORD *)v19 + 13) != a8->right
      || *((_DWORD *)v19 + 12) != a8->top
      || *((_DWORD *)v19 + 14) != a8->bottom
      || *((_DWORD *)v19 + 15) != a9
      || ((v20 >> 2) & 1) != (a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
      || *((_DWORD *)v19 + 16) != a11
      || *((_DWORD *)v19 + 17) != a12 )
    {
      goto LABEL_28;
    }
    v16 = a3;
  }
  else if ( (v20 & 1) != 0 )
  {
    goto LABEL_52;
  }
  if ( *((_DWORD *)this + 946) <= (unsigned int)v17 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9706;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaxPlanesUsed > PlaneIndex", 9706LL, 0LL, 0LL, 0LL, 0LL);
  }
  v34 = *((_DWORD *)v19 + 2);
  *(_QWORD *)v19 = v16;
  *((_DWORD *)v19 + 2) = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)a4) & 1 ^ ((unsigned __int8)(v34 ^ (v34 ^ a4) & 1) ^ (unsigned __int8)(2 * a4)) & 2;
}
