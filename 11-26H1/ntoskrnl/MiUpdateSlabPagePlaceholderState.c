/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x14036B030
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1402A6E7C (MiFreeSlabEntry.c)
 *     MiDemoteSlabEntry @ 0x1402A97C4 (MiDemoteSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     VslSetPlaceholderPages @ 0x14036B140 (VslSetPlaceholderPages.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiUpdateSlabPagePlaceholderState(int a1, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v9; // edi

  if ( a1 >= 0 )
  {
    v4 = (unsigned int)a1;
    if ( a1 <= 4 && a1 != 2 )
    {
      if ( a4 )
      {
        if ( a3 == 1 )
        {
          v7 = 48 * a2 - 0x220000000000LL;
          MiSetPfnIdentity(v7, 3LL);
          MiAbortCombineScan(v7);
        }
        v8 = 0;
        v9 = *((_DWORD *)MiSlabTypeToMmSlabType + v4);
      }
      else
      {
        if ( a3 == 1 )
          MiSetPfnIdentity(48 * a2 - 0x220000000000LL, 0LL);
        v8 = *((_DWORD *)MiSlabTypeToMmSlabType + v4);
        v9 = 0;
      }
      if ( (MiFlags & 0x10000) != 0 && (int)VslSetPlaceholderPages(a2, a3, v8, v9) < 0 )
        KeBugCheckEx(0x1Au, 0x5150FuLL, a2, (int)v8, (int)v9);
    }
  }
}
