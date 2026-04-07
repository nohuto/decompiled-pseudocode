/*
 * XREFs of ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B4988
 * Callers:
 *     ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z @ 0x1800B47F0 (-OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x180093F40 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18009A564 (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(CTimelineBase **this)
{
  CMILRefCountBase *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r10
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CMILRefCountBase *)DefaultHeap::AllocClear(0x78uLL);
  if ( v2 )
    v2 = (CMILRefCountBase *)CTimeline<float>::CTimeline<float>((__int64)v2, v3, v4, v5, 0);
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=(this + 52, v2);
  if ( !*v6 )
  {
    v7 = -2147024882;
    v8 = 336LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification((CDisplayAnimatedVisual *)this);
  if ( v7 < 0 )
  {
    v8 = 337LL;
    goto LABEL_5;
  }
  return 0LL;
}
