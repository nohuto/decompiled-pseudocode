/*
 * XREFs of MiLocateExclusiveSecure @ 0x1404B25EC
 * Callers:
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAddSecureEntry @ 0x140A03278 (MiAddSecureEntry.c)
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
