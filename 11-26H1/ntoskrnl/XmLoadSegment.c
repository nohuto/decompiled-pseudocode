/*
 * XREFs of XmLoadSegment @ 0x1405AED10
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 *     XmGetOffsetAddress @ 0x1405B1170 (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmLoadSegment(__int64 a1)
{
  int v2; // esi
  bool v3; // cf
  __int64 result; // rax
  int v5; // ebx
  int v6; // edx
  __int64 v7; // rcx
  unsigned __int16 *OffsetAddress; // rax
  __int64 v9; // rdx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 81);
  v3 = *(_BYTE *)(a1 + 138) != 0;
  v10 = 0;
  *(_DWORD *)(a1 + 120) = v3 ? 3 : 1;
  result = XmEvaluateAddressSpecifier(a1, (int *)&v10);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 142) )
      longjmp((_JBTYPE *)(a1 + 160), 11);
    XmSetSourceValue(a1, (unsigned __int16 *)result);
    v5 = *(_DWORD *)(a1 + 120);
    v6 = *(_DWORD *)(a1 + 128) + 1;
    *(_DWORD *)(a1 + 120) = 1;
    OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(v7, (unsigned int)(v5 + v6));
    XmSetDestinationValue(a1, OffsetAddress);
    *(_WORD *)(a1 + 2LL * (unsigned int)(v2 - 6) + 56) = *(_WORD *)(a1 + 104);
    result = 1LL;
    v9 = v10 + 6LL;
    *(_DWORD *)(a1 + 120) = v5;
    *(_QWORD *)(a1 + 88) = a1 + 4 * v9;
  }
  return result;
}
