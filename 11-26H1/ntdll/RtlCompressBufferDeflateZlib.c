/*
 * XREFs of RtlCompressBufferDeflateZlib @ 0x1801510A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompressBufferDeflateInternal @ 0x180150F4C (RtlCompressBufferDeflateInternal.c)
 */

__int64 __fastcall RtlCompressBufferDeflateZlib(
        __int16 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        void *a8)
{
  int v9; // [rsp+30h] [rbp-28h]

  return RtlCompressBufferDeflateInternal(1, a1, a2, a3, a4, a5, v9, a7, a8);
}
