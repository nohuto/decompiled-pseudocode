/*
 * XREFs of XmEffectiveOffset @ 0x1405AE7D0
 * Callers:
 *     <none>
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

__int64 __fastcall XmEffectiveOffset(__int64 a1)
{
  bool v2; // cf
  int v3; // eax
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a1 + 138) != 0;
  v6 = 0;
  *(_DWORD *)(a1 + 120) = v2 ? 3 : 1;
  *(_BYTE *)(a1 + 143) = 1;
  v3 = XmEvaluateAddressSpecifier(a1, (int *)&v6);
  if ( *(_BYTE *)(a1 + 142) )
    longjmp((_JBTYPE *)(a1 + 160), 11);
  v4 = v6 + 6LL;
  *(_DWORD *)(a1 + 108) = v3;
  result = 1LL;
  *(_QWORD *)(a1 + 88) = a1 + 4 * v4;
  return result;
}
