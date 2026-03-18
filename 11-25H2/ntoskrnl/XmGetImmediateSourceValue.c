/*
 * XREFs of XmGetImmediateSourceValue @ 0x14046A9BC
 * Callers:
 *     XmGroup1Immediate @ 0x14046A0D0 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x140571B60 (XmByteImmediate.c)
 *     XmGroup3General @ 0x140571E00 (XmGroup3General.c)
 *     XmImulImmediate @ 0x140572050 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1405721F0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1405723F0 (XmPushImmediate.c)
 * Callees:
 *     XmGetWordImmediate @ 0x14046A78C (XmGetWordImmediate.c)
 *     XmGetCodeByte @ 0x14046AC28 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x1405695F0 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmGetImmediateSourceValue(__int64 a1, int a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  if ( !v2 )
    return (unsigned __int8)XmGetCodeByte(a1);
  if ( v2 == 1 )
  {
    if ( a2 )
      LOWORD(result) = (char)XmGetCodeByte(a1);
    else
      LOWORD(result) = XmGetWordImmediate(a1);
    return (unsigned __int16)result;
  }
  else if ( a2 )
  {
    return (unsigned int)(char)XmGetCodeByte(a1);
  }
  else
  {
    return XmGetLongImmediate(a1);
  }
}
