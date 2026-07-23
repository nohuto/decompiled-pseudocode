/*
 * XREFs of KiReadGuestSchedulerAssistPriority @ 0x1403CA394
 * Callers:
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402261D0 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
 *     KiScanSharedReadyThreads @ 0x1403C93BC (KiScanSharedReadyThreads.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadGuestSchedulerAssistPriority(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r8
  unsigned int v5; // r10d
  char v6; // dl
  char v7; // al
  unsigned int v8; // ebx
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // [rsp+10h] [rbp+8h]

  v2 = *(unsigned int **)(a1 + 968);
  v11 = 0LL;
  if ( v2 )
  {
    v5 = *v2;
    v6 = 0;
    v7 = 1;
    if ( (*v2 & 0x20000) != 0 )
      v7 = 3;
    v8 = *v2 >> 8;
    BYTE1(v11) = v7;
    BYTE2(v11) = BYTE1(*v2);
    if ( v2[7] )
    {
      v6 = 1;
      LOBYTE(v11) = 1;
    }
    if ( v2[8] )
    {
      v6 |= 2u;
      LOBYTE(v11) = v6;
    }
    HIDWORD(v11) = v2[5];
    if ( (v5 & 0x80000) != 0 )
    {
      v6 |= 4u;
      LOBYTE(v11) = v6;
    }
    if ( *((_QWORD *)v2 + 5) != *((_QWORD *)v2 + 6) )
    {
      v6 |= 8u;
      LOBYTE(v11) = v6;
    }
    if ( (v5 & 0x200000) != 0 )
    {
      v6 |= 0x10u;
      LOBYTE(v11) = v6;
    }
    v9 = (char)v8;
    if ( (char)v8 <= 0 || (char)v8 > 31 )
      v9 = 1;
    result = (unsigned int)*(char *)(a1 + 563);
    if ( v9 >= (int)result )
      result = (unsigned int)v9;
    if ( (int)result > KiVpThreadSystemWorkPriority )
      result = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( (*v2 & 0x20000) != 0 )
    {
      result = 7LL;
    }
    else if ( (v6 || v2[5]) && (int)result < KiVpThreadSystemWorkPriority )
    {
      result = (unsigned int)KiVpThreadSystemWorkPriority;
    }
  }
  else
  {
    result = (unsigned int)*(char *)(a1 + 195);
  }
  if ( a2 )
    *a2 = v11;
  return result;
}
