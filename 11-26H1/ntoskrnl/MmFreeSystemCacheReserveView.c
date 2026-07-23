/*
 * XREFs of MmFreeSystemCacheReserveView @ 0x140870E50
 * Callers:
 *     CcUninitializePartitionVacbs @ 0x1405B5808 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     MiReleaseSystemCacheView @ 0x1402A6600 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     PfpPartitionFromParent @ 0x14049C820 (PfpPartitionFromParent.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MmFreeSystemCacheReserveView(unsigned __int64 a1)
{
  unsigned __int64 v1; // r10
  __int64 SystemCacheReverseMap; // rax
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v4; // rcx
  _QWORD *v5; // r9
  ULONG_PTR v6; // r10
  unsigned __int64 v7; // r11

  MiGetPteAddress(a1);
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v1);
  BugCheckParameter4 = PfpPartitionFromParent(SystemCacheReverseMap);
  if ( (unsigned __int8)(BugCheckParameter4 >> 62) < 2u )
    KeBugCheckEx(0x1Au, 0x784uLL, v4, v6, BugCheckParameter4);
  do
  {
    if ( (*v5 & 0x401LL) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, v4, v6, 0LL);
    ++v5;
  }
  while ( (unsigned __int64)v5 < v7 );
  MiReleaseSystemCacheView(0LL, v6);
}
