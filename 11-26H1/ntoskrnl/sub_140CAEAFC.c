/*
 * XREFs of sub_140CAEAFC @ 0x140CAEAFC
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140C86424 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140C86C28 (KeCheckedKernelInitialize.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

__int64 sub_140CAEAFC()
{
  __int64 v1; // [rsp+0h] [rbp-18h] BYREF
  __int16 v2; // [rsp+8h] [rbp-10h]

  v1 = 0LL;
  v2 = 0;
  __lidt(&v1);
  return 0LL;
}
