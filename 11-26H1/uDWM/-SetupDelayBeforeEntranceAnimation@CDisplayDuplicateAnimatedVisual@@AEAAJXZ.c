/*
 * XREFs of ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800AFE00
 * Callers:
 *     ?OnAnimationCompleteImpl@CDisplayDuplicateAnimatedVisual@@EEAAJI@Z @ 0x1800AFDA0 (-OnAnimationCompleteImpl@CDisplayDuplicateAnimatedVisual@@EEAAJI@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x180070FA0 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180070FDC (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::SetupDelayBeforeEntranceAnimation(CTimelineBase **this)
{
  CBaseObject *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r10
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CBaseObject *)CTimeline<float>::operator new();
  if ( v2 )
    v2 = (CBaseObject *)CTimeline<float>::CTimeline<float>((__int64)v2, v3, v4, v5, 0);
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=(this + 49, v2);
  if ( !*v6 )
  {
    v7 = -2147024882;
    v8 = 214LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification((CDisplayAnimatedVisual *)this);
  if ( v7 < 0 )
  {
    v8 = 215LL;
    goto LABEL_5;
  }
  return 0LL;
}
