/*
 * XREFs of RtlMultiAppendUnicodeStringBuffer @ 0x180099740
 * Callers:
 *     RtlAppendPathElement @ 0x1800991B0 (RtlAppendPathElement.c)
 * Callees:
 *     RtlpEnsureBufferSize @ 0x180099CB0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlMultiAppendUnicodeStringBuffer(unsigned __int16 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned int i; // r9d
  unsigned __int64 v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 result; // rax

  v3 = *a1;
  v4 = v3;
  for ( i = 0; i != a2; ++i )
  {
    v4 += *(unsigned __int16 *)(a3 + 16LL * i);
    if ( v4 > 0xFFFE )
      return 3221225734LL;
  }
  v9 = v4 + 2;
  if ( v9 > 0xFFFE )
    return 3221225734LL;
  v10 = (__int64 *)(a1 + 8);
  if ( a1 != (unsigned __int16 *)-16LL && v9 <= *((_QWORD *)a1 + 4)
    || (result = RtlpEnsureBufferSize(0LL, a1 + 8), (int)result >= 0) )
  {
    v11 = *v10;
    v12 = 0;
    a1[1] = v9;
    *a1 = v9 - 2;
    *((_QWORD *)a1 + 1) = v11;
    if ( a2 )
    {
      do
      {
        memmove(
          (void *)(*((_QWORD *)a1 + 1) + 2 * (v3 >> 1)),
          *(const void **)(a3 + 16LL * v12 + 8),
          *(unsigned __int16 *)(a3 + 16LL * v12));
        v13 = *(unsigned __int16 *)(a3 + 16LL * v12++);
        v3 += v13;
      }
      while ( v12 != a2 );
    }
    *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v3 >> 1)) = 0;
    return 0LL;
  }
  return result;
}
