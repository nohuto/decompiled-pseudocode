/*
 * XREFs of ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B9810
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18002E30C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800B94E0 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B9A10 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B9B0C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B9B7C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StartIdle(__int64 a1)
{
  int v2; // r9d
  const struct tagPOINT *v3; // r10
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // r9d
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *(_DWORD *)(a1 + 308) = v2;
  CIndirectTouchVisual::UpdateLocation((CIndirectTouchVisual *)a1, v3);
  v4 = DefaultHeap::AllocClear(0x78uLL);
  if ( v4 )
    v4 = CTimeline<float>::CTimeline<float>((__int64)v4, v5, v6, v7, 0);
  *(_QWORD *)(a1 + 312) = v4;
  if ( !v4 )
  {
    v8 = -2147024882;
    v9 = 165;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9, 0LL);
    CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
    *(_DWORD *)(a1 + 300) = 0;
    *(_DWORD *)(a1 + 304) = 0;
    CIndirectTouchVisual::UpdateOpacityAndSource((CIndirectTouchVisual *)a1);
    return 0LL;
  }
  if ( *(float *)(a1 + 292) == 0.0 )
  {
    v10 = DefaultHeap::AllocClear(0x78uLL);
    if ( v10 )
      v10 = CTimeline<float>::CTimeline<float>((__int64)v10, v11, v12, v13, 0);
    *(_QWORD *)(a1 + 328) = v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      v9 = 172;
      goto LABEL_17;
    }
  }
  else
  {
    v14 = DefaultHeap::AllocClear(0x78uLL);
    if ( v14 )
      v14 = CTimeline<float>::CTimeline<float>((__int64)v14, v15, v16, v17, 0);
    *(_QWORD *)(a1 + 320) = v14;
    if ( !v14 )
    {
      v8 = -2147024882;
      v9 = 177;
      goto LABEL_17;
    }
  }
  v8 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  if ( v8 < 0 )
  {
    v9 = 180;
    goto LABEL_17;
  }
  CIndirectTouchVisual::SetETWAnimation(a1, 1);
  return 0LL;
}
