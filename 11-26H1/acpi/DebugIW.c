/*
 * XREFs of DebugIW @ 0x14006EB60
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x14006EB80 (DebugInPort.c)
 */

__int64 __fastcall DebugIW(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 2LL);
}
