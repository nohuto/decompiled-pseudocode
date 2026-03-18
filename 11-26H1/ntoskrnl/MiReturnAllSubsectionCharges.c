/*
 * XREFs of MiReturnAllSubsectionCharges @ 0x1404890DC
 * Callers:
 *     MiFinishExtendAppend @ 0x140488E60 (MiFinishExtendAppend.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x14036E5D0 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiReturnAllSubsectionCharges(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  ULONG_PTR i; // rbx

  v1 = 0LL;
  for ( i = BugCheckParameter2; i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 48) & 0x3FFFFFFF) != 0 )
      v1 += MiDecrementSubsectionViewCount(i, 12);
  }
  return v1;
}
