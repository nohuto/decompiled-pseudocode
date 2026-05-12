/*
 * XREFs of sub_14012B3F0 @ 0x14012B3F0
 * Callers:
 *     sub_14012B334 @ 0x14012B334 (sub_14012B334.c)
 *     sub_14012B468 @ 0x14012B468 (sub_14012B468.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14012B3F0(__int64 a1)
{
  char v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 *v4; // rcx
  _DWORD *v5; // r9
  __int64 v6; // rcx

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
  if ( (*(_DWORD *)(v2 + 176) & 4) != 0 )
  {
    v3 = *(unsigned __int8 *)(v2 + 183);
    v4 = *(__int64 **)(v2 + 8);
    if ( *(_BYTE *)(v2 + 182) != (_BYTE)v3 && !_interlockedbittestandset((volatile signed __int32 *)(v2 + 212), 0) )
    {
      v5 = v4 + 12;
      *((_DWORD *)v4 + 26) = v3;
      v6 = *v4;
      *v5 = 0;
      PoFxIssueComponentPerfStateChange(v6, 0LL, 0LL, v5, v3);
      return 1;
    }
  }
  return v1;
}
