/*
 * XREFs of ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x180070D5C
 * Callers:
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800B3900 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180023144 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x180070FA0 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180070FDC (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::SetupDelayBeforeEntranceAnimation(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        __int64 a2)
{
  CBaseObject *v3; // rax
  _QWORD *v4; // r9
  _QWORD *v5; // r10
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CBaseObject *)CTimeline<float>::operator new(this, a2);
  if ( v3 )
  {
    CTimelineBase::CTimelineBase(v3, 2.0, 0.0, 1.0, 0);
    *v4 = &CTimeline<float>::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=((char *)this + 368, v4);
  if ( !*v5 )
  {
    v6 = -2147024882;
    v7 = 235LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)v6,
      v9);
    return (unsigned int)v6;
  }
  v6 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
  if ( v6 < 0 )
  {
    v7 = 236LL;
    goto LABEL_6;
  }
  return 0LL;
}
