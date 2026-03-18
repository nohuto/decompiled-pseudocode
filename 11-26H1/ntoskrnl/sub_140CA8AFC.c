/*
 * XREFs of sub_140CA8AFC @ 0x140CA8AFC
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140C80424 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140C80C28 (KeCheckedKernelInitialize.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

__int64 sub_140CA8AFC()
{
  __int64 v1; // [rsp+0h] [rbp-18h] BYREF
  __int16 v2; // [rsp+8h] [rbp-10h]

  v1 = 0LL;
  v2 = 0;
  __lidt(&v1);
  return 0LL;
}
