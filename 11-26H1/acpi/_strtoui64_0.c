/*
 * XREFs of _strtoui64_0 @ 0x140055D79
 * Callers:
 *     ConvertToInteger @ 0x140015028 (ConvertToInteger.c)
 *     DebugExpr @ 0x14006E99C (DebugExpr.c)
 *     DebugInPort @ 0x14006EB80 (DebugInPort.c)
 *     DebugOutPort @ 0x14006EE40 (DebugOutPort.c)
 *     DebugRunMethod @ 0x14006EF70 (DebugRunMethod.c)
 *     IsNumber @ 0x14006F33C (IsNumber.c)
 *     DbgParseOneArg @ 0x140071754 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
