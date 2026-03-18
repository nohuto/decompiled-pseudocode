/*
 * XREFs of MiLocateExclusiveSecure @ 0x1404B8DBC
 * Callers:
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 *     MiInitializeDataVad @ 0x1409C5B30 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocateExclusiveSecure(__int64 a1)
{
  unsigned __int64 i; // rdx

  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 8) == 2 )
      return i & -(__int64)((*(_QWORD *)(i + 24) & 0x20) != 0);
  }
  return 0LL;
}
