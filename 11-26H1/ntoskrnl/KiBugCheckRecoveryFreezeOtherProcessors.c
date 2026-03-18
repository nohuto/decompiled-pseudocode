/*
 * XREFs of KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405F9B28
 * Callers:
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405F9E44 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FA874 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403EF310 (KeRemoveProcessorAffinityEx.c)
 *     KeRemoveQueueDpcEx @ 0x140423370 (KeRemoveQueueDpcEx.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     KiSetDebuggerOwner @ 0x140530774 (KiSetDebuggerOwner.c)
 *     KeFrozenProcessorCount @ 0x1405F5DF4 (KeFrozenProcessorCount.c)
 *     KiSendFreeze @ 0x1405F6118 (KiSendFreeze.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
    RtlpCopyAffinityEx(&v16, 0x20u, (struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister);
    KeRemoveProcessorAffinityEx(&v16.Count, CurrentPrcb->Number);
    KsepShimDbLock.SecureThreadCookie = 1;
    *(_DWORD *)&KsepShimDbLock.AbWaitEntryCount = 0;
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
      if ( *(int *)&KsepShimDbLock.AbWaitEntryCount >= v5 )
        break;
      KeStallExecutionProcessor(0x32u);
    }
    if ( *(int *)&KsepShimDbLock.AbWaitEntryCount < v5 )
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
    KsepShimDbLock.SecureThreadCookie = 0;
    return (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount();
  }
  return v2;
}
