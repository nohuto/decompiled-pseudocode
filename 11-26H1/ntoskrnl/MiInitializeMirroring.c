/*
 * XREFs of MiInitializeMirroring @ 0x140CFEE64
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MiUpdateMirrorBitmaps @ 0x140B68B5C (MiUpdateMirrorBitmaps.c)
 */

__int64 __fastcall MiInitializeMirroring(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rbp
  __int64 i; // rsi
  unsigned __int64 v8; // rax
  signed int j; // ebx
  _QWORD Src[8]; // [rsp+20h] [rbp-68h] BYREF

  LOWORD(stru_140E2ED08.Timer.TimerListEntry.Blink) = 1;
  *(_QWORD *)&stru_140E2ED08.Timer.Processor = &stru_140E2ED08.Timer.Dpc;
  v4 = 0LL;
  stru_140E2ED08.Timer.Dpc = (_KDPC *)&stru_140E2ED08.Timer.Dpc;
  *(_QWORD *)&stru_140E2ED08.WaitBlockFill11[16] = MiFinishResume;
  BYTE2(stru_140E2ED08.Timer.TimerListEntry.Blink) = 6;
  HIDWORD(stru_140E2ED08.Timer.TimerListEntry.Blink) = 1;
  stru_140E2ED08.WaitBlock[0].Thread = (struct _KTHREAD *)-1LL;
  stru_140E2ED08.WaitBlock[0].WaitListEntry.Flink = 0LL;
  CurrentThread = KeGetCurrentThread();
  while ( v4 < 2 )
  {
    if ( v4 )
      v6 = 0x400000LL;
    else
      v6 = qword_140E2D920 + 1;
    for ( i = 0LL; i < 2; ++i )
    {
      v8 = MiReservePtes(
             (__int64)&stru_140E366D8.WaitBlockList,
             (((unsigned __int64)(v6 + 7) >> 3) + 4095) >> 12,
             a3,
             (unsigned __int64)a4);
      if ( !v8
        || !(unsigned int)MiInitializeDynamicBitmap((__int64)&Src[4 * v4 + 2 * i], (__int64)(v8 << 25) >> 16, v6, 6) )
      {
        return 0LL;
      }
      Src[4 * v4 + 2 * i] = 0LL;
    }
    ++v4;
  }
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread, a3, a4);
  memmove(&stru_140E2ED08.WaitBlockFill11[48], Src, 0x40uLL);
  if ( (dword_140FBF214 & 1) != 0 )
  {
    for ( j = 0; j < 2; ++j )
    {
      if ( !(unsigned int)MiUpdateMirrorBitmaps(j, 0LL, 0LL) )
        return 0LL;
    }
  }
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  return 1LL;
}
