/*
 * XREFs of MiInitializePartialVad @ 0x140AC26F4
 * Callers:
 *     MiAllocateSplitVads @ 0x140AC258C (MiAllocateSplitVads.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiAdvanceVadView @ 0x1403178D0 (MiAdvanceVadView.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiClearVadTrimBehind @ 0x14043ABA0 (MiClearVadTrimBehind.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiCopyVadContents @ 0x140460AFC (MiCopyVadContents.c)
 *     Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline @ 0x140711D14 (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     MiCreatePlaceholderStorage @ 0x14099782C (MiCreatePlaceholderStorage.c)
 *     MiCreateRotateView @ 0x1409A097C (MiCreateRotateView.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiResidentPagesForSpan @ 0x140A03850 (MiResidentPagesForSpan.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartialVad(char *P, __int64 a2)
{
  __int64 v3; // rsi
  int v5; // r13d
  int VadFlags; // ebx
  volatile signed __int32 *v7; // rsi
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Process; // r15
  int RotateView; // r14d
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // r15
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // r14
  ULONG *ProcessPartition; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // [rsp+60h] [rbp+8h]
  __int64 v21; // [rsp+68h] [rbp+10h]
  __int64 v22; // [rsp+70h] [rbp+18h]

  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 16);
  v21 = *(_QWORD *)(a2 + 24);
  v22 = *(_QWORD *)(a2 + 32);
  v20 = v3;
  VadFlags = MiReadVadFlags(v3);
  MiCopyVadContents((__int64)P, (_DWORD *)v3);
  *((_DWORD *)P + 9) = 0;
  *((_QWORD *)P + 2) = -2LL;
  *((_QWORD *)P + 7) &= 0xFuLL;
  if ( (*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    *((_DWORD *)P + 13) = -3;
    P[34] = 7;
  }
  else
  {
    *((_DWORD *)P + 13) = 0;
    P[34] = 0;
  }
  v7 = (volatile signed __int32 *)(P + 40);
  *((_QWORD *)P + 5) = 0LL;
  v8 = VadFlags & 0x1C;
  CurrentThread = KeGetCurrentThread();
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v8 == 16 )
  {
    RotateView = MiCreateRotateView((ULONG_PTR)CurrentThread->ApcState.Process, (__int64)P);
    if ( RotateView < 0 )
      goto LABEL_6;
  }
  if ( MiLocateLockedVadEvent(v20, 0x80u) )
  {
    RotateView = MiCreatePlaceholderStorage(Process);
    if ( RotateView < 0 )
    {
LABEL_32:
      MiReleaseVadEventBlocks((__int64)P);
LABEL_6:
      ExFreePoolWithTag(P, 0);
      return (unsigned int)RotateView;
    }
  }
  if ( v5 == 1 || v5 == 3 && !*(_QWORD *)a2 )
  {
    v14 = ((unsigned __int64)(v22 + 1) >> 12)
        - (*((unsigned int *)P + 6) | ((unsigned __int64)(unsigned __int8)P[32] << 32));
  }
  else
  {
    *((_DWORD *)P + 7) = (unsigned __int64)(v21 - 1) >> 12;
    P[33] = (unsigned __int64)(v21 - 1) >> 44;
    v14 = 0LL;
  }
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)(P + 40), 0LL, 0LL, v13);
  v17 = v15;
  if ( _interlockedbittestandset64(v7, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)P + 5, v15, (__int64)(P + 40));
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v17, v16);
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  MiAdvanceVadView((__int64)P, v14, 0);
  if ( (VadFlags & 0x80000) == 0 )
  {
    MiClearVadTrimBehind((__int64)P, 0);
    *((_QWORD *)P + 16) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
  KeAbPostRelease((unsigned __int64)(P + 40));
  if ( !(unsigned int)Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline()
    && (v8 == 4 || v8 == 16 || v8 == 12 && (VadFlags & 0x880000) == 0x880000) )
  {
    if ( MiResidentPagesForSpan(
           (*((unsigned int *)P + 6) | ((unsigned __int64)(unsigned __int8)P[32] << 32)) << 12,
           ((*((unsigned int *)P + 7) | ((unsigned __int64)(unsigned __int8)P[33] << 32)) << 12) | 0xFFF,
           0) )
    {
      ProcessPartition = (ULONG *)MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
      if ( !(unsigned int)MiChargeResident(ProcessPartition, v19, 128LL) )
      {
        RotateView = -1073741670;
        goto LABEL_32;
      }
    }
  }
  *(_QWORD *)P = *(_QWORD *)a2;
  result = 0LL;
  *(_QWORD *)a2 = P;
  return result;
}
