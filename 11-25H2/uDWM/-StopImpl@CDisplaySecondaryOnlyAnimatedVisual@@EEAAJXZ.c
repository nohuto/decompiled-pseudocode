/*
 * XREFs of ?StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800B3F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AFA5C (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::StopImpl(CDisplaySecondaryOnlyAnimatedVisual *this)
{
  __int64 v2; // rcx
  CTimelineBase *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = (CTimelineBase *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = 0LL;
  if ( v3 )
    CTimelineBase::Release(v3);
  v8 = (unsigned int *)((char *)this + 408);
  v4 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v3,
         (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
         &v8,
         1u);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
