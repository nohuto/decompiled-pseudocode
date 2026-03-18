/*
 * XREFs of HUBDSM_CheckingIfAltEnumCmdCached @ 0x140020200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfAltEnumCmdCached(__int64 a1)
{
  __int64 v1; // rdx
  __int16 v2; // ax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2476) & 5) != 4 )
    return 4061LL;
  _InterlockedOr((volatile signed __int32 *)(v1 + 2476), 2u);
  v2 = *(_WORD *)(v1 + 2012);
  *(_OWORD *)(v1 + 2544) = *(_OWORD *)(v1 + 1996);
  *(_WORD *)(v1 + 2560) = v2;
  *(_DWORD *)(v1 + 1652) = 0;
  *(_QWORD *)(v1 + 1640) = 0LL;
  return 4089LL;
}
