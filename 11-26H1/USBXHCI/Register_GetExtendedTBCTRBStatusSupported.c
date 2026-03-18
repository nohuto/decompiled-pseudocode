/*
 * XREFs of Register_GetExtendedTBCTRBStatusSupported @ 0x1400083E8
 * Callers:
 *     Controller_Start @ 0x140008410 (Controller_Start.c)
 * Callees:
 *     Register_GetExtendedTBCEnable @ 0x140007F5C (Register_GetExtendedTBCEnable.c)
 */

bool __fastcall Register_GetExtendedTBCTRBStatusSupported(__int64 a1)
{
  __int64 v1; // rcx

  return Register_GetExtendedTBCEnable(a1) && (*(_DWORD *)(v1 + 108) & 0x80) != 0;
}
