/*
 * XREFs of CmpSortedValueEnumStackValueCompareFunction @ 0x140A50360
 * Callers:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140A500CC (CmpSortedValueEnumStackAdvanceInternal.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     CmpCompareCompressedName @ 0x1409DFA40 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x140A50420 (CmpCompareTwoCompressedNames.c)
 */

LONG __fastcall CmpSortedValueEnumStackValueCompareFunction(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int8 *v6; // r11
  __int16 v7; // r9
  _BYTE *v8; // rcx
  __int16 v9; // r9
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  _WORD v12[2]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h]
  unsigned __int8 *v14; // [rsp+48h] [rbp-10h]

  v2 = *a1;
  v3 = *a2;
  v11 = 0LL;
  v4 = *(unsigned __int16 *)(v2 + 2);
  v5 = *(unsigned __int16 *)(v3 + 2);
  v6 = (unsigned __int8 *)(v3 + 20);
  v7 = *(_WORD *)(v2 + 16);
  v8 = (_BYTE *)(v3 + 16);
  *((_QWORD *)&v11 + 1) = v2 + 20;
  LOWORD(v11) = v4;
  WORD1(v11) = v4;
  v13 = 0;
  v14 = v6;
  v12[0] = v5;
  v12[1] = v5;
  v9 = v7 & 1;
  if ( v9 )
  {
    if ( (*v8 & 1) != 0 )
      return CmpCompareTwoCompressedNames(v2 + 20, v4, v6, (unsigned int)v5);
  }
  else if ( (*v8 & 1) != 0 )
  {
    return CmpCompareCompressedName((__int64)&v11, v6, v5, 0);
  }
  if ( v9 )
    return -(int)CmpCompareCompressedName((__int64)v12, (unsigned __int8 *)(v2 + 20), v4, 0);
  else
    return RtlCompareUnicodeStrings((PCWCH)(v2 + 20), v4 >> 1, (PCWCH)v6, v5 >> 1, 1u);
}
