/*
 * XREFs of KiRcuSystemInitialize @ 0x140D100E4
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KiRcuProcessorInitialize @ 0x14050CA2C (KiRcuProcessorInitialize.c)
 */

__int64 __fastcall KiRcuSystemInitialize(__int64 a1)
{
  unsigned int v1; // r8d
  _QWORD *v2; // r9
  unsigned __int8 *v3; // r11
  PVOID *p_SparePtr; // rbx
  unsigned int v5; // r10d
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned int v8; // edx

  *(_DWORD *)&KiDpcCorralLock.WaitBlockFill11[80] = 536952864;
  v1 = 0;
  v2 = &KiRcuNode;
  v3 = &KiDpcCorralLock.WaitBlockFill6[82];
  p_SparePtr = &KiDpcCorralLock.WaitBlock[1].SparePtr;
  do
  {
    *p_SparePtr = v2;
    v5 = 0;
    v6 = *v3;
    if ( *v3 )
    {
      v7 = v1 - 1;
      do
      {
        if ( v1 )
        {
          v8 = v5 % KiDpcCorralLock.WaitBlockFill6[v7 + 80];
          v2[1] = *((_QWORD *)&KiDpcCorralLock.WaitBlock[1].SparePtr + v7)
                + ((unsigned __int64)(v5 / KiDpcCorralLock.WaitBlockFill6[v7 + 80]) << 6);
          *v2 = 1LL << v8;
        }
        v2 += 8;
        ++v5;
      }
      while ( v5 < v6 );
    }
    ++v1;
    ++p_SparePtr;
    ++v3;
  }
  while ( v1 < 2 );
  KiDpcCorralLock.UserAffinity = 0LL;
  KiDpcCorralLock.WaitBlock[2].SparePtr = &KiDpcCorralLock.WaitBlockFill11[128];
  KiDpcCorralLock.WaitBlock[2].Object = &KiDpcCorralLock.WaitBlockFill11[128];
  KiDpcCorralLock.QueueListEntry.Blink = 0LL;
  KiDpcCorralLock.Process = (_KPROCESS *)KiRcuFlushCompletedWorkerRoutine;
  KiDpcCorralLock.WaitBlock[3].Thread = (struct _KTHREAD *)KiRcuFlushCompletedDpcRoutine;
  *(_DWORD *)&KiDpcCorralLock.WaitBlockFill11[144] = 282;
  KiDpcCorralLock.Spare18 = 0LL;
  KiDpcCorralLock.QueueListEntry.Flink = 0LL;
  *(_QWORD *)&KiDpcCorralLock.WaitBlockFill11[160] = 0LL;
  return KiRcuProcessorInitialize(a1, 1u);
}
