/*
 * XREFs of XmSegmentOffset @ 0x140572470
 * Callers:
 *     <none>
 * Callees:
 *     XmGetWordImmediate @ 0x14046A78C (XmGetWordImmediate.c)
 *     XmSetDataType @ 0x14046AA70 (XmSetDataType.c)
 *     XmSetSourceValue @ 0x14046AD58 (XmSetSourceValue.c)
 *     XmGetLongImmediate @ 0x1405695F0 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x140574594 (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmSegmentOffset(__int64 a1)
{
  unsigned int LongImmediate; // eax
  unsigned __int16 *OffsetAddress; // rax
  __int64 v4; // rdx
  unsigned __int16 *v5; // r8

  XmSetDataType(a1);
  if ( *(_BYTE *)(a1 + 137) )
    LongImmediate = XmGetLongImmediate(a1);
  else
    LongImmediate = (unsigned __int16)XmGetWordImmediate(a1);
  OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(a1, LongImmediate);
  v4 = a1 + 24;
  v5 = OffsetAddress;
  if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
  {
    OffsetAddress = (unsigned __int16 *)(a1 + 24);
    v4 = (__int64)v5;
  }
  *(_QWORD *)(a1 + 88) = v4;
  XmSetSourceValue(a1, OffsetAddress);
  return 1LL;
}
