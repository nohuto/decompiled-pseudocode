/*
 * XREFs of RtlCompressBufferDeflateInternal @ 0x140627B78
 * Callers:
 *     RtlCompressBufferDeflateRaw @ 0x140627C80 (RtlCompressBufferDeflateRaw.c)
 *     RtlCompressBufferDeflateZlib @ 0x140627CD0 (RtlCompressBufferDeflateZlib.c)
 * Callees:
 *     RtlCompressDeflateInitCompressionStream @ 0x140629534 (RtlCompressDeflateInitCompressionStream.c)
 *     deflate @ 0x14062A8EC (deflate.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlCompressBufferDeflateInternal(
        char a1,
        __int16 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        _DWORD *a8,
        void *a9)
{
  __int64 result; // rax
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  int v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+3Ch] [rbp-4Ch]

  if ( (a2 & 0xFEFF) != 0 )
    return 3221225659LL;
  memset_0(&v16, 0, 0x58uLL);
  memset_0(a9, 0, 0x417ECuLL);
  v18 = a5;
  LOBYTE(v14) = a1;
  v16 = a3;
  v17 = a4;
  v19 = a6;
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, void *))RtlCompressDeflateInitCompressionStream)(
    &v16,
    a2 != 0 ? 9 : 1,
    v14,
    a9);
  v15 = deflate(&v16);
  if ( v15 == 1 )
  {
    *a8 = v20;
    return 0LL;
  }
  else if ( v15 == -5 || !v15 )
  {
    return 3221225507LL;
  }
  else
  {
    result = 3221225701LL;
    if ( v15 == -2 )
      return 3221225485LL;
  }
  return result;
}
