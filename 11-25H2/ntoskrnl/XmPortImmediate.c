/*
 * XREFs of XmPortImmediate @ 0x1405723B0
 * Callers:
 *     <none>
 * Callees:
 *     XmSetDataType @ 0x14046AA70 (XmSetDataType.c)
 *     XmGetCodeByte @ 0x14046AC28 (XmGetCodeByte.c)
 */

__int64 __fastcall XmPortImmediate(__int64 a1)
{
  unsigned __int8 CodeByte; // al
  unsigned int v3; // r8d

  CodeByte = XmGetCodeByte(a1);
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 108) = CodeByte;
  XmSetDataType(a1);
  return v3;
}
