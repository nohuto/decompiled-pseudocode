/*
 * XREFs of ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800492C0
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180037914 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x180046D44 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180049148 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 * Callees:
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180049614 (-Restart@CTimelineBase@@QEAAXN@Z.c)
 */

__int64 __fastcall CLivePreviewTimeline::RestartTimeline(__int64 a1, int a2, double a3)
{
  unsigned int v3; // r8d
  double v5; // xmm1_8
  double v6; // xmm0_8

  *(_DWORD *)(a1 + 120) = a2;
  if ( *(_BYTE *)(a1 + 72)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(double *)(a1 + 48) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    if ( a2 == 3 )
    {
      *(_QWORD *)(a1 + 128) = 0x3FF0000000000000LL;
    }
    else if ( a2 == 4 )
    {
      *(_QWORD *)(a1 + 128) = 0LL;
    }
  }
  else
  {
    if ( a2 == 3 )
    {
      v5 = (1.0 - *(double *)(a1 + 128)) * *(double *)(a1 + 48) + *(double *)(a1 + 128);
      *(double *)(a1 + 128) = v5;
    }
    else
    {
      if ( a2 != 4 )
        goto LABEL_6;
      v6 = (1.0 - *(double *)(a1 + 48)) * *(double *)(a1 + 128);
      *(double *)(a1 + 128) = v6;
      v5 = 1.0 - v6;
    }
    a3 = a3 * v5;
  }
LABEL_6:
  CTimelineBase::Restart((CTimelineBase *)a1, a3);
  return v3;
}
