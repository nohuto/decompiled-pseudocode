/*
 * XREFs of XmGetImmediateSourceValue @ 0x1404A1EFC
 * Callers:
 *     XmGroup1Immediate @ 0x1404A15E0 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1405AE7A0 (XmByteImmediate.c)
 *     XmGroup3General @ 0x1405AEA40 (XmGroup3General.c)
 *     XmImulImmediate @ 0x1405AEC90 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1405AEDE0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1405AEFE0 (XmPushImmediate.c)
 * Callees:
 *     XmGetWordImmediate @ 0x1404A1CA0 (XmGetWordImmediate.c)
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x140533904 (XmGetLongImmediate.c)
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
