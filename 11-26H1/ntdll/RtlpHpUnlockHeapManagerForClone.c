/*
 * XREFs of RtlpHpUnlockHeapManagerForClone @ 0x180150868
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144390 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801445D0 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18008C9F4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpFlsCloneComplete @ 0x18014F270 (RtlpFlsCloneComplete.c)
 */

struct _TEB *__fastcall RtlpHpUnlockHeapManagerForClone(int a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  RtlpFlsCloneComplete((__int64)&RtlpHpEnvFlsContext, a1);
  v3 = 0LL;
  if ( a1 )
  {
    qword_1801C78E0 = -1LL;
    qword_1801C78D8 = 1LL;
  }
  LODWORD(v3) = 1;
  *((_QWORD *)&v3 + 1) = &unk_1801C78C0;
  BYTE4(v3) = -1;
  return RtlpCSparseBitmapUnlock((__int64)&v3);
}
