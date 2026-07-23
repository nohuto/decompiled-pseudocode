/*
 * XREFs of HalpMcaExtendedLogInitialize @ 0x14057D488
 * Callers:
 *     HalpInitializeMce @ 0x140BEFEA4 (HalpInitializeMce.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalpMcaExtendedLogGetL1DirectoryBase @ 0x14057D37C (HalpMcaExtendedLogGetL1DirectoryBase.c)
 */

__int64 HalpMcaExtendedLogInitialize()
{
  unsigned __int64 v0; // rbp
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  union _KWAIT_BLOCK::$2ACC67C642B9E501E8652DFF4606A234 *p_Thread; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v0 = 4096LL;
  if ( HalpMcaExtendedLogGetL1DirectoryBase(&v10) < 0 || (v1 = v10) == 0 )
  {
    v4 = -1073741637;
    goto LABEL_18;
  }
  v2 = MmMapIoSpaceEx(v10, 4096LL, 0x204u);
  v3 = v2;
  if ( v2 )
  {
    if ( *(_DWORD *)v2 != 256 )
      goto LABEL_6;
    if ( *(_DWORD *)(v2 + 4) != 64 )
      goto LABEL_6;
    v5 = *(_QWORD *)(v2 + 8);
    if ( v5 <= 0x40 )
      goto LABEL_6;
    v0 = *(_QWORD *)(v2 + 8);
    MiUnmapContiguousMemory(v2, 0x1000uLL, 1);
    v6 = MmMapIoSpaceEx(v1, v5, 0x204u);
    v3 = v6;
    if ( !v6 )
      goto LABEL_4;
    stru_140E3EAA8.WaitBlock[1].Thread = (struct _KTHREAD *)v6;
    *(_DWORD *)&stru_140E3EAA8.WaitBlockFill11[88] = *(_DWORD *)(v6 + 48);
    stru_140E3EAA8.WaitBlock[1].Object = (PVOID)((*(_QWORD *)(v6 + 8) - (unsigned __int64)*(unsigned int *)(v6 + 4)) >> 3);
    if ( stru_140E3EAA8.WaitBlock[1].Object >= (PVOID)*(unsigned int *)&stru_140E3EAA8.WaitBlockFill11[88] )
    {
      stru_140E3EAA8.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)MmMapIoSpaceEx(
                                                                                *(_QWORD *)(v6 + 16),
                                                                                *(_QWORD *)(v6 + 24),
                                                                                0x204u);
      if ( stru_140E3EAA8.WaitBlock[2].WaitListEntry.Blink )
      {
        stru_140E3EAA8.WaitBlock[2].WaitListEntry.Flink = *(struct _LIST_ENTRY **)(v3 + 16);
        *(_QWORD *)&stru_140E3EAA8.WaitBlockFill11[112] = *(_QWORD *)(v3 + 24);
        *(_DWORD *)(v3 + 32) |= 1u;
        return 0;
      }
      v4 = -1073741670;
    }
    else
    {
LABEL_6:
      v4 = -1073741637;
    }
    HalpMcaExtendedLoggingSupported = 0;
    if ( stru_140E3EAA8.WaitBlock[2].WaitListEntry.Blink )
      MiUnmapContiguousMemory(
        (unsigned __int64)stru_140E3EAA8.WaitBlock[2].WaitListEntry.Blink,
        *(_QWORD *)(v3 + 24),
        1);
    MiUnmapContiguousMemory(v3, v0, 1);
    goto LABEL_19;
  }
LABEL_4:
  v4 = -1073741670;
LABEL_18:
  HalpMcaExtendedLoggingSupported = 0;
LABEL_19:
  v7 = 48LL;
  p_Thread = (union _KWAIT_BLOCK::$2ACC67C642B9E501E8652DFF4606A234 *)&stru_140E3EAA8.WaitBlock[1].Thread;
  do
  {
    LOBYTE(p_Thread->Thread) = 0;
    p_Thread = (union _KWAIT_BLOCK::$2ACC67C642B9E501E8652DFF4606A234 *)((char *)p_Thread + 1);
    --v7;
  }
  while ( v7 );
  return v4;
}
