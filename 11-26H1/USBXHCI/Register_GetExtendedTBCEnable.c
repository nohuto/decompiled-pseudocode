/*
 * XREFs of Register_GetExtendedTBCEnable @ 0x140007F5C
 * Callers:
 *     Register_GetExtendedTBCTRBStatusSupported @ 0x1400083E8 (Register_GetExtendedTBCTRBStatusSupported.c)
 *     Controller_Start @ 0x140008410 (Controller_Start.c)
 * Callees:
 *     <none>
 */

bool __fastcall Register_GetExtendedTBCEnable(__int64 a1)
{
  return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x800LL) == 0 && (*(_BYTE *)(a1 + 108) & 0x50) == 80;
}
