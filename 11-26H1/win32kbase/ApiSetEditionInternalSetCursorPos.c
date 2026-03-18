/*
 * XREFs of ApiSetEditionInternalSetCursorPos @ 0x1401B7950
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x1401B78FC (-EnsureValidCursorPosition@CCursorClip@@QEAAXXZ.c)
 *     SetInputDelegationModeImpl @ 0x14021C0D0 (SetInputDelegationModeImpl.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x140226AFC (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 * Callees:
 *     EditionInternalSetCursorPos @ 0x14015E0E0 (EditionInternalSetCursorPos.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionInternalSetCursorPos(__int64 a1, unsigned int a2, unsigned int a3))(void)
{
  unsigned int v5; // esi
  __int64 (*result)(void); // rax

  v5 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6616LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionInternalSetCursorPos(v5, a2, a3);
  }
  return result;
}
