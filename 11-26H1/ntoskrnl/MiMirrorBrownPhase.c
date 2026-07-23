/*
 * XREFs of MiMirrorBrownPhase @ 0x140C13640
 * Callers:
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     MiMirrorBrownPhasePartition @ 0x14044341C (MiMirrorBrownPhasePartition.c)
 *     PsQuitNextPartition @ 0x140619954 (PsQuitNextPartition.c)
 */

__int64 __fastcall MiMirrorBrownPhase(__int64 a1)
{
  int v1; // eax
  ULONG **i; // rcx
  ULONG **NextPartition; // rax
  ULONG **v5; // rbx
  ULONG *v6; // rdx
  int v7; // esi

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 0x800) == 0 && (v1 & 0xC0) == 0 )
  {
    for ( i = 0LL; ; i = v5 )
    {
      NextPartition = (ULONG **)PsGetNextPartition(i);
      v5 = NextPartition;
      if ( !NextPartition )
        break;
      v6 = *NextPartition;
      if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 || v6 == &MiSystemPartition )
      {
        v7 = MiMirrorBrownPhasePartition((__int64 *)a1, (__int64)v6);
        if ( v7 < 0 )
        {
          PsQuitNextPartition(v5);
          return (unsigned int)v7;
        }
        if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 )
        {
          PsQuitNextPartition(v5);
          return 0LL;
        }
      }
    }
  }
  return 0LL;
}
