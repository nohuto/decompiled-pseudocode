/*
 * XREFs of MiMappedPageWriter @ 0x140490470
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     MiFreeModWriterEntry @ 0x1402AE950 (MiFreeModWriterEntry.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     MiAllocateModWriterEntry @ 0x140398980 (MiAllocateModWriterEntry.c)
 *     MiUnlockPartitionMappedWriter @ 0x1404907C4 (MiUnlockPartitionMappedWriter.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiDeleteMappedMdls @ 0x140490F1C (MiDeleteMappedMdls.c)
 *     MiLockPartitionMappedWriter @ 0x140490FC8 (MiLockPartitionMappedWriter.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  KPRIORITY v3; // eax
  PVOID *p_Object; // rcx
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // r8d
  _QWORD *ModWriterEntry; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  unsigned __int32 v15; // eax
  _QWORD *v16; // rax
  KWAIT_REASON v17; // r9d
  struct _KWAIT_BLOCK *WaitBlockArray; // rax
  PVOID *v19; // rdx
  ULONG v20; // ecx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int128 v25; // [rsp+40h] [rbp-498h] BYREF
  PVOID Object; // [rsp+50h] [rbp-488h] BYREF
  _BYTE v27[120]; // [rsp+58h] [rbp-480h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-408h]
  __int64 v29; // [rsp+D8h] [rbp-400h]
  char v30; // [rsp+E0h] [rbp-3F8h] BYREF
  struct _KWAIT_BLOCK v31; // [rsp+140h] [rbp-398h] BYREF

  memset_0(v27, 0, 0x88uLL);
  CurrentThread = KeGetCurrentThread();
  v25 = 0LL;
  v3 = KeSetPriorityThread(CurrentThread, 20);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  p_Object = &Object;
  v5 = v3;
  v6 = a1 + 7696;
  v7 = 16LL;
  do
  {
    *p_Object = (PVOID)v6;
    v6 += 24LL;
    ++p_Object;
    --v7;
  }
  while ( v7 );
  v8 = -1;
  v29 = a1 + 920;
  v28 = a1 + 88;
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  if ( v8 == -1
    || (v9 = *(_QWORD *)(a1 + 23248), v10 = *(_QWORD *)(a1 + 23456), v9 <= v10)
    || v9 - v10 < 0x10 && !*(_DWORD *)(a1 + 916) )
  {
LABEL_22:
    v17 = WrFreePage;
    WaitBlockArray = &v31;
    v19 = &Object;
    v20 = 18;
LABEL_23:
    v8 = KeWaitForMultipleObjects(v20, v19, WaitAny, v17, 0, 0, 0LL, WaitBlockArray);
    goto LABEL_7;
  }
  while ( 1 )
  {
LABEL_7:
    v11 = *(_DWORD *)(a1 + 92);
    if ( !v11 && v8 < 0x10 )
    {
      v6 = 88LL * v8;
      if ( *(_QWORD *)(v6 + a1 + 6016) == 0x3FFFFFFFFFLL )
        goto LABEL_22;
    }
    if ( *(_QWORD *)(a1 + 23248) != *(_QWORD *)(a1 + 23456) )
    {
      if ( *(_DWORD *)(a1 + 752) >= *(_DWORD *)(a1 + 744) )
      {
        v13 = 0LL;
      }
      else
      {
        ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1);
        v13 = ModWriterEntry;
        if ( ModWriterEntry )
        {
          *ModWriterEntry = 97LL;
          v14 = (_QWORD *)(a1 + 760);
          ModWriterEntry[7] = a1;
LABEL_13:
          v15 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 752));
          if ( v15 > *(_DWORD *)(a1 + 756) )
            *(_DWORD *)(a1 + 756) = v15;
          v13[12] = 0LL;
          if ( !(unsigned int)MiGatherMappedPages(a1, v8, v13) )
          {
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 752));
            if ( (v13[5] & 1) != 0 )
            {
              MiLockPartitionMappedWriter(a1, CurrentThread);
              v16 = (_QWORD *)v14[1];
              if ( (_QWORD *)*v16 != v14 )
                goto LABEL_18;
              *v13 = v14;
              v13[1] = v16;
              *v16 = v13;
              v14[1] = v13;
              MiUnlockPartitionMappedWriter(a1, CurrentThread);
            }
            else
            {
              *v13 = 0LL;
              MiFreeModWriterEntry(v13, 1u);
            }
          }
          goto LABEL_4;
        }
      }
      MiLockPartitionMappedWriter(a1, CurrentThread);
      v14 = (_QWORD *)(a1 + 760);
      v21 = *(_QWORD **)(a1 + 760);
      if ( v21 == (_QWORD *)(a1 + 760) )
      {
        *(_BYTE *)(a1 + 800) = 1;
      }
      else
      {
        if ( (_QWORD *)v21[1] != v14 || (v22 = *v21, *(_QWORD **)(*v21 + 8LL) != v21) )
LABEL_18:
          __fastfail(3u);
        *v14 = v22;
        v13 = v21;
        *(_QWORD *)(v22 + 8) = v14;
      }
      MiUnlockPartitionMappedWriter(a1, CurrentThread);
      if ( !v13 )
      {
        *(_QWORD *)&v25 = a1 + 88;
        *((_QWORD *)&v25 + 1) = a1 + 776;
        v17 = WrPageOut;
        WaitBlockArray = (struct _KWAIT_BLOCK *)&v30;
        v19 = (PVOID *)&v25;
        v20 = 2;
        goto LABEL_23;
      }
      goto LABEL_13;
    }
    if ( !v11 )
      goto LABEL_22;
    if ( !*(_DWORD *)(a1 + 752) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 752) );
  }
  MiDeleteMappedMdls(a1, v6);
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v5, v23);
}
