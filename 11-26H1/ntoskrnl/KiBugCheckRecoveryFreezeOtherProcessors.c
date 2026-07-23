/*
 * XREFs of KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548
 * Callers:
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405FC864 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FD294 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KiSetDebuggerOwner @ 0x140532C74 (KiSetDebuggerOwner.c)
 *     KeFrozenProcessorCount @ 0x1405F87B0 (KeFrozenProcessorCount.c)
 *     KiSendFreeze @ 0x1405F8AD8 (KiSendFreeze.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiBugCheckRecoveryFreezeOtherProcessors(unsigned int a1)
{
  unsigned int v1; // esi
  unsigned int v2; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // r14
  signed int v5; // edi
  unsigned int i; // ebx
  unsigned int j; // ebx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-CCh]
  struct _KAFFINITY_EX *v11; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-C0h]
  __int16 v13; // [rsp+48h] [rbp-B8h]
  int v14; // [rsp+4Ah] [rbp-B6h]
  __int16 v15; // [rsp+4Eh] [rbp-B2h]
  struct _KAFFINITY_EX v16; // [rsp+50h] [rbp-B0h] BYREF

  v1 = a1;
  v10 = a1;
  v14 = 0;
  v15 = 0;
  memset_0(&v16.8, 0, sizeof(v16.8));
  v2 = KeNumberProcessors_0;
  v9 = 0;
  if ( (_DWORD)KeNumberProcessors_0 != 1 && !KiHypervisorInitiatedCrashDump )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = v1 == 0;
    KiSetDebuggerOwner((__int64)CurrentPrcb);
    *(_QWORD *)&v16.Count = 2097153LL;
    memset_0(&v16.8, 0, sizeof(v16.8));
    RtlpCopyAffinityEx(&v16, 0x20u, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
    KeRemoveProcessorAffinityEx(&v16.Count, CurrentPrcb->Number);
    LODWORD(KsepShimDbLock.SuspendEvent.Header.WaitListHead.Flink) = 1;
    *(_DWORD *)&KsepShimDbLock.PriorityFloorCounts[24] = 0;
    v5 = 0;
    v12 = v16.Bitmap[0];
    v11 = &v16;
    v13 = 0;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v11) )
    {
      do
      {
        KiInsertQueueDpc(KiProcessorBlock[v9] + 40720, 0LL, 0LL, 0LL, 0);
        ++v5;
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v11) );
      v1 = v10;
    }
    for ( i = 0; i < 0xF4240; i += 50 )
    {
      if ( *(int *)&KsepShimDbLock.PriorityFloorCounts[24] >= v5 )
        break;
      KeStallExecutionProcessor(0x32u);
    }
    if ( *(int *)&KsepShimDbLock.PriorityFloorCounts[24] < v5 )
    {
      v12 = v16.Bitmap[0];
      v13 = 0;
      v11 = &v16;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v11) )
        KeRemoveQueueDpcEx((int *)(KiProcessorBlock[v9] + 40720), 0);
    }
    KiSendFreeze((__int64)&v16, v4);
    if ( v1 )
    {
      for ( j = 0; j < v1; j += 50 )
      {
        if ( (unsigned int)KeFrozenProcessorCount() >= v5 )
          break;
        KeStallExecutionProcessor(0x32u);
      }
    }
    LODWORD(KsepShimDbLock.SuspendEvent.Header.WaitListHead.Flink) = 0;
    return (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount();
  }
  return v2;
}
