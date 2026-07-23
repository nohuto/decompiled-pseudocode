/*
 * XREFs of XmGroup8BitOffset @ 0x1405AEB40
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
 *     XmGetOffsetAddress @ 0x1405B1170 (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmGroup8BitOffset(__int64 a1)
{
  bool v2; // cf
  unsigned __int16 *OffsetAddress; // rdi
  unsigned __int8 CodeByte; // al
  bool v5; // zf
  char v6; // dl
  int v7; // ecx
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 138) != 0;
  v9 = 0;
  *(_DWORD *)(a1 + 120) = v2 ? 3 : 1;
  OffsetAddress = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, &v9);
  CodeByte = XmGetCodeByte(a1);
  v5 = *(_BYTE *)(a1 + 142) == 0;
  *(_DWORD *)(a1 + 108) = CodeByte;
  if ( v5 )
  {
    v6 = -4;
    if ( *(_DWORD *)(a1 + 120) != 3 )
      v6 = -2;
    OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(
                                          a1,
                                          *(_DWORD *)(a1 + 128) + ((CodeByte >> 3) & *(_DWORD *)&v6));
  }
  v7 = 31;
  if ( *(_DWORD *)(a1 + 120) != 3 )
    v7 = 15;
  *(_DWORD *)(a1 + 108) &= v7;
  XmSetDestinationValue(a1, OffsetAddress);
  result = 1LL;
  *(_DWORD *)(a1 + 124) += v9 & 3;
  return result;
}
