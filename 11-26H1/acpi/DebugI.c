/*
 * XREFs of DebugI @ 0x14006EB20
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x14006EB80 (DebugInPort.c)
 */

__int64 __fastcall DebugI(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 1LL);
}
