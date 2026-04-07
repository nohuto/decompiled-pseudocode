/*
 * XREFs of ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B9B0C
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B955C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B96C0 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B9810 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 */

__int64 __fastcall CIndirectTouchVisual::UpdateLocation(CIndirectTouchVisual *this, const struct tagPOINT *a2)
{
  int v3; // ebx

  *(struct tagPOINT *)((char *)this + 260) = *a2;
  v3 = a2->y - *((_DWORD *)this + 68) / 2;
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 42), a2->x - *((_DWORD *)this + 67) / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 42), v3);
  return 0LL;
}
