/*
 * XREFs of MiReturnAllSubsectionCharges @ 0x140482C1C
 * Callers:
 *     MiFinishExtendAppend @ 0x1404829A0 (MiFinishExtendAppend.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
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
