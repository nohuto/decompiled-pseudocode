/*
 * XREFs of XmAccumImmediate @ 0x1404A1F50
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x1404A1CA0 (XmGetWordImmediate.c)
 *     XmSetDataType @ 0x1404A1FB0 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x140533904 (XmGetLongImmediate.c)
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
