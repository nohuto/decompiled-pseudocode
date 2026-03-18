/*
 * XREFs of IrqArbpQueryConflictIsa @ 0x1400BE8CC
 * Callers:
 *     IrqArbQueryConflict @ 0x1400BE220 (IrqArbQueryConflict.c)
 * Callees:
 *     memset @ 0x140072740 (memset.c)
 *     ArbQueryConflict @ 0x1400BF550 (ArbQueryConflict.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1400C379C (IrqArbpPrepareForTestOrConflict.c)
 *     LinkNodeClearPossibleData @ 0x1400C42AC (LinkNodeClearPossibleData.c)
 *     ProcessorpClearData @ 0x1400C42E8 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1400C4400 (IcClearPossibleData.c)
 */

__int64 __fastcall IrqArbpQueryConflictIsa(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int Conflict; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v7[12]; // [rsp+30h] [rbp-9h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[3] = a2[1];
  v7[4] = *a2;
  v7[0] = v6;
  v7[1] = v6;
  v6[0] = v7;
  v6[1] = v7;
  LODWORD(v7[2]) = 1;
  result = IrqArbpPrepareForTestOrConflict(a1, v6);
  if ( (int)result >= 0 )
  {
    Conflict = ArbQueryConflict(a1, a2);
    ProcessorpClearData(1LL);
    IcClearPossibleData();
    LinkNodeClearPossibleData();
    return Conflict;
  }
  return result;
}
