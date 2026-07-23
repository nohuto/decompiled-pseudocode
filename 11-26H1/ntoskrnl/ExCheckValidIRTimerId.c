/*
 * XREFs of ExCheckValidIRTimerId @ 0x1404F2A78
 * Callers:
 *     ExpCheckIRTimerAccess @ 0x140ABF674 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x14u && a2 < (unsigned __int8)byte_140E091C0[24 * a1];
}
