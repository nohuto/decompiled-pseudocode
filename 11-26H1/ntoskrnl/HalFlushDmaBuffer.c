/*
 * XREFs of HalFlushDmaBuffer @ 0x140478340
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 */

__int64 __fastcall HalFlushDmaBuffer(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  char v3; // r10

  v3 = a3;
  if ( !a1
    || ((HalpCoreDmaAlignment - 1) & *(_DWORD *)(a2 + 40)) != 0
    || ((HalpCoreDmaAlignment - 1) & *(_DWORD *)(a2 + 44)) != 0 )
  {
    return 3221225485LL;
  }
  if ( !*(_BYTE *)(a1 + 445) )
  {
    LOBYTE(a3) = 1;
    KeFlushIoBuffers(a2, v3, a3, a2);
  }
  return 0LL;
}
