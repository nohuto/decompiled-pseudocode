/*
 * XREFs of ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B85E8
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800057B4 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800B8410 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B8920 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B8A2C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B8A98 (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StartHover(__int64 a1)
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

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *(_DWORD *)(a1 + 276) = v2;
  CIndirectTouchVisual::UpdateLocation((CIndirectTouchVisual *)a1, v3);
  v4 = CTimeline<float>::operator new();
  if ( v4 )
    v4 = CTimeline<float>::CTimeline<float>((__int64)v4, v5, v6, v7, 0);
  *(_QWORD *)(a1 + 280) = v4;
  if ( !v4 )
  {
    v8 = -2147024882;
    v9 = 126;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9, 0LL);
    CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
    *(_DWORD *)(a1 + 268) = 1065353216;
    *(_DWORD *)(a1 + 272) = 0;
    CIndirectTouchVisual::UpdateOpacityAndSource((CIndirectTouchVisual *)a1);
    return 0LL;
  }
  v10 = CTimeline<float>::operator new();
  if ( v10 )
    v10 = CTimeline<float>::CTimeline<float>((__int64)v10, v11, v12, v13, 0);
  *(_QWORD *)(a1 + 296) = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    v9 = 129;
    goto LABEL_12;
  }
  v8 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  if ( v8 < 0 )
  {
    v9 = 131;
    goto LABEL_12;
  }
  CIndirectTouchVisual::SetETWAnimation(a1, 2);
  return 0LL;
}
