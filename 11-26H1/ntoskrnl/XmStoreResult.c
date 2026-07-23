/*
 * XREFs of XmStoreResult @ 0x1404A24CC
 * Callers:
 *     XmShlOp @ 0x1404A0E60 (XmShlOp.c)
 *     XmBsfOp @ 0x1404A1000 (XmBsfOp.c)
 *     XmPopOp @ 0x1404A1040 (XmPopOp.c)
 *     XmSubOperands @ 0x1404A1170 (XmSubOperands.c)
 *     XmMovOp @ 0x1404A13C0 (XmMovOp.c)
 *     XmStosOp @ 0x1404A1400 (XmStosOp.c)
 *     XmAddOperands @ 0x1404A1780 (XmAddOperands.c)
 *     XmPushStack @ 0x1404A19DC (XmPushStack.c)
 *     XmInOp @ 0x1404A22C0 (XmInOp.c)
 *     XmLoopOp @ 0x1404A23C0 (XmLoopOp.c)
 *     XmSetLogicalResult @ 0x1404A2430 (XmSetLogicalResult.c)
 *     XmNotOp @ 0x1405AF230 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1405AF2D0 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1405AF390 (XmXaddOp.c)
 *     XmRclOp @ 0x1405AF620 (XmRclOp.c)
 *     XmRcrOp @ 0x1405AF6F0 (XmRcrOp.c)
 *     XmRolOp @ 0x1405AF790 (XmRolOp.c)
 *     XmRorOp @ 0x1405AF840 (XmRorOp.c)
 *     XmSarOp @ 0x1405AF8D0 (XmSarOp.c)
 *     XmShldOp @ 0x1405AF9C0 (XmShldOp.c)
 *     XmShrOp @ 0x1405AFB10 (XmShrOp.c)
 *     XmShrdOp @ 0x1405AFBF0 (XmShrdOp.c)
 *     XmLahfOp @ 0x1405AFE80 (XmLahfOp.c)
 *     XmInsOp @ 0x1405AFF00 (XmInsOp.c)
 *     XmLodsOp @ 0x1405B04F0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1405B0570 (XmMovsOp.c)
 *     XmBsrOp @ 0x1405B06A0 (XmBsrOp.c)
 *     XmBtcOp @ 0x1405B0720 (XmBtcOp.c)
 *     XmBtrOp @ 0x1405B0770 (XmBtrOp.c)
 *     XmBtsOp @ 0x1405B07C0 (XmBtsOp.c)
 *     XmCbwOp @ 0x1405B0810 (XmCbwOp.c)
 *     XmCwdOp @ 0x1405B0850 (XmCwdOp.c)
 *     XmXchgOp @ 0x1405B08A0 (XmXchgOp.c)
 *     XmBswapOp @ 0x1405B0990 (XmBswapOp.c)
 *     XmSmswOp @ 0x1405B0A00 (XmSmswOp.c)
 *     XmImulOp @ 0x1405B0A20 (XmImulOp.c)
 *     XmImulxOp @ 0x1405B0AD0 (XmImulxOp.c)
 *     XmMulOp @ 0x1405B0BA0 (XmMulOp.c)
 *     XmDivOp @ 0x1405B0CA0 (XmDivOp.c)
 *     XmIdivOp @ 0x1405B0D80 (XmIdivOp.c)
 *     XmSxxOp @ 0x1405B0E90 (XmSxxOp.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall XmStoreResult(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  result = *(_WORD **)(a1 + 88);
  if ( v2 )
  {
    if ( v2 == 1 )
      *result = a2;
    else
      *(_DWORD *)result = a2;
  }
  else
  {
    *(_BYTE *)result = a2;
  }
  return result;
}
