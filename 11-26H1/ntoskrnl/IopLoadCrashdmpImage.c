/*
 * XREFs of IopLoadCrashdmpImage @ 0x140A38030
 * Callers:
 *     <none>
 * Callees:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall IopLoadCrashdmpImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return MmLoadSystemImageEx(a1, a2, a3, 0, a4 | 0x20u, a5, a6);
}
