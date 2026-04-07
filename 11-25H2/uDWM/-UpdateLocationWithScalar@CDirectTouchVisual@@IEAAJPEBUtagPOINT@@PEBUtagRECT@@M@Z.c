/*
 * XREFs of ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18002D3A8
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18002C020 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z @ 0x18002D1F8 (-UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003031C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180094398 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18002D4D8 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateLocationWithScalar(
        CDirectTouchVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        float a4)
{
  int v7; // edx
  _DWORD *v8; // rbx
  int v9; // eax
  CVisual *v10; // rcx
  int v11; // eax
  int v12; // ebx

  *((float *)this + 77) = a4;
  v7 = a3->right - a3->left;
  if ( v7 <= a3->bottom - a3->top )
    v7 = a3->bottom - a3->top;
  v8 = (_DWORD *)((char *)this + 280);
  v9 = (int)(float)((float)CContactManager::GetBoundedContactWidth(this, v7, *a2) * a4);
  *((_DWORD *)this + 70) = v9;
  if ( v9 < 1 )
  {
    *v8 = 1;
    v9 = 1;
  }
  v10 = (CVisual *)*((_QWORD *)this + 46);
  *((_DWORD *)this + 71) = v9;
  CVisual::SetSize(v10, (const struct tagSIZE *)this + 35);
  *((struct tagPOINT *)this + 32) = *a2;
  v11 = *v8 / 2;
  *(struct tagRECT *)((char *)this + 264) = *a3;
  v12 = a2->y - *((_DWORD *)this + 71) / 2;
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 46), a2->x - v11);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 46), v12);
  return 0LL;
}
