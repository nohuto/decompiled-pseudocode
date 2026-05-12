/*
 * XREFs of sub_14012FC74 @ 0x14012FC74
 * Callers:
 *     sub_140130574 @ 0x140130574 (sub_140130574.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14012FC74(__int64 a1, __int64 a2)
{
  unsigned int v3; // r10d
  int v4; // r8d
  __int64 i; // rdx

  v3 = *(_DWORD *)(a2 + 124);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 88) + 136LL) & 2) == 0 )
    --v3;
  v4 = 0;
  if ( !v3 )
    return 0;
  for ( i = 0LL;
        (*(_BYTE *)(*(_QWORD *)(a2 + 32) + i + 60) & 1) == 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 32) + i + 60) & 0x40) != 0;
        i += 128LL )
  {
    if ( ++v4 >= v3 )
      return 0;
  }
  return 1;
}
