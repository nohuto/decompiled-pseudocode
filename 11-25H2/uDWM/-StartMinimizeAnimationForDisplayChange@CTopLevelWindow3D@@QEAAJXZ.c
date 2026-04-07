/*
 * XREFs of ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800D0AA4
 * Callers:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x180099384 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18004B744 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::StartMinimizeAnimationForDisplayChange(CTopLevelWindow3D *this)
{
  int started; // eax
  unsigned int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_BYTE *)this + 569) = 1;
  started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
  v3 = started;
  if ( started >= 0 )
  {
    v6 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = (unsigned int)v6;
    v5 = 444LL;
  }
  else
  {
    v4 = (unsigned int)started;
    v5 = 439LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)v4);
LABEL_7:
  result = v3;
  *((_BYTE *)this + 569) = 0;
  return result;
}
