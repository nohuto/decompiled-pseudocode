/*
 * XREFs of XmPushImmediate @ 0x1405AEFE0
 * Callers:
 *     <none>
 * Callees:
 *     XmGetImmediateSourceValue @ 0x1404A1EFC (XmGetImmediateSourceValue.c)
 */

__int64 __fastcall XmPushImmediate(__int64 a1)
{
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, *(_DWORD *)(a1 + 112) & 2);
  return 1LL;
}
