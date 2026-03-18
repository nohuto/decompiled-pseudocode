/*
 * XREFs of PopPowerRequestClose @ 0x140B26D80
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestHandleClose @ 0x1404A6668 (PopPowerRequestHandleClose.c)
 */

void __fastcall PopPowerRequestClose(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
    PopPowerRequestHandleClose(a2);
}
