/*
 * XREFs of ?TargetInfoCompareID@@YAHPEBU_TargetInfo@@0_J@Z @ 0x1806753B0
 * Callers:
 *     ?Search@?$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z @ 0x18067531C (-Search@-$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TargetInfoCompareID(const struct _TargetInfo *a1, const struct _TargetInfo *a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    a3 = *(_DWORD *)a1;
  if ( a3 != *(_DWORD *)a2 )
    return a3 < *(_DWORD *)a2 ? -1 : 1;
  return result;
}
