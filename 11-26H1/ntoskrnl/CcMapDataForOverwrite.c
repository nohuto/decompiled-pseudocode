/*
 * XREFs of CcMapDataForOverwrite @ 0x14048739C
 * Callers:
 *     CcPreparePinWrite @ 0x140AC4F70 (CcPreparePinWrite.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcMapDataCommon @ 0x140A360B0 (CcMapDataCommon.c)
 */

__int64 __fastcall CcMapDataForOverwrite(__int64 a1, _DWORD *a2, unsigned int a3, _QWORD *a4, unsigned __int64 *a5)
{
  int v6; // r12d
  int v7; // r13d
  unsigned __int64 v8; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // rbx
  int v14; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+10h] BYREF
  char v18; // [rsp+B0h] [rbp+18h] BYREF
  _QWORD *v19; // [rsp+B8h] [rbp+20h]

  v19 = a4;
  v6 = (int)a2;
  v7 = a1;
  v17 = 0LL;
  v8 = ((*a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12;
  CurrentThread = KeGetCurrentThread();
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( (*(_DWORD *)(v10 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v10 + 536) + 768LL), &LockHandle);
    *(_DWORD *)(v10 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v11 = BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v12 = a5;
  CcMapDataCommon(v7, v6, a3, 1, (__int64)&v17, (__int64)a5);
  v13 = *v12;
  while ( (_DWORD)v8 )
  {
    v18 = 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    LODWORD(v8) = v8 - 1;
    if ( (unsigned int)v8 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      v14 = v8;
      if ( (unsigned int)v8 > 0xF )
        v14 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v14;
    }
    MmCheckCachedPageStates(v13, 1LL, 5, (__int64)&v18);
    if ( !v18 )
      MmCheckCachedPageStates(v13, 1LL, 4, 0LL);
    v13 += 4096LL;
  }
  BYTE4(CurrentThread[1].Queue) = v11 & 1;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v11 >> 1;
  __addgsdword(0x8990u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  result = v17;
  *v19 = v17;
  return result;
}
