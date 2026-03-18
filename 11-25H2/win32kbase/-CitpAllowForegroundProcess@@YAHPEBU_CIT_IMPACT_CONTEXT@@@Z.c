/*
 * XREFs of ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x140141314
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     CitDisplayPowerChange @ 0x14007F0D4 (CitDisplayPowerChange.c)
 *     CitSessionConnectChange @ 0x140155A50 (CitSessionConnectChange.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpAllowForegroundProcess(const struct _CIT_IMPACT_CONTEXT *a1)
{
  bool result; // al

  result = 0;
  if ( (*((_BYTE *)a1 + 112) & 2) != 0 )
    return *((_DWORD *)a1 + 50) != 0;
  return result;
}
