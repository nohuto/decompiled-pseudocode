/*
 * XREFs of PoEnergyContextCleanup @ 0x1409CBD6C
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     RtlStateDurationCapture @ 0x14042E9B0 (RtlStateDurationCapture.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140458110 (RtlTimelineBitmapUpdateRange.c)
 *     KeQueryTimelineBitmapTime @ 0x14047EAE8 (KeQueryTimelineBitmapTime.c)
 *     PopEtEnergyContextCleanup @ 0x1409CBEB4 (PopEtEnergyContextCleanup.c)
 *     PopEtEnumEnergyTrackers @ 0x1409CC648 (PopEtEnumEnergyTrackers.c)
 */

_UNKNOWN **__fastcall PoEnergyContextCleanup(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned int TimelineBitmapTime; // r15d
  __int64 v7; // r14
  unsigned int v8; // r8d
  __int64 v9; // r11
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rcx
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_QWORD *)(a1 + 1640);
  if ( v2 )
  {
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v5 = 0LL;
    TimelineBitmapTime = KeQueryTimelineBitmapTime();
    v7 = 3LL;
    while ( 1 )
    {
      v8 = RtlStateDurationCapture(v5 + v2 + 104, (unsigned __int64 *)(v5 + v2 + 104), v4);
      if ( v9 == v2 + 104 )
        break;
      if ( v9 == v2 + 112 )
      {
        v10 = (__int64 *)(v2 + 312);
        goto LABEL_6;
      }
LABEL_9:
      v5 += 8LL;
      if ( !--v7 )
      {
        RtlStateDurationCapture(v2 + 416, (unsigned __int64 *)(v2 + 416), v4);
        v15[0] = 4LL;
        v15[2] = 0LL;
        v15[3] = v2;
        v15[1] = a1;
        PopAcquireRwLockExclusive((unsigned __int64 *)(v2 + 440), v11, v12, v13);
        PopEtEnumEnergyTrackers(v14, v15);
        PopReleaseRwLock((struct _KTHREAD *)(v2 + 440));
        return (_UNKNOWN **)PopEtEnergyContextCleanup(v2);
      }
    }
    v10 = (__int64 *)(v2 + 304);
LABEL_6:
    if ( v10 )
    {
      if ( v8 )
        RtlTimelineBitmapUpdateRange(v10, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
    }
    goto LABEL_9;
  }
  return result;
}
