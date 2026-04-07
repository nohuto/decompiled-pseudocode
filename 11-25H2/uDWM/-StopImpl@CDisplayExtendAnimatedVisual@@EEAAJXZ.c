/*
 * XREFs of ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B1CD0
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

__int64 __fastcall CDisplayExtendAnimatedVisual::StopImpl(CDisplayExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CTimelineBase *v4; // rcx
  CDisplayAnimatedVisual *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int *v9[5]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = *((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = (CTimelineBase *)*((_QWORD *)this + 54);
  *((_QWORD *)this + 54) = 0LL;
  if ( v4 )
    CTimelineBase::Release(v4);
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear((__int64 **)this + 50);
  v9[0] = (unsigned int *)((char *)this + 440);
  v9[1] = (unsigned int *)((char *)this + 444);
  v9[2] = (unsigned int *)((char *)this + 448);
  v9[3] = (unsigned int *)((char *)this + 452);
  v9[4] = (unsigned int *)((char *)this + 456);
  v6 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v5,
         (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
         v9,
         5u);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
