/*
 * XREFs of ?StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B4780
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AF2A8 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::StopImpl(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  CTimelineBase *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int *v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)this + 45);
  *((_QWORD *)this + 45) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = *((_QWORD *)this + 46);
  *((_QWORD *)this + 46) = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = *((_QWORD *)this + 47);
  *((_QWORD *)this + 47) = 0LL;
  if ( v4 )
    CBaseObject::Release((CBaseObject *)(v4 + 8));
  v5 = (CTimelineBase *)*((_QWORD *)this + 48);
  *((_QWORD *)this + 48) = 0LL;
  if ( v5 )
    CTimelineBase::Release(v5);
  v9[0] = (unsigned int *)((char *)this + 392);
  v9[1] = (unsigned int *)((char *)this + 396);
  v9[2] = (unsigned int *)((char *)this + 400);
  v6 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v5,
         (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
         v9,
         3u);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x75,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
