/*
 * XREFs of XmGetImmediateSourceValue @ 0x1404A886C
 * Callers:
 *     XmGroup1Immediate @ 0x1404A7F50 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1405ABF90 (XmByteImmediate.c)
 *     XmGroup3General @ 0x1405AC230 (XmGroup3General.c)
 *     XmImulImmediate @ 0x1405AC480 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1405AC5D0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1405AC7D0 (XmPushImmediate.c)
 * Callees:
 *     XmGetWordImmediate @ 0x1404A8610 (XmGetWordImmediate.c)
 *     XmGetCodeByte @ 0x1404A8AE0 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x140531404 (XmGetLongImmediate.c)
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
