/*
 * XREFs of ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800134C4
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180002A30 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180005F38 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z @ 0x180012EE8 (-UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180013600 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateLocationWithScalar(
        CDirectTouchVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        float a4)
{
  int v7; // edx
  _DWORD *v8; // rdi
  int v9; // eax
  CVisual *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r8

  *((float *)this + 69) = a4;
  v7 = a3->right - a3->left;
  if ( v7 <= a3->bottom - a3->top )
    v7 = a3->bottom - a3->top;
  v8 = (_DWORD *)((char *)this + 248);
  v9 = (int)(float)((float)CContactManager::GetBoundedContactWidth(this, v7, *a2) * a4);
  *((_DWORD *)this + 62) = v9;
  if ( v9 < 1 )
  {
    *v8 = 1;
    v9 = 1;
  }
  v10 = (CVisual *)*((_QWORD *)this + 42);
  *((_DWORD *)this + 63) = v9;
  CVisual::SetSize(v10, (const struct tagSIZE *)this + 31);
  *((struct tagPOINT *)this + 28) = *a2;
  v11 = *((_DWORD *)this + 63) / 2;
  *(struct tagRECT *)((char *)this + 232) = *a3;
  v12 = a2->y - v11;
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 42), a2->x - *v8 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 42), v12, v13);
  return 0LL;
}
