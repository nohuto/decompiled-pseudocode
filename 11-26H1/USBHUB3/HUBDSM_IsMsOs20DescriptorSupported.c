/*
 * XREFs of HUBDSM_IsMsOs20DescriptorSupported @ 0x1400231A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_IsMsOs20DescriptorSupported(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2472) & 1) == 0 )
    return 4061LL;
  result = 4089LL;
  if ( !*(_WORD *)(v1 + 2492) )
    return 4061LL;
  return result;
}
