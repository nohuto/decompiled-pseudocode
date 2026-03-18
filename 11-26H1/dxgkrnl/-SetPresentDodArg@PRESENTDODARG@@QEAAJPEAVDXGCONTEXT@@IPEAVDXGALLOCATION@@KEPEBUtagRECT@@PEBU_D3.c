/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x140446808
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140446E68 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x14004C144 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x140051600 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1400A56A4 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1402B9970 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        unsigned int a5,
        char a6,
        const struct tagRECT *a7,
        const struct _D3DKMT_PRESENT *a8,
        const struct _DXGKARG_PRESENT *a9,
        struct COREDEVICEACCESS *a10)
{
  const struct _D3DKMT_PRESENT *v10; // r15
  __int64 v12; // rsi
  D3DKMT_PRESENTFLAGS *p_Flags; // r13
  __int64 v16; // r8
  D3DKMT_HANDLE v17; // eax
  int v18; // edx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdi
  DXGDEVICE *v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  __int64 Format; // rdx
  bool v27; // zf
  unsigned int v28; // eax
  UINT DirtyRectCount; // edx
  UINT Value; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const RECT *pDirtyRects; // r15
  const struct _DXGKARG_PRESENT *v33; // r13
  const struct tagRECT *v34; // rdi
  int right; // r8d
  int left; // r11d
  int bottom; // r9d
  int top; // r10d
  int v39; // ecx
  void *v40; // rax
  unsigned int MoveRectCount; // edx
  void *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  UINT Height; // eax
  void *v48; // rax
  __int64 v49; // [rsp+38h] [rbp-89h]
  __int64 v50; // [rsp+38h] [rbp-89h]
  struct _D3DKMT_UNLOCK v51; // [rsp+58h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v52; // [rsp+68h] [rbp-59h] BYREF
  struct _D3DKMT_LOCK v53; // [rsp+98h] [rbp-29h] BYREF
  int v54; // [rsp+100h] [rbp+3Fh] BYREF

  v27 = *((_BYTE *)a2 + 434) == 0;
  v10 = a8;
  v12 = a3;
  memset(&v52, 0, sizeof(v52));
  p_Flags = &a8->Flags;
  if ( v27 )
  {
    v16 = *((_QWORD *)a2 + 2);
    v17 = *(D3DKMT_HANDLE *)((char *)&a8->hDestination + (-(__int64)((p_Flags->Value & 4) != 0) & 0xFFFFFFFFFFFFFFFCuLL));
    memset(&v53, 0, sizeof(v53));
    v53.hAllocation = v17;
    v53.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 9;
    v54 = v17;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL)) )
      v53.Flags.Value = v18 | 4;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 444LL) & 0x10) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 332;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DoDPresent tries to lock a DoD primary which is not created on the BasicRender.",
        332LL,
        0LL,
        0LL,
        0LL,
        0LL);
      MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"DoDPresent tries to lock a DoD primary which is not created on the BasicRender.");
    }
    v20 = DXGDEVICE::Lock(*((DXGDEVICE **)a2 + 2), &v53, a10, 1);
    v21 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry5(2LL, v20, a2, *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL), v53.hAllocation, a4);
      v49 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
      WdLogGlobalForLineNumber = 344;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DOD Present 0x%I64x Lock failed 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
        v21,
        (__int64)a2,
        v49,
        v53.hAllocation,
        (__int64)a4);
      return (unsigned int)v21;
    }
    *((_QWORD *)this + 1) = v53.pData;
    v23 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
    v51.phAllocations = (const D3DKMT_HANDLE *)&v54;
    v51.hDevice = 0;
    v51.NumAllocations = 1;
    DXGDEVICE::Unlock(v23, &v51, 0);
    v52.hAllocation = *(HANDLE *)(*((_QWORD *)a4 + 6) + 16LL);
    v24 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)a2 + 2) + 16LL), &v52);
    if ( v24 < 0 )
    {
      v25 = v24;
      WdLogSingleEntry5(2LL, v24, a2, *((unsigned int *)a4 + 4), a4, v12);
      v50 = *((unsigned int *)a4 + 4);
      WdLogGlobalForLineNumber = 377;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
        v25,
        (__int64)a2,
        v50,
        (__int64)a4,
        v12);
      return -1073741811LL;
    }
    Format = v52.Format;
    *(_DWORD *)this = v12;
    if ( (int)Format > 32 )
    {
      if ( (_DWORD)Format != 33 )
      {
        if ( (_DWORD)Format == 41 )
        {
          *((_DWORD *)this + 4) = 1;
        }
        else
        {
          if ( (_DWORD)Format != 113 )
          {
            v27 = (_DWORD)Format == 119;
LABEL_23:
            if ( !v27 )
            {
              WdLogSingleEntry2(2LL, -1073741811LL, Format);
              WdLogGlobalForLineNumber = 415;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DOD Present : 0x%I64x is returned for invalid primary format 0x%I64x",
                -1073741811LL,
                v52.Format,
                0LL,
                0LL,
                0LL);
              return 3221225485LL;
            }
            goto LABEL_27;
          }
          *((_DWORD *)this + 4) = 8;
        }
LABEL_28:
        v28 = a5;
        goto LABEL_30;
      }
    }
    else if ( (_DWORD)Format != 32 )
    {
      if ( (_DWORD)Format == 20 )
      {
        *((_DWORD *)this + 4) = 3;
        goto LABEL_28;
      }
      if ( (_DWORD)Format != 21 && (_DWORD)Format != 22 )
      {
        if ( (_DWORD)Format != 23 )
        {
          v27 = (_DWORD)Format == 31;
          goto LABEL_23;
        }
        *((_DWORD *)this + 4) = 2;
        goto LABEL_28;
      }
    }
