/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x140369290
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1402A7A6C (MiFreeSlabEntry.c)
 *     MiDemoteSlabEntry @ 0x1402AA3B4 (MiDemoteSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x14033A4BC (MiGetPageFromSlabAllocator.c)
 *     MiDefragmentSlabWorker @ 0x1407063E4 (MiDefragmentSlabWorker.c)
 * Callees:
 *     MiAbortCombineScan @ 0x1403691D0 (MiAbortCombineScan.c)
 *     VslSetPlaceholderPages @ 0x1403693A0 (VslSetPlaceholderPages.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
