/*
 * XREFs of ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x1401B78FC
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14008AE3C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14018DCD0 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     DisableDelegation @ 0x14021B3F0 (DisableDelegation.c)
 * Callees:
 *     ApiSetEditionInternalSetCursorPos @ 0x1401B7950 (ApiSetEditionInternalSetCursorPos.c)
 */

void __fastcall CCursorClip::EnsureValidCursorPosition(CCursorClip *this, int a2, int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // r8d
  __int64 UserSessionState; // rax

  v3 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19904);
  v4 = *(_DWORD *)(v3 + 4964);
  UserSessionState = W32GetUserSessionState(v3, v5, v6);
  ApiSetEditionInternalSetCursorPos(*(unsigned int *)(*(_QWORD *)(UserSessionState + 19904) + 4960LL), v4, 2LL);
}
