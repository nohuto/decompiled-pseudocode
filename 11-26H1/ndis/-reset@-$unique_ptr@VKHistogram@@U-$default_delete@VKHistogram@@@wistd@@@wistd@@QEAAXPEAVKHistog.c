/*
 * XREFs of ?reset@?$unique_ptr@VKHistogram@@U?$default_delete@VKHistogram@@@wistd@@@wistd@@QEAAXPEAVKHistogram@@@Z @ 0x1400A5D48
 * Callers:
 *     ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x14013B540 (--_GNdisHistogramEntry@@QEAAPEAXI@Z.c)
 *     ndisAllocateHistogramEntry @ 0x14013B63C (ndisAllocateHistogramEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KHistogram,wistd::default_delete<KHistogram>>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7473484Bu);
}
