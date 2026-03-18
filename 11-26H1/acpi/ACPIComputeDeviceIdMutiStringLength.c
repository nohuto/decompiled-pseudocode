/*
 * XREFs of ACPIComputeDeviceIdMutiStringLength @ 0x14006AB00
 * Callers:
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x14006AB8C (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1400BBAEC (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIComputeDeviceIdMutiStringLength(_WORD *a1)
{
  _WORD *v1; // rdx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = a1;
  if ( !a1 )
    return 0LL;
  v3 = 0LL;
  while ( *a1 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a1[v4] );
    v3 += (unsigned int)(v4 + 1);
    a1 = &v1[v3];
  }
  v5 = 1LL;
  if ( v3 )
    v5 = v3;
  return v5 + 1;
}
