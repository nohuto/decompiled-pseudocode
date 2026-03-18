/*
 * XREFs of HUBDSM_CheckingIfMSOSContainerIdDescriptorIsSupported @ 0x140020BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfMSOSContainerIdDescriptorIsSupported(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v3; // ax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2472) & 1) != 0 )
    return 4061LL;
  v3 = *(_WORD *)(v1 + 1998);
  if ( v3 < 0x200u && v3 >= 0x100u || (*(_DWORD *)(v1 + 1640) & 0x80u) != 0 || (*(_DWORD *)(v1 + 1652) & 0x20) != 0 )
    return (*(_BYTE *)(v1 + 1652) & 2) != 0 ? 4089 : 4061;
  else
    return 4089LL;
}
