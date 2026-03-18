/*
 * XREFs of ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14005F74C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14005E1E4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x14005E600 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D3C1C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14006001C (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 */

__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  unsigned int v5; // ebx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70600);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
  v5 = zzzSetWindowCompositionCloakWorker(a1, v2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v7);
  zzzEndDeferWinEventNotify();
  return v5;
}
