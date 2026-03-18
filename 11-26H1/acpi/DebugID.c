/*
 * XREFs of DebugID @ 0x14006EB40
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x14006EB80 (DebugInPort.c)
 */

__int64 __fastcall DebugID(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 4LL);
}
