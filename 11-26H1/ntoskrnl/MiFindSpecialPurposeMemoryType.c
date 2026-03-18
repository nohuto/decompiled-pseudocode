/*
 * XREFs of MiFindSpecialPurposeMemoryType @ 0x140530B10
 * Callers:
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x14087E624 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiSpecialPurposeMemoryChangePrepare @ 0x140B65B80 (MiSpecialPurposeMemoryChangePrepare.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B65CA0 (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
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
