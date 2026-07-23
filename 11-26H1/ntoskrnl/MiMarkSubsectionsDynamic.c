/*
 * XREFs of MiMarkSubsectionsDynamic @ 0x1406FCDB4
 * Callers:
 *     MiFinishExtendAppend @ 0x1404829A0 (MiFinishExtendAppend.c)
 * Callees:
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14050BCB8 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiMarkSubsectionsDynamic(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 inserted; // rax

  v1 = 0LL;
  for ( i = a1; i; v1 += inserted )
  {
    if ( (*(_DWORD *)(i + 48) & 0x3FFFFFFF) != 0 )
      MiUpdateSubsectionCrossPartitionRefs((__int64 *)i, 0x3FFFFFFF, 512);
    *(_QWORD *)(i + 80) = 0LL;
    inserted = MiInsertUnusedSubsectionInternal(i, 0LL);
    i = *(_QWORD *)(i + 16);
  }
  return v1;
}
