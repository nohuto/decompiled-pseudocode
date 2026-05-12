/*
 * XREFs of RaidValidatePerfSets @ 0x140081298
 * Callers:
 *     RaidRegisterPerfStates @ 0x140051DCC (RaidRegisterPerfStates.c)
 *     NvmeRegisterPerfStates @ 0x14012AEB0 (NvmeRegisterPerfStates.c)
 * Callees:
 *     RaidGetStorPoFxPerfState @ 0x140079D94 (RaidGetStorPoFxPerfState.c)
 */

char __fastcall RaidValidatePerfSets(__int64 a1, unsigned int a2)
{
  __int64 i; // r10
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // edi
  unsigned int j; // r11d
  _DWORD *StorPoFxPerfState; // rax
  int v10; // r11d

  if ( a2 >= 4 )
    return 0;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    v5 = a1 + 40 * i;
    if ( !v5 || *(_DWORD *)v5 != 1 || *(_DWORD *)(v5 + 4) < 0x28u )
      return 0;
    v6 = *(_DWORD *)(v5 + 20);
    if ( v6 )
    {
      if ( v6 != 1 || *(_QWORD *)(v5 + 24) > *(_QWORD *)(v5 + 32) )
        return 0;
    }
    else
    {
      v7 = *(_DWORD *)(v5 + 24);
      if ( v7 - 1 > 7 )
        return 0;
      for ( j = 0; j < v7; j = v10 + 1 )
      {
        StorPoFxPerfState = (_DWORD *)RaidGetStorPoFxPerfState((_DWORD *)v5, j);
        if ( *StorPoFxPerfState != 1 || StorPoFxPerfState[1] < 0x18u )
          return 0;
      }
    }
  }
  return 1;
}
