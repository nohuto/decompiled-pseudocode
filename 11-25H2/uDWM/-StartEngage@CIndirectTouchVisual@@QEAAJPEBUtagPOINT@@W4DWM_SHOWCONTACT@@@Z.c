/*
 * XREFs of ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B955C
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
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

__int64 __fastcall CIndirectTouchVisual::StartEngage(__int64 a1)
{
  int v2; // r9d
  const struct tagPOINT *v3; // r10
  LPVOID v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  int v9; // eax
  unsigned int v10; // r9d
  LPVOID v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *(_DWORD *)(a1 + 308) = v2;
  CIndirectTouchVisual::UpdateLocation((CIndirectTouchVisual *)a1, v3);
  v4 = DefaultHeap::AllocClear(0x78uLL);
  if ( v4 )
    v8 = CTimeline<float>::CTimeline<float>((__int64)v4, v5, v6, v7, 0);
  else
    v8 = 0LL;
  *(_QWORD *)(a1 + 312) = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    v10 = 87;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10, 0LL);
    CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
    *(_DWORD *)(a1 + 300) = 1065353216;
    *(_DWORD *)(a1 + 304) = 14;
    CIndirectTouchVisual::UpdateOpacityAndSource((CIndirectTouchVisual *)a1);
    return 0LL;
  }
  v11 = DefaultHeap::AllocClear(0x78uLL);
  if ( v11 )
    v15 = CTimeline<float>::CTimeline<float>((__int64)v11, v12, v13, v14, 0);
  else
    v15 = 0LL;
  *(_QWORD *)(a1 + 328) = v15;
  if ( !v15 )
  {
    v9 = -2147024882;
    v10 = 90;
    goto LABEL_14;
  }
  v9 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  if ( v9 < 0 )
  {
    v10 = 92;
    goto LABEL_14;
  }
  CIndirectTouchVisual::SetETWAnimation(a1, 3);
  return 0LL;
}
