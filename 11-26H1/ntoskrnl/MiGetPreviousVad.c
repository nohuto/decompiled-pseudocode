/*
 * XREFs of MiGetPreviousVad @ 0x140460C08
 * Callers:
 *     MiDeleteEmptyPageTableCommit @ 0x1404608E0 (MiDeleteEmptyPageTableCommit.c)
 *     MiLocateLowestConflictingVad @ 0x140460B50 (MiLocateLowestConflictingVad.c)
 *     MiComputeVadCommitBelow @ 0x140B26574 (MiComputeVadCommitBelow.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPreviousVad(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 i; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    for ( ; *(_QWORD *)(v1 + 8); v1 = *(_QWORD *)(v1 + 8) )
      ;
  }
  else
  {
    for ( i = a1[2]; ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(unsigned __int64 **)(v1 + 8) == a1 )
        break;
      a1 = (unsigned __int64 *)v1;
    }
  }
  return v1;
}
