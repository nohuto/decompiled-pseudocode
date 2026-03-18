/*
 * XREFs of PhkFirstValid @ 0x1400C5E60
 * Callers:
 *     xxxCallMouseHook @ 0x1400C4174 (xxxCallMouseHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1400C92D4 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     xxxPointerCallHook @ 0x140138DC4 (xxxPointerCallHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     EditionLLMouseButtonHook @ 0x1401B3BF0 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401B3E50 (EditionLLMouseWheelHook.c)
 *     EditionKeyEventLLHook @ 0x14024FFF0 (EditionKeyEventLLHook.c)
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x140286AA0 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 * Callees:
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (int)a2;
  v4 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42312);
  if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v4) != 1 && !ExIsResourceAcquiredSharedLite(v4)) )
  {
    __int2c();
  }
  v7 = *(_QWORD *)(a1 + 8 * v2 + 968);
  if ( (v7 || (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 504) + 8 * v2 + 48)) != 0) && (*(_DWORD *)(v7 + 64) & 0x80u) != 0 )
    return PhkNextValid(v7);
  return v7;
}
