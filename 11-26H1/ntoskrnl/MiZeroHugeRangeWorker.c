/*
 * XREFs of MiZeroHugeRangeWorker @ 0x1407055C0
 * Callers:
 *     MiSoloZeroHugeRange @ 0x140705384 (MiSoloZeroHugeRange.c)
 * Callees:
 *     MiFillMemory @ 0x1402A1930 (MiFillMemory.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RtlCompareMemoryUlong @ 0x140730E10 (RtlCompareMemoryUlong.c)
 */

void *__fastcall MiZeroHugeRangeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  void *v4; // rdi
  __int64 v6; // r9
  void *result; // rax

  v3 = *(_DWORD *)(a1 + 16);
  v4 = (void *)(*(_QWORD *)a1 + (a3 << 21));
  if ( !v3 )
  {
    v6 = 0LL;
    return MiFillMemory(a2, v4, 0x200000uLL, v6, 1);
  }
  if ( v3 == 1 )
  {
    v6 = -1LL;
    return MiFillMemory(a2, v4, 0x200000uLL, v6, 1);
  }
  result = (void *)RtlCompareMemoryUlong(v4, 0x200000uLL, 0);
  if ( result != (void *)0x200000 )
    KeBugCheckEx(
      0x127u,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 8),
      (ULONG_PTR)result + (_QWORD)v4 - *(_QWORD *)a1,
      0x40000000uLL);
  return result;
}
