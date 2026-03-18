/*
 * XREFs of IsNumber @ 0x14006F33C
 * Callers:
 *     DebugExpr @ 0x14006E99C (DebugExpr.c)
 *     DebugInPort @ 0x14006EB80 (DebugInPort.c)
 *     DebugNotify @ 0x14006EC80 (DebugNotify.c)
 *     DebugOutPort @ 0x14006EE40 (DebugOutPort.c)
 *     DebugRunMethod @ 0x14006EF70 (DebugRunMethod.c)
 * Callees:
 *     _strtoui64_0 @ 0x140055D79 (_strtoui64_0.c)
 */

char __fastcall IsNumber(const char *a1, int a2)
{
  char v3; // di
  char *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  EndPtr = 0LL;
  v3 = 1;
  if ( strtoui64_0(a1, &EndPtr, a2) == -1LL || a1 == EndPtr || !*a1 )
    return 0;
  return v3;
}
