/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x14041D914
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x140530D10 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 */

__int64 __fastcall RtlpControlFlowGuardEnforced(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ((unsigned int)VslGetNestedPageProtectionFlags(0LL, a2, a3, a4) >> 7) & 1;
}
