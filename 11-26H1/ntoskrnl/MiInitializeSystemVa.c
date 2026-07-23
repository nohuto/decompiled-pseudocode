/*
 * XREFs of MiInitializeSystemVa @ 0x140D10EF8
 * Callers:
 *     MmInitSystem @ 0x140C85D84 (MmInitSystem.c)
 * Callees:
 *     MiAssignHalEntropy @ 0x140CFF258 (MiAssignHalEntropy.c)
 *     MiAssignTopLevelRanges @ 0x140CFF498 (MiAssignTopLevelRanges.c)
 *     MiRebaseDynamicRelocationRegions @ 0x140CFFBC8 (MiRebaseDynamicRelocationRegions.c)
 *     MiSetSystemRegionTypes @ 0x140CFFD84 (MiSetSystemRegionTypes.c)
 *     MiInitializeTopLevelBitmap @ 0x140D10FA8 (MiInitializeTopLevelBitmap.c)
 */

__int64 __fastcall MiInitializeSystemVa(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  __int64 result; // rax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 8) != 0 )
    MiFlags |= 0x400000uLL;
  v2 = 16;
  v3 = 8;
  while ( 1 )
  {
    result = MiInitializeTopLevelBitmap();
    if ( !(_DWORD)result )
      return result;
    result = MiAssignTopLevelRanges(v2, 0xC8000000000LL);
    if ( (_DWORD)result )
      goto LABEL_9;
    if ( v3 )
    {
      --v3;
    }
    else
    {
      v3 = 8;
LABEL_9:
      if ( v2 == 1 )
      {
        if ( (_DWORD)result )
        {
LABEL_11:
          MiAssignHalEntropy(a1);
          MiSetSystemRegionTypes();
          return MiRebaseDynamicRelocationRegions(a1);
        }
        if ( !LODWORD(stru_140E2ED08.Affinity) )
          LODWORD(stru_140E2ED08.Affinity) = 1;
        return result;
      }
      v2 >>= 1;
      if ( (_DWORD)result )
        goto LABEL_11;
    }
  }
}
