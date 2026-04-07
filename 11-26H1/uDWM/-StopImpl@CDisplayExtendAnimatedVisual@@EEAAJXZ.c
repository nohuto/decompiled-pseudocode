/*
 * XREFs of ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B1640
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AF2A8 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800AF87C (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::StopImpl(CDisplayExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CTimelineBase *v4; // rcx
  CDisplayAnimatedVisual *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int *v9[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 45);
  *((_QWORD *)this + 45) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = *((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = (CTimelineBase *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = 0LL;
  if ( v4 )
    CTimelineBase::Release(v4);
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear((__int64 **)this + 46);
  v9[0] = (unsigned int *)((char *)this + 408);
  v9[1] = (unsigned int *)((char *)this + 412);
  v9[2] = (unsigned int *)((char *)this + 416);
  v9[3] = (unsigned int *)((char *)this + 420);
  v9[4] = (unsigned int *)((char *)this + 424);
  v6 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v5,
         (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
         v9,
         5u);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59,
    (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
