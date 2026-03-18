/*
 * XREFs of XmAccumImmediate @ 0x1404A88C0
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x1404A8610 (XmGetWordImmediate.c)
 *     XmSetDataType @ 0x1404A8920 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1404A8950 (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x1404A8AE0 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x140531404 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmAccumImmediate(__int64 a1)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // r8d

  XmSetDataType();
  v2 = *(_DWORD *)(a1 + 120);
  if ( v2 )
  {
    if ( v2 == 1 )
      XmGetWordImmediate(a1);
    else
      XmGetLongImmediate(a1);
  }
  else
  {
    XmGetCodeByte(a1);
  }
  XmSetDestinationValue(a1, a1 + 24);
  result = 1LL;
  *(_DWORD *)(a1 + 108) = v4;
  return result;
}
