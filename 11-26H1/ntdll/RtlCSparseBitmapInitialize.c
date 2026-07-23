/*
 * XREFs of RtlCSparseBitmapInitialize @ 0x1800D0EC0
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x1800D0E2C (RtlHpHeapManagerInitialize.c)
 *     RtlpHpVaMgrCtxInitialize @ 0x1800D0F68 (RtlpHpVaMgrCtxInitialize.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCSparseBitmapInitialize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  memset_thunk_772440563353939046((void *)a1, 0, a2);
  result = a2 - 56;
  *(_QWORD *)(a1 + 32) = -1LL;
  *(_DWORD *)(a1 + 52) = result;
  if ( a2 < 0x38 )
    *(_DWORD *)(a1 + 52) = 0;
  return result;
}
