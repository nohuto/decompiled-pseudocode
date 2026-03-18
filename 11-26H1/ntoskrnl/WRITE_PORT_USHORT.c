/*
 * XREFs of WRITE_PORT_USHORT @ 0x1404ABE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_PORT_USHORT(PUSHORT Port, USHORT Value)
{
  __outword((unsigned __int16)Port, Value);
}
