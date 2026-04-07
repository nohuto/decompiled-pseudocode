/*
 * XREFs of ?StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B2830
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AF2A8 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800AF87C (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::StopImpl(__int64 **this)
{
  CTimelineBase *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int *v6[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(this + 45);
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(this + 48);
  v2 = (CTimelineBase *)this[54];
  this[54] = 0LL;
  if ( v2 )
    CTimelineBase::Release(v2);
  v6[0] = (unsigned int *)(this + 55);
  v6[1] = (unsigned int *)this + 111;
  v6[2] = (unsigned int *)(this + 56);
  v3 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v2,
         (struct IAnimationListener *)((unsigned __int64)(this + 26) & -(__int64)(this != 0LL)),
         v6,
         3u);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B,
    (int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
