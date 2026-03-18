/*
 * XREFs of CmFcManagerRecordFeatureUsage @ 0x1402C56C8
 * Callers:
 *     RtlRecordFeatureUsage @ 0x1404D4AD0 (RtlRecordFeatureUsage.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlReleaseSwapReference @ 0x1402C5854 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x1402C58E0 (RtlAcquireSwapReference.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x1402C593C (RtlpFcAddFeatureUsageDataToBuffer.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1402C59E4 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcManagerRecordFeatureUsage(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  unsigned __int8 EffectiveIrql; // di
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int v10; // eax
  char v11; // bl
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned int v14; // edx
  char v15; // al
  char v16; // dl
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  v4 = 0;
  EffectiveIrql = KeGetEffectiveIrql();
  if ( EffectiveIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v7 = (unsigned int)RtlAcquireSwapReference(&unk_140EFB970);
  v8 = *((_QWORD *)&CmpFreezeListLock + v7 + 223);
  if ( !v8 )
  {
    RtlReleaseSwapReference(&unk_140EFB970, (unsigned int)v7);
    goto LABEL_7;
  }
  v9 = (*(_DWORD *)(v8 + 28) >> 1) + (*(_DWORD *)(v8 + 28) >> 2);
  v10 = RtlpFcAddFeatureUsageDataToBuffer(v8, a2, &v17);
  v11 = dword_140EFBC90;
  v12 = v10;
  RtlReleaseSwapReference(&unk_140EFB970, (unsigned int)v7);
  if ( (unsigned int)v12 >= v9 || (v13 = v17 + v12, v9 > (unsigned __int64)(v17 + v12)) )
  {
    if ( (v11 & 0x20) == 0 )
      CmFcpManagerArmFeatureUsageProviderFlushNotification(v13, 1LL);
  }
  else
  {
    if ( dword_140EFBCC0 != 1 )
      goto LABEL_7;
    if ( EffectiveIrql >= 2u )
    {
      if ( EffectiveIrql >= 0xFu )
        goto LABEL_7;
      v14 = 2;
    }
    else
    {
      v14 = dword_140EFBCC0;
    }
    _m_prefetchw(&dword_140EFBCC4);
    v15 = _InterlockedOr(&dword_140EFBCC4, v14);
    v16 = ~v15 & v14;
    if ( (v16 & 1) != 0 )
    {
      CmpWorkItemQueueWork(&WorkItem);
    }
    else if ( (v15 & 1) == 0 && (v16 & 2) != 0 )
    {
      KiInsertQueueDpc((ULONG_PTR)&BugCheckParameter2, 0LL, 0LL, 0LL, 0);
    }
  }
LABEL_7:
  if ( v4 )
    KeLeaveCriticalRegion();
}
