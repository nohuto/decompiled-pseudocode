/*
 * XREFs of HUBDSM_CheckingIfEnableU2NeedsToBeUpdated @ 0x140020820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfEnableU2NeedsToBeUpdated(__int64 a1)
{
  __int64 result; // rax
  int v2; // ecx

  result = 4009LL;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 960) + 2224LL) & 0x28;
  if ( v2 != 8 )
    result = 4077LL;
  if ( v2 == 32 )
    return 4013LL;
  return result;
}
