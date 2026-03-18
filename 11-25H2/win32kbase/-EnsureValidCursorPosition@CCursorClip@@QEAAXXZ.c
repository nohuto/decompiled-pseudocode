/*
 * XREFs of ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x14020E4A4
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14006665C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14015C72C (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     DisableDelegation @ 0x14018C880 (DisableDelegation.c)
 * Callees:
 *     ApiSetEditionInternalSetCursorPos @ 0x140195AE0 (ApiSetEditionInternalSetCursorPos.c)
 */

void __fastcall CCursorClip::EnsureValidCursorPosition(CCursorClip *this, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 UserSessionState; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19872);
  v3 = *(_DWORD *)(v2 + 4964);
  UserSessionState = W32GetUserSessionState(v2, v4);
  ApiSetEditionInternalSetCursorPos(*(unsigned int *)(*(_QWORD *)(UserSessionState + 19872) + 4960LL), v3, 2u);
}
