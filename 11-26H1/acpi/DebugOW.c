/*
 * XREFs of DebugOW @ 0x14006EE20
 * Callers:
 *     <none>
 * Callees:
 *     DebugOutPort @ 0x14006EE40 (DebugOutPort.c)
 */

__int64 __fastcall DebugOW(__int64 a1, __int64 a2)
{
  return DebugOutPort(a2, 2LL);
}
