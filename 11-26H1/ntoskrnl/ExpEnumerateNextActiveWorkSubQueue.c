/*
 * XREFs of ExpEnumerateNextActiveWorkSubQueue @ 0x140384058
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x140383E20 (ExTryQueueWorkItem.c)
 *     ExpWorkQueueHealthMetricsMonitorCallback @ 0x1406D4D20 (ExpWorkQueueHealthMetricsMonitorCallback.c)
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 * Callees:
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     MmGetNextNode @ 0x140456D80 (MmGetNextNode.c)
 */

__int64 __fastcall ExpEnumerateNextActiveWorkSubQueue(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rcx
  unsigned __int16 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // edx
  unsigned int NextNode; // eax
  unsigned __int16 v12; // dx
  __int64 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rdx

  v4 = 0LL;
  while ( 1 )
  {
    if ( v4 )
    {
      *a2 = v4;
      return 0LL;
    }
    v5 = (unsigned __int16 *)a1[2];
    if ( *((_DWORD *)a1 + 8) >= *((_DWORD *)v5 + 30) )
      break;
LABEL_4:
    v6 = (unsigned __int16 *)a1[2];
    v7 = *a1;
    if ( v6 )
    {
      v8 = *v6;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8 * v8) + 264LL) > 1uLL )
      {
        v15 = *(_QWORD *)(v7 + 8);
        v16 = 0LL;
        v17 = *(_QWORD *)(v15
                        + 8LL
                        * (unsigned int)(*((_DWORD *)a1 + 7)
                                       + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72]
                                       * (*((_DWORD *)a1 + 2) + 8 * v8)));
        if ( (v17 & 1) == 0 )
          v16 = v17;
        if ( v16 )
        {
          v18 = (*(_DWORD *)(v16 + 712) & 0x3FFF) - 1;
          if ( (*(_DWORD *)(v16 + 712) & 0x4000) == 0 )
            v18 = *(_DWORD *)(v16 + 712) & 0x3FFF;
          if ( v18 >= (2 * *(_DWORD *)(v16 + 716)) >> 1 )
          {
            v4 = 0LL;
            v19 = *(_QWORD *)(*a1 + 8);
            v20 = *((_DWORD *)a1 + 7)
                + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72]
                * (*((_DWORD *)a1 + 2) + 8 * (unsigned int)*(unsigned __int16 *)a1[2]);
            if ( (*(_QWORD *)(v19 + 8 * v20) & 1) == 0 )
              v4 = *(_QWORD *)(v19 + 8 * v20);
          }
        }
      }
    }
    v9 = (unsigned int)(*((_DWORD *)a1 + 7) + 1) % *(_DWORD *)(a1[2] + 120);
    ++*((_DWORD *)a1 + 8);
    *((_DWORD *)a1 + 7) = v9;
  }
  NextNode = MmGetNextNode(*v5, a1 + 3);
  if ( NextNode < (unsigned __int16)KeNumberNodes )
  {
    if ( KeIsNodeInitialized(NextNode) )
      v13 = KeNodeBlock[v12];
    else
      v13 = 0LL;
    a1[2] = v13;
    v14 = *(_DWORD *)(v13 + 124);
    *(_DWORD *)(v13 + 124) = (v14 + 1) % *(_DWORD *)(v13 + 120);
    *(__int64 *)((char *)a1 + 28) = v14;
    goto LABEL_4;
  }
  return 2147483674LL;
}
