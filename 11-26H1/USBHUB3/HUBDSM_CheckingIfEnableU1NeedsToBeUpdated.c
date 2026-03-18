/*
 * XREFs of HUBDSM_CheckingIfEnableU1NeedsToBeUpdated @ 0x1400207E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfEnableU1NeedsToBeUpdated(__int64 a1)
{
  __int64 result; // rax
  int v2; // ecx

  result = 4009LL;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 960) + 2224LL) & 0x14;
  if ( v2 != 4 )
    result = 4077LL;
  if ( v2 == 16 )
    return 4013LL;
  return result;
}
