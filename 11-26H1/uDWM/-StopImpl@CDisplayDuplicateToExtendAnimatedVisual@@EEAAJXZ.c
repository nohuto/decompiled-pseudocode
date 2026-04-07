/*
 * XREFs of ?StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B0D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800AF2A8 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::StopImpl(CDisplayDuplicateToExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int *v7[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 47);
  *((_QWORD *)this + 47) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = *((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v7[0] = (unsigned int *)((char *)this + 432);
  v7[1] = (unsigned int *)((char *)this + 436);
  v7[2] = (unsigned int *)((char *)this + 440);
  v7[3] = (unsigned int *)((char *)this + 444);
  v7[4] = (unsigned int *)((char *)this + 448);
  v7[5] = (unsigned int *)((char *)this + 452);
  v4 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         (CDisplayAnimatedVisual *)v3,
         (struct IAnimationListener *)(((unsigned __int64)this + 208) & -(__int64)(this != 0LL)),
         v7,
         6u);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85,
    (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
