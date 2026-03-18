/*
 * XREFs of MiFreeExcessSegments @ 0x140474D10
 * Callers:
 *     MiChargeCommitSlow @ 0x1402F4DE8 (MiChargeCommitSlow.c)
 *     MmResourcesAvailable @ 0x14047FC6C (MmResourcesAvailable.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402580F8 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x140474D78 (MiShouldTrimUnusedSegments.c)
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
