/*
 * XREFs of ApiSetEditionInternalSetCursorPos @ 0x140195AE0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     SetInputDelegationModeImpl @ 0x14018CB3C (SetInputDelegationModeImpl.c)
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x14020E4A4 (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x14021BA20 (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 * Callees:
 *     EditionInternalSetCursorPos @ 0x14011FC54 (EditionInternalSetCursorPos.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionInternalSetCursorPos(__int64 a1, __int64 a2, unsigned int a3))(void)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 (*result)(void); // rax

  v4 = a2;
  v5 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7056LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionInternalSetCursorPos(v5, v4, a3);
  }
  return result;
}
