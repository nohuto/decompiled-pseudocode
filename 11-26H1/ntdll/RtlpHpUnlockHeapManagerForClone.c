/*
 * XREFs of RtlpHpUnlockHeapManagerForClone @ 0x180150718
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144290 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1801444C0 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18006FE30 (RtlpCSparseBitmapUnlock.c)
 *     RtlpFlsCloneComplete @ 0x18014F120 (RtlpFlsCloneComplete.c)
 */

void __fastcall RtlpHpUnlockHeapManagerForClone(int a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  RtlpFlsCloneComplete((__int64)&RtlpHpEnvFlsContext, a1);
  v2 = 0LL;
  if ( a1 )
  {
    qword_1801C6930 = -1LL;
    qword_1801C6928 = 1LL;
  }
  LODWORD(v2) = 1;
  *((_QWORD *)&v2 + 1) = BaseAddress;
  BYTE4(v2) = -1;
  RtlpCSparseBitmapUnlock((__int64)&v2);
}
