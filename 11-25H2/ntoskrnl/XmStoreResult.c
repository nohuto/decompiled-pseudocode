/*
 * XREFs of XmStoreResult @ 0x14046AFAC
 * Callers:
 *     XmShlOp @ 0x140469970 (XmShlOp.c)
 *     XmPopOp @ 0x140469B10 (XmPopOp.c)
 *     XmBsfOp @ 0x140469B90 (XmBsfOp.c)
 *     XmSubOperands @ 0x140469C70 (XmSubOperands.c)
 *     XmMovOp @ 0x140469EC0 (XmMovOp.c)
 *     XmStosOp @ 0x140469F00 (XmStosOp.c)
 *     XmAddOperands @ 0x14046A450 (XmAddOperands.c)
 *     XmPushStack @ 0x14046A638 (XmPushStack.c)
 *     XmInOp @ 0x14046ADA0 (XmInOp.c)
 *     XmLoopOp @ 0x14046AEA0 (XmLoopOp.c)
 *     XmSetLogicalResult @ 0x14046AF10 (XmSetLogicalResult.c)
 *     XmNotOp @ 0x140572620 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1405726C0 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x140572780 (XmXaddOp.c)
 *     XmRclOp @ 0x140572A20 (XmRclOp.c)
 *     XmRcrOp @ 0x140572AF0 (XmRcrOp.c)
 *     XmRolOp @ 0x140572B90 (XmRolOp.c)
 *     XmRorOp @ 0x140572C40 (XmRorOp.c)
 *     XmSarOp @ 0x140572CD0 (XmSarOp.c)
 *     XmShldOp @ 0x140572DC0 (XmShldOp.c)
 *     XmShrOp @ 0x140572F10 (XmShrOp.c)
 *     XmShrdOp @ 0x140572FF0 (XmShrdOp.c)
 *     XmLahfOp @ 0x140573280 (XmLahfOp.c)
 *     XmInsOp @ 0x140573300 (XmInsOp.c)
 *     XmLodsOp @ 0x140573900 (XmLodsOp.c)
 *     XmMovsOp @ 0x140573980 (XmMovsOp.c)
 *     XmBsrOp @ 0x140573AB0 (XmBsrOp.c)
 *     XmBtcOp @ 0x140573B30 (XmBtcOp.c)
 *     XmBtrOp @ 0x140573B80 (XmBtrOp.c)
 *     XmBtsOp @ 0x140573BD0 (XmBtsOp.c)
 *     XmCbwOp @ 0x140573C20 (XmCbwOp.c)
 *     XmCwdOp @ 0x140573C60 (XmCwdOp.c)
 *     XmXchgOp @ 0x140573CB0 (XmXchgOp.c)
 *     XmBswapOp @ 0x140573DA0 (XmBswapOp.c)
 *     XmSmswOp @ 0x140573E10 (XmSmswOp.c)
 *     XmImulOp @ 0x140573E30 (XmImulOp.c)
 *     XmImulxOp @ 0x140573EE0 (XmImulxOp.c)
 *     XmMulOp @ 0x140573FB0 (XmMulOp.c)
 *     XmDivOp @ 0x1405740B0 (XmDivOp.c)
 *     XmIdivOp @ 0x140574180 (XmIdivOp.c)
 *     XmSxxOp @ 0x140574290 (XmSxxOp.c)
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
