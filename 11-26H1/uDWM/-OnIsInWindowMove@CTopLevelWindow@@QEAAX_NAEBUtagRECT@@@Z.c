/*
 * XREFs of ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x180079AA8
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1810 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z @ 0x1800E1CD8 (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z.c)
 * Callees:
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x180014168 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180014214 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006F294 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180077688 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnIsInWindowMove(CTopLevelWindow *this, char a2, const struct tagRECT *a3)
{
  __int64 v3; // rax
  LONG left; // edx
  LONG top; // r9d
  float v8; // xmm3_4
  bool v9; // sf
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r8
  CVisual *v14; // rcx
  struct tagPOINT v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 87);
  left = a3->left;
  top = a3->top;
  v8 = FLOAT_1_0;
  v9 = *(char *)(v3 + 741) < 0;
  v15.x = a3->left;
  v15.y = top;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v3 + 448);
    v11 = *(_QWORD *)(v10 + 456);
    v8 = *(float *)(v10 + 444);
    v15.x = left + v11;
    v15.y = top + HIDWORD(v11);
  }
  else if ( a2 )
  {
    v12 = 0;
    v8 = FLOAT_0_94999999;
    if ( a3->right - left >= 0 )
      v12 = a3->right - left;
    v15.x = left + (int)(float)((float)((float)((float)v12 * 0.050000012) * 0.5) + 0.5);
    v15.y = top - (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * -4.0);
  }
  if ( *((float *)this + 26) != v8 || *((float *)this + 27) != v8 )
  {
    CVisual::SetScale(this, v8, v8);
    CTopLevelWindow::OnWindowScaleUpdated(this);
  }
  CVisual::SetOffset((struct tagPOINT *)this, &v15, (__int64)a3);
  v14 = (CVisual *)*((_QWORD *)this + 66);
  if ( v14 )
  {
    if ( a2 )
      CVisual::SetInterpolationMode((__int64)v14, 6LL, v13);
    else
      CVisual::ClearInterpolationMode(v14);
  }
}
