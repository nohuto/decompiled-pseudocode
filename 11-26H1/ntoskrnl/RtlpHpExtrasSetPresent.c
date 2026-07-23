/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x14063AFB4
 * Callers:
 *     RtlpHpExtrasAppend @ 0x1403549B4 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1403565A0 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockReleaseShared @ 0x1405336A4 (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeLockAcquireShared @ 0x140533B2C (RtlpHpLargeLockAcquireShared.c)
 *     RtlpHpSegSetExtraPresent @ 0x14063C3E4 (RtlpHpSegSetExtraPresent.c)
 */

void __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  unsigned __int64 Metadata; // rbx
  unsigned __int8 v10; // r9

  v2 = 0;
  if ( (_WORD)a2
    || (v5 = RtlCSparseBitmapBitmaskRead((__int64)&ExpUuidLock.CycleTime, 2 * ((a2 - ExpUuidLock.ThreadLock) >> 20))) != 0
    && (v2 = v5 - 1, (_DWORD)v5 != 3) )
  {
    RtlpHpSegSetExtraPresent(a1 + 192LL * v2 + 320, a2);
  }
  else
  {
    RtlpHpLargeLockAcquireShared(a1, v6, v7, v8);
    Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
    RtlpHpLargeLockReleaseShared(a1, v10);
    *(_QWORD *)(Metadata + 32) |= 1uLL;
  }
}
