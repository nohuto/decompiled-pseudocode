/*
 * XREFs of ?UpdateWindow@InteractiveControlDefaultScroller@@AEAAJPEAPEAUtagWND@@@Z @ 0x14026C9C8
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14012F240 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateWindow(
        InteractiveControlDefaultScroller *this,
        struct tagWND **a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  struct tagWND *v5; // rcx

  UserSessionState = W32GetUserSessionState(this, a2);
  v5 = 0LL;
  if ( *(_QWORD *)(UserSessionState + 18888) )
    v5 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(0LL, v4) + 18888) + 120LL);
  *a2 = v5;
  return v5 == 0LL ? 0xC0000008 : 0;
}
