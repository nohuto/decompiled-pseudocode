/*
 * XREFs of IommuUnmapIdentityRange @ 0x1405A2240
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainUnmapIdentityRange @ 0x140474774 (HalpIommuDomainUnmapIdentityRange.c)
 *     IommupValidateMdl @ 0x14050B374 (IommupValidateMdl.c)
 */

__int64 __fastcall IommuUnmapIdentityRange(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // r9
  ULONG_PTR v5; // r10

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == 1 )
    return 0LL;
  if ( v2 )
    return 3221225711LL;
  if ( IommupValidateMdl(a2) )
    return HalpIommuDomainUnmapIdentityRange(
             v5,
             v4 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(v4 + 44) >> 12),
             (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12);
  return 3221225712LL;
}
