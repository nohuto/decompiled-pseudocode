/*
 * XREFs of MiReserveWorkingSetSwapSpace @ 0x140AC3C54
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140AC3D0C (MiReserveWorkingSetSwapSpaceRuns.c)
 *     MiFreeReservationRuns @ 0x140AC3E50 (MiFreeReservationRuns.c)
 */

__int64 __fastcall MiReserveWorkingSetSwapSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  int v11; // r9d
  __int64 result; // rax

  v8 = *(unsigned int **)(a1 + 8LL * a4 + 22304);
  v9 = a4;
  if ( a4 == a5 )
    goto LABEL_11;
  v9 = a4;
  if ( a5 == 16 )
    goto LABEL_11;
  v10 = *v8;
  if ( (v8[43] & 0x20) != 0 )
    v11 = v10 >> 1;
  else
    v11 = v10 - (v10 >> 6);
  while ( 1 )
  {
    result = MiReserveWorkingSetSwapSpaceRuns(a1, a6, v9, v11, (__int64)a2);
    if ( !result )
      break;
    MiFreeReservationRuns(a1, a2);
    memset_0(a2, 0, 0x50uLL);
    if ( v9 == a5 || a5 >= 0x10 )
      return 3221226021LL;
    v9 = a5;
LABEL_11:
    v11 = 1;
  }
  return result;
}
