/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x180078050
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ @ 0x1800B3530 (-SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayBlackCurtainAnimatedVisual::OnGlobalTimeUpdatedImpl(CTimelineBase **this)
{
  int v2; // eax
  unsigned int v3; // edi
  CTimelineBase *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 368) )
  {
    v2 = CDisplayBlackCurtainAnimatedVisual::SetupDelay((CDisplayBlackCurtainAnimatedVisual *)this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayblackcurtainanimatedvisual.cpp",
        (const char *)(unsigned int)v2,
        v8);
      return v3;
    }
    *((_BYTE *)this + 368) = 1;
  }
  v5 = this[45];
  if ( !v5 )
    return 0LL;
  if ( !*((_BYTE *)v5 + 72) )
    return 0LL;
  this[45] = 0LL;
  CTimelineBase::Release(v5);
  v6 = CDisplayAnimatedVisual::Stop(this, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayblackcurtainanimatedvisual.cpp",
    (const char *)(unsigned int)v6,
    v8);
  return v7;
}
