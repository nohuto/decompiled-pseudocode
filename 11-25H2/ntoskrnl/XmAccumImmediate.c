/*
 * XREFs of XmAccumImmediate @ 0x14046AA10
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x14046A78C (XmGetWordImmediate.c)
 *     XmSetDataType @ 0x14046AA70 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x14046AA9C (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x14046AC28 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x1405695F0 (XmGetLongImmediate.c)
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
