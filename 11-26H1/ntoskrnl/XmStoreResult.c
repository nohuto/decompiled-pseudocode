/*
 * XREFs of XmStoreResult @ 0x1404A8E3C
 * Callers:
 *     XmShlOp @ 0x1404A77D0 (XmShlOp.c)
 *     XmBsfOp @ 0x1404A7970 (XmBsfOp.c)
 *     XmPopOp @ 0x1404A79B0 (XmPopOp.c)
 *     XmSubOperands @ 0x1404A7AE0 (XmSubOperands.c)
 *     XmMovOp @ 0x1404A7D30 (XmMovOp.c)
 *     XmStosOp @ 0x1404A7D70 (XmStosOp.c)
 *     XmAddOperands @ 0x1404A80F0 (XmAddOperands.c)
 *     XmPushStack @ 0x1404A834C (XmPushStack.c)
 *     XmInOp @ 0x1404A8C30 (XmInOp.c)
 *     XmLoopOp @ 0x1404A8D30 (XmLoopOp.c)
 *     XmSetLogicalResult @ 0x1404A8DA0 (XmSetLogicalResult.c)
 *     XmNotOp @ 0x1405ACA20 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1405ACAC0 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1405ACB80 (XmXaddOp.c)
 *     XmRclOp @ 0x1405ACE10 (XmRclOp.c)
 *     XmRcrOp @ 0x1405ACEE0 (XmRcrOp.c)
 *     XmRolOp @ 0x1405ACF80 (XmRolOp.c)
 *     XmRorOp @ 0x1405AD030 (XmRorOp.c)
 *     XmSarOp @ 0x1405AD0C0 (XmSarOp.c)
 *     XmShldOp @ 0x1405AD1B0 (XmShldOp.c)
 *     XmShrOp @ 0x1405AD300 (XmShrOp.c)
 *     XmShrdOp @ 0x1405AD3E0 (XmShrdOp.c)
 *     XmLahfOp @ 0x1405AD670 (XmLahfOp.c)
 *     XmInsOp @ 0x1405AD6F0 (XmInsOp.c)
 *     XmLodsOp @ 0x1405ADCE0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1405ADD60 (XmMovsOp.c)
 *     XmBsrOp @ 0x1405ADE90 (XmBsrOp.c)
 *     XmBtcOp @ 0x1405ADF10 (XmBtcOp.c)
 *     XmBtrOp @ 0x1405ADF60 (XmBtrOp.c)
 *     XmBtsOp @ 0x1405ADFB0 (XmBtsOp.c)
 *     XmCbwOp @ 0x1405AE000 (XmCbwOp.c)
 *     XmCwdOp @ 0x1405AE040 (XmCwdOp.c)
 *     XmXchgOp @ 0x1405AE090 (XmXchgOp.c)
 *     XmBswapOp @ 0x1405AE180 (XmBswapOp.c)
 *     XmSmswOp @ 0x1405AE1F0 (XmSmswOp.c)
 *     XmImulOp @ 0x1405AE210 (XmImulOp.c)
 *     XmImulxOp @ 0x1405AE2C0 (XmImulxOp.c)
 *     XmMulOp @ 0x1405AE390 (XmMulOp.c)
 *     XmDivOp @ 0x1405AE490 (XmDivOp.c)
 *     XmIdivOp @ 0x1405AE570 (XmIdivOp.c)
 *     XmSxxOp @ 0x1405AE680 (XmSxxOp.c)
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
