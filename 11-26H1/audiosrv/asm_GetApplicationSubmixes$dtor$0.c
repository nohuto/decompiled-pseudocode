/*
 * XREFs of asm_GetApplicationSubmixes$dtor$0 @ 0x180163A1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall asm_GetApplicationSubmixes_dtor_0(__int64 a1, __int64 a2)
{
  return CWatchdogTimer<1>::~CWatchdogTimer<1>(a2 + 64);
}
