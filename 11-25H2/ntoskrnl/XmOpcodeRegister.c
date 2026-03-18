/*
 * XREFs of XmOpcodeRegister @ 0x140469E70
 * Callers:
 *     <none>
 * Callees:
 *     XmSetDestinationValue @ 0x14046AA9C (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x14046AD58 (XmSetSourceValue.c)
 */

__int64 __fastcall XmOpcodeRegister(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 112) & 7;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = a1 + 24 + 4 * v1;
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v2);
  else
    XmSetDestinationValue(a1, v2);
  return 1LL;
}
