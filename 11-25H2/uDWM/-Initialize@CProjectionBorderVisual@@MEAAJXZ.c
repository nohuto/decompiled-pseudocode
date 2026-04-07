/*
 * XREFs of ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x180071C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x180071D10 (-SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::Initialize(struct CContainerVisualProxy **this)
{
  int updated; // ebx
  __int64 v3; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CContainerVisual::Initialize(this);
  if ( updated < 0 )
  {
    v3 = 12LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordervisual.cpp",
      (const char *)(unsigned int)updated,
      v5);
    return (unsigned int)updated;
  }
  updated = CVisualProxy::SetPassiveUpdateMode(this[2], 1);
  if ( updated < 0 )
  {
    v3 = 13LL;
    goto LABEL_3;
  }
  return 0LL;
}
