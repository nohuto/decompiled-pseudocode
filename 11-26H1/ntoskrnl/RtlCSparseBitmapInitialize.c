/*
 * XREFs of RtlCSparseBitmapInitialize @ 0x14063CCC4
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x14062866C (RtlHpHeapManagerInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlCSparseBitmapInitialize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, a2);
  result = a2 - 56;
  *(_QWORD *)(a1 + 32) = -1LL;
  *(_DWORD *)(a1 + 52) = result;
  if ( a2 < 0x38 )
    *(_DWORD *)(a1 + 52) = 0;
  return result;
}
