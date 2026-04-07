/*
 * XREFs of ?StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B0640
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AFA5C (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800AFFC0 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::StopImpl(CDisplayDuplicateAnimatedVisual *this)
{
  __int64 v2; // rcx
  CTimelineBase *v3; // rcx
  CDisplayAnimatedVisual *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int *v8[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = (CTimelineBase *)*((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = 0LL;
  if ( v3 )
    CTimelineBase::Release(v3);
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear((__int64 **)this + 50);
  v8[0] = (unsigned int *)((char *)this + 432);
  v8[1] = (unsigned int *)((char *)this + 436);
  v8[2] = (unsigned int *)((char *)this + 440);
  v8[3] = (unsigned int *)((char *)this + 444);
  v5 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v4,
         (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
         v8,
         4u);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
