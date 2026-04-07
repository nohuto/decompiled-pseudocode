/*
 * XREFs of ?OnWindowMove@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z @ 0x180069BA0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

void __fastcall CTransitionVisualController::OnWindowMove(CTransitionVisualController *this, struct CWindowData *a2)
{
  __int64 i; // r8
  __int64 v3; // r9
  struct tagPOINT *v4; // rcx
  struct tagPOINT v5; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 3);
    if ( *(_BYTE *)(v3 + 24 * i + 16) && *((_QWORD *)a2 + 55) == *(_QWORD *)(v3 + 24 * i) )
    {
      v4 = *(struct tagPOINT **)(v3 + 24 * i + 8);
      v5 = *(struct tagPOINT *)((char *)a2 + 220);
      CVisual::SetOffset(v4, &v5);
      return;
    }
  }
}
