/*
 * XREFs of XmImmediateEnter @ 0x1405AEBF0
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x1404A1CA0 (XmGetWordImmediate.c)
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
 */

__int64 __fastcall XmImmediateEnter(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 108) = (unsigned __int16)XmGetWordImmediate(a1);
  *(_DWORD *)(a1 + 104) = XmGetCodeByte(a1) & 0x1F;
  result = 1LL;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  return result;
}
