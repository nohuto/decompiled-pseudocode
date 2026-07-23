/*
 * XREFs of read_buf @ 0x14062C848
 * Callers:
 *     deflate_stored @ 0x14062BD90 (deflate_stored.c)
 *     fill_window @ 0x14062C1F4 (fill_window.c)
 * Callees:
 *     adler32_z @ 0x14063816C (adler32_z.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall read_buf(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edi
  __int64 result; // rax
  const void *v8; // rdx

  v3 = *(_DWORD *)(a1 + 8);
  v5 = v3;
  if ( v3 > a3 )
    v5 = a3;
  if ( !v5 )
    return 0LL;
  v8 = *(const void **)a1;
  *(_DWORD *)(a1 + 8) = v3 - v5;
  memmove(a2, v8, v5);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) == 1 )
    *(_DWORD *)(a1 + 76) = adler32_z(*(unsigned int *)(a1 + 76), a2);
  *(_QWORD *)a1 += v5;
  result = v5;
  *(_DWORD *)(a1 + 12) += v5;
  return result;
}
