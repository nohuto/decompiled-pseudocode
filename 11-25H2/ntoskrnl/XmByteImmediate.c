/*
 * XREFs of XmByteImmediate @ 0x140571B60
 * Callers:
 *     <none>
 * Callees:
 *     XmGetImmediateSourceValue @ 0x14046A9BC (XmGetImmediateSourceValue.c)
 */

__int64 __fastcall XmByteImmediate(__int64 a1)
{
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, 0);
  return 1LL;
}
