/*
 * XREFs of MiMirrorBlackRemoveChildPartitionPages @ 0x1406F4820
 * Callers:
 *     <none>
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 */

ULONG *__fastcall MiMirrorBlackRemoveChildPartitionPages(__int64 a1, __int64 a2)
{
  ULONG *result; // rax
  unsigned int *v4; // rdi
  unsigned int v5; // ebx

  result = &MiSystemPartition;
  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    v4 = *(unsigned int **)(a1 + 80);
    v5 = 0;
    if ( v4 )
    {
      if ( *v4 )
      {
        do
        {
          result = (ULONG *)MiMirrorOmitPagesFromCopy(a2, 0LL, *(_QWORD *)&v4[4 * v5 + 4], *(_QWORD *)&v4[4 * v5 + 6]);
          ++v5;
        }
        while ( v5 < *v4 );
      }
    }
  }
  return result;
}
