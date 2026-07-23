/*
 * XREFs of MiWriteWsle @ 0x14029ED40
 * Callers:
 *     MiCountWslesInPageTableRange @ 0x14029D9E0 (MiCountWslesInPageTableRange.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MiRemoveWsle @ 0x1403273B4 (MiRemoveWsle.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiCreatePteWsle @ 0x1406EEF40 (MiCreatePteWsle.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  volatile signed __int64 *v3; // rdx
  signed __int64 i; // r9
  signed __int64 result; // rax

  v3 = (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = *v3; ; i = result )
  {
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64(
               v3,
               ((unsigned __int64)a3 << 56) ^ (i ^ ((unsigned __int64)a3 << 56)) & 0x80FFFFFFFFFFFFFFuLL,
               i);
    if ( i == result )
      break;
  }
  return result;
}
