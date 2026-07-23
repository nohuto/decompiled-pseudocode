/*
 * XREFs of MiFindSpecialPurposeMemoryType @ 0x140533010
 * Callers:
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140884A24 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiSpecialPurposeMemoryChangePrepare @ 0x140B68C20 (MiSpecialPurposeMemoryChangePrepare.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B68D40 (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryType(__int64 a1, const void *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)(a1 + 21400);
  for ( i = *(_QWORD **)(a1 + 21400); i != v2; i = (_QWORD *)*i )
  {
    if ( !memcmp(i + 3, a2, 0x20uLL) )
      return i;
  }
  return 0LL;
}
