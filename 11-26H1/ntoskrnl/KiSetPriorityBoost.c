/*
 * XREFs of KiSetPriorityBoost @ 0x1403BFA08
 * Callers:
 *     KiVpBackingThreadYieldExecution @ 0x1402385C4 (KiVpBackingThreadYieldExecution.c)
 *     KiNormalPriorityReadyScan @ 0x1403BF1A4 (KiNormalPriorityReadyScan.c)
 *     KiScanSharedReadyThreads @ 0x1403BF4BC (KiScanSharedReadyThreads.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x14037EAA0 (KiUpdateThreadPriority.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 */

unsigned __int64 __fastcall KiSetPriorityBoost(
        struct _SINGLE_LIST_ENTRY *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax

  v7 = *(unsigned __int16 *)(a2 + 518);
  if ( (unsigned __int8)((unsigned int)v7 >> 4) < (int)a3 )
    *(_WORD *)(a2 + 518) = v7 ^ (v7 ^ (16 * (char)a3)) & 0xFF0;
  if ( a1 )
    KiSetPriorityThread(a2, a1, a3);
  else
    KiUpdateThreadPriority(0LL, v7, a2, (char)a3, 0);
  v8 = *(_QWORD *)(a2 + 32);
  if ( a4 > v8 || (result = v8 - a4, result < a5) )
  {
    result = a5 + a4;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
