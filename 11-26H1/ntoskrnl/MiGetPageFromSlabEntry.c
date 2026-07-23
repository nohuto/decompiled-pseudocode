/*
 * XREFs of MiGetPageFromSlabEntry @ 0x1403599BC
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 *     MiGetPageFromSlabAllocatorByIdentity @ 0x1404FCF8C (MiGetPageFromSlabAllocatorByIdentity.c)
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 * Callees:
 *     RtlInterlockedSetClearRun @ 0x140359A90 (RtlInterlockedSetClearRun.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 */

__int64 __fastcall MiGetPageFromSlabEntry(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 i; // rdx
  ULONG ClearBits; // eax

  if ( !*(_DWORD *)(a1 + 84) )
    return -1LL;
  v4 = *(_DWORD *)(a1 + 80) & (unsigned int)-(*(_DWORD *)(a1 + 80) < LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a2 + 136) >> 3) & 3]));
  if ( _bittest64(*(const signed __int64 **)(a1 + 72), v4) )
    goto LABEL_5;
  for ( i = (unsigned int)v4; !(unsigned int)RtlInterlockedSetClearRun(a1 + 64, i, 1LL); i = ClearBits )
  {
LABEL_5:
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1 + 64), 1u, v4 + 1);
    LODWORD(v4) = ClearBits;
    if ( ClearBits == -1 )
      return -1LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 84));
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 96));
  if ( *(_DWORD *)(a2 + 128) == 8 )
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a2 + 24) + 22080LL));
  *(_DWORD *)(a1 + 80) = v4 + 1;
  return *(_QWORD *)(a1 + 40) + (unsigned int)v4;
}
