/*
 * XREFs of MiFillMemory @ 0x1402A0E80
 * Callers:
 *     MiZeroHugeRangeWorker @ 0x14070A290 (MiZeroHugeRangeWorker.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     AccelFillMemory @ 0x1402A0F14 (AccelFillMemory.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall MiFillMemory(__int64 a1, void *a2, size_t a3, __int64 a4, int a5)
{
  void *result; // rax
  __int64 v9; // rax
  int v10; // edx

  if ( !a1 )
  {
LABEL_2:
    if ( a4 )
    {
      v10 = (unsigned __int8)a4;
    }
    else
    {
      if ( a5 == 1 )
        return (void *)KeZeroPages(a2, a3);
      v10 = 0;
    }
    return memset_0(a2, v10, a3);
  }
  v9 = 3LL;
  if ( a5 != 1 )
    v9 = 1LL;
  result = (void *)AccelFillMemory(a1, (_DWORD)a2, a3, a4, v9);
  if ( (int)result < 0 )
  {
    _InterlockedIncrement(&dword_140EF4DEC);
    goto LABEL_2;
  }
  return result;
}
