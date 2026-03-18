/*
 * XREFs of KiGetLoadOptions @ 0x140CC816C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
