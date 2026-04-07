/*
 * XREFs of ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800D09CC
 * Callers:
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnIsInWindowMoveUpdated(CTopLevelWindow3D *this, char a2)
{
  int started; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 40) )
  {
    if ( a2 )
    {
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 0xAu);
      if ( started < 0 )
      {
        v3 = 652LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v3,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)started);
        return (unsigned int)started;
      }
    }
    else
    {
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 0xBu);
      if ( started < 0 )
      {
        v3 = 656LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
