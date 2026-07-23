/*
 * XREFs of XmAccumRegister @ 0x1405AE6F0
 * Callers:
 *     <none>
 * Callees:
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 */

__int64 __fastcall XmAccumRegister(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 112) & 7;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 24 + 4 * v1));
  XmSetDestinationValue(v2, (unsigned __int16 *)(v2 + 24));
  return 1LL;
}