LABEL_27:
    *((_DWORD *)this + 4) = 4;
    goto LABEL_28;
  }
  *((_QWORD *)this + 1) = 0LL;
  v28 = 0;
LABEL_30:
  *((_DWORD *)this + 5) = v28;
  DirtyRectCount = 0;
  *((_DWORD *)this + 6) = a6 & 1;
  Value = p_Flags->Value;
  pPresentRegions = v10->pPresentRegions;
  pDirtyRects = 0LL;
  v33 = a9;
  v54 = Value & 4;
  if ( (Value & 4) != 0 )
  {
    if ( !pPresentRegions )
    {
      v34 = 0LL;
      goto LABEL_36;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = a9->SubRectCnt;
    pDirtyRects = a9->pDstSubRects;
  }
  v34 = a7;
LABEL_36:
  if ( !v34 )
    goto LABEL_51;
  right = v34->right;
  left = v34->left;
  if ( v34->left < right )
  {
    bottom = v34->bottom;
    top = v34->top;
    if ( top < bottom && right <= (int)v52.Width && bottom <= (int)v52.Height && left >= 0 && top >= 0 )
    {
      v39 = 0;
      if ( !DirtyRectCount )
      {
LABEL_49:
        ++DirtyRectCount;
        goto LABEL_51;
      }
      while ( left < pDirtyRects[v39].left
           || right > pDirtyRects[v39].right
           || top < pDirtyRects[v39].top
           || bottom > pDirtyRects[v39].bottom )
      {
        if ( ++v39 >= DirtyRectCount )
          goto LABEL_49;
      }
    }
  }
  v34 = 0LL;
LABEL_51:
  if ( v54 )
  {
    if ( pPresentRegions && (DirtyRectCount || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = DirtyRectCount;
      if ( DirtyRectCount )
      {
        v40 = (void *)CCachedData<tagRECT,16>::Get((__int64)this + 176, DirtyRectCount);
        *((_QWORD *)this + 6) = v40;
        if ( !v40 )
        {
          WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 10));
          WdLogGlobalForLineNumber = 512;
LABEL_58:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"PRESENTDODARG 0x%I64x: failed to allocate 0x%I64x dirty rects",
            (__int64)this,
            *((unsigned int *)this + 10),
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v40, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v34 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v34;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v42 = (void *)CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        v43 = *((unsigned int *)this + 7);
        *((_QWORD *)this + 4) = v42;
        if ( !v42 )
        {
          WdLogSingleEntry2(2LL, this, (unsigned int)v43);
          v44 = *((unsigned int *)this + 7);
          WdLogGlobalForLineNumber = 539;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"PRESENTDODARG 0x%I64x: failed to allocate 0x%I64x move rects",
            (__int64)this,
            v44,
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        memmove(v42, pPresentRegions->pMoveRects, 24 * v43);
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_QWORD *)this + 22) = 0LL;
      v45 = *((_QWORD *)this + 6);
      if ( *((_BYTE *)a2 + 434) )
      {
        v46 = *((_QWORD *)a4 + 6);
        *(_DWORD *)(v45 + 8) = *(_DWORD *)(v46 + 72);
        Height = *(_DWORD *)(v46 + 76);
      }
      else
      {
        *(_DWORD *)(v45 + 8) = v52.Width;
        Height = v52.Height;
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = DirtyRectCount;
  v48 = (void *)CCachedData<tagRECT,16>::Get((__int64)this + 176, DirtyRectCount);
  *((_QWORD *)this + 6) = v48;
  if ( !v48 )
  {
    WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 10));
    WdLogGlobalForLineNumber = 593;
    goto LABEL_58;
  }
  memmove(v48, v33->pDstSubRects, 16LL * v33->SubRectCnt);
  if ( v34 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v33->SubRectCnt) = *v34;
  return 0LL;
}
