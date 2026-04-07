/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x180070E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x180070EF8 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18008CCCC (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::OnGlobalTimeUpdatedImpl(CTimelineBase **this)
{
  int v2; // eax
  unsigned int v3; // edi
  CTimelineBase *v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 376) )
  {
    v2 = CDisplayDisconnectAnimatedVisual::SetupDelay((CDisplayDisconnectAnimatedVisual *)this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
        (const char *)(unsigned int)v2,
        v8);
      return v3;
    }
    *((_BYTE *)this + 376) = 1;
  }
  v4 = this[46];
  if ( !v4 )
    return 0LL;
  if ( !*((_BYTE *)v4 + 72) )
    return 0LL;
  this[46] = 0LL;
  CTimelineBase::Release(v4);
  v6 = CDisplayAnimatedVisual::Stop(this, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
    (const char *)(unsigned int)v6,
    v8);
  return v7;
}
