/*
 * XREFs of AuthzBasepGetOperandStringCaseForEvaluation @ 0x140460258
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x14045FD34 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetOperandStringCaseForEvaluation(__int64 a1, char *a2)
{
  char v2; // r8
  __int64 v3; // rax
  char v4; // cl
  unsigned __int8 CurrentIrql; // al
  bool v7; // zf

  v2 = 0;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 56);
LABEL_3:
    v4 = *(_BYTE *)(v3 + 36) & 2;
    goto LABEL_4;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 52) == 1 )
    goto LABEL_3;
  if ( (*(_DWORD *)(v3 + 36) & 2) != 0 || (v7 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 36LL) & 2) == 0, v4 = 0, !v7) )
    v4 = 1;
LABEL_4:
  *a2 = v4;
  CurrentIrql = KeGetCurrentIrql();
  if ( v4 || CurrentIrql >= 2u )
    v2 = 1;
  *a2 = v2;
  return 0LL;
}
