/*
 * XREFs of ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x18008A8F0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z @ 0x1800E6498 (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x1800169E8 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019C40 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18007CC88 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnIsInWindowMove(CTopLevelWindow *this, char a2, const struct tagRECT *a3)
{
  LONG left; // r10d
  __int64 v5; // rdx
  LONG top; // r9d
  float v8; // xmm3_4
  bool v9; // zf
  __int64 v10; // rdx
  int v11; // eax
  __int64 *v12; // rcx
  struct tagPOINT v13; // [rsp+30h] [rbp+8h] BYREF

  left = a3->left;
  v5 = *((_QWORD *)this + 89);
  top = a3->top;
  v8 = FLOAT_1_0;
  v13.x = a3->left;
  v9 = (*(_BYTE *)(v5 + 678) & 1) == 0;
  v13.y = top;
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = 0;
      v8 = FLOAT_0_94999999;
      if ( a3->right - left >= 0 )
        v11 = a3->right - left;
      v13.x = left + (int)(float)((float)((float)((float)v11 * 0.050000012) * 0.5) + 0.5);
      v13.y = top - (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * -4.0);
    }
  }
  else
  {
    v10 = *(_QWORD *)(v5 + 448);
    v8 = *(float *)(v10 + 588);
    v13.x = left + *(_DWORD *)(v10 + 600);
    v13.y = top + HIDWORD(*(_QWORD *)(v10 + 600));
  }
  if ( *((float *)this + 28) != v8 || *((float *)this + 29) != v8 )
  {
    CVisual::SetScale(this, v8, v8);
    CTopLevelWindow::OnWindowScaleUpdated(this);
  }
  CVisual::SetOffset((struct tagPOINT *)this, &v13);
  v12 = (__int64 *)*((_QWORD *)this + 68);
  if ( v12 )
  {
    if ( a2 )
      CVisual::SetInterpolationMode(v12, 6);
    else
      CVisual::ClearInterpolationMode((CVisual *)v12);
  }
}
