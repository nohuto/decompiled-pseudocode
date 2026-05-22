/*
 * XREFs of ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x1800C6264
 * Callers:
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180096DD4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 * Callees:
 *     ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x18007C0A0 (-ResetState@MPCButtonHoldHelper@@QEAAXXZ.c)
 */

void __fastcall MPCSlateDeadzoneHelper::ResetState(MPCButtonHoldHelper **this)
{
  __int64 v1; // rdx

  MPCButtonHoldHelper::ResetState(this[2]);
  *(_WORD *)(v1 + 12) = 0;
  *(_BYTE *)(v1 + 14) = 0;
  *(_QWORD *)(v1 + 4) = 0LL;
}
