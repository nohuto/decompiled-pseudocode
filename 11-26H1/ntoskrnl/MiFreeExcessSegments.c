/*
 * XREFs of MiFreeExcessSegments @ 0x14046E490
 * Callers:
 *     MiChargeCommitSlow @ 0x1402D6E68 (MiChargeCommitSlow.c)
 *     MmResourcesAvailable @ 0x1404795B4 (MmResourcesAvailable.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x14046E4F8 (MiShouldTrimUnusedSegments.c)
 */

int __fastcall MiFreeExcessSegments(ULONG *a1)
{
  _QWORD *NextPartition; // rax
  __int64 v2; // r10
  void *i; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rbx

  if ( !a1 )
    a1 = &MiSystemPartition;
  NextPartition = (_QWORD *)*((_QWORD *)a1 + 2156);
  if ( *((_QWORD *)a1 + 2888) >= (unsigned __int64)NextPartition )
  {
    LODWORD(NextPartition) = MiShouldTrimUnusedSegments(a1);
    if ( (_DWORD)NextPartition )
    {
      if ( v2 )
      {
        NextPartition = *(_QWORD **)(v2 + 2440);
        if ( NextPartition )
          LODWORD(NextPartition) = KeSetEvent((PRKEVENT)(v2 + 2168), 0, 0);
      }
      else
      {
        for ( i = 0LL; ; i = v5 )
        {
          NextPartition = PsGetNextPartition(i);
          v5 = NextPartition;
          if ( !NextPartition )
            break;
          v4 = *NextPartition;
          if ( *(_QWORD *)(*v5 + 2440LL) )
            KeSetEvent((PRKEVENT)(v4 + 2168), 0, 0);
        }
      }
    }
  }
  return (int)NextPartition;
}
