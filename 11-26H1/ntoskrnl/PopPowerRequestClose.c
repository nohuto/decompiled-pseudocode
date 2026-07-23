/*
 * XREFs of PopPowerRequestClose @ 0x140B28FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestHandleClose @ 0x14049FCF8 (PopPowerRequestHandleClose.c)
 */

void __fastcall PopPowerRequestClose(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
    PopPowerRequestHandleClose(a2);
}
