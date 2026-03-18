/*
 * XREFs of ?RestoreMouseCursors@@YAXXZ @ 0x14028960C
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 * Callees:
 *     <none>
 */

void __fastcall RestoreMouseCursors(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 UserSessionState; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36344);
  _InterlockedOr((volatile signed __int32 *)(v2 + 100), 1u);
  UserSessionState = W32GetUserSessionState(v2, v3);
  KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(UserSessionState + 36344) + 72LL), 1, 0);
}
