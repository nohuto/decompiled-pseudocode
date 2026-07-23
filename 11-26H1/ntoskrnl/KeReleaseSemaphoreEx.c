/*
 * XREFs of KeReleaseSemaphoreEx @ 0x14042BF80
 * Callers:
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DEF10 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpDoPortCleanup @ 0x1408F0B84 (AlpcpDoPortCleanup.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A52738 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtReleaseSemaphore @ 0x140A81350 (NtReleaseSemaphore.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x140AFBE60 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140B73710 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiCompleteDirectSwitchThread @ 0x14042C2A8 (KiCompleteDirectSwitchThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  int v6; // edi
  unsigned int v7; // esi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r13
  unsigned int v11; // ebp
  signed __int8 v12; // cf
  int v13; // r14d
  int v14; // eax
  _QWORD *v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  char v20; // al
  unsigned int v21; // r13d
  __int64 v22; // rdi
  char v23; // dl
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v27; // [rsp+80h] [rbp+8h]
  unsigned int v28; // [rsp+88h] [rbp+10h]
  int v29; // [rsp+90h] [rbp+18h] BYREF
  struct _KPRCB *v30; // [rsp+98h] [rbp+20h]

  v30 = (struct _KPRCB *)a4;
  v28 = a2;
  v6 = a3;
  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v12 = _interlockedbittestandset((volatile signed __int32 *)a1, 7u);
  v30 = CurrentPrcb;
  v29 = 0;
  if ( v12 )
  {
    do
    {
      do
        KeYieldProcessorEx(&v29);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  v13 = *(_DWORD *)(a1 + 4);
  v14 = v13 + v6;
  if ( v13 + v6 < v13 || v14 > *(_DWORD *)(a1 + 24) )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( (a5 & 8) != 0 )
      RtlRaiseStatus(-1073741753);
    return 3221225543LL;
  }
  *(_DWORD *)(a1 + 4) = v14;
  if ( v13 )
    goto LABEL_21;
  v15 = *(_QWORD **)(a1 + 8);
  v16 = (_QWORD *)(a1 + 8);
  while ( v15 != v16 )
  {
    v17 = (_QWORD *)*v15;
    v18 = (__int64)v15;
    v15 = v17;
    v19 = *(_QWORD **)(v18 + 8);
    if ( v17[1] != v18 || *v19 != v18 )
      __fastfail(3u);
    *v19 = v17;
    v17[1] = v19;
    v20 = *(_BYTE *)(v18 + 16);
    if ( v20 == 1 )
    {
      v21 = 0;
      v22 = *(_QWORD *)(v18 + 24);
      v27 = *(unsigned __int16 *)(v18 + 18);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v21);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v22 + 64) );
      }
      if ( *(_BYTE *)(v22 + 388) == 5 )
        v23 = KiSignalThread((__int64)v30, v22, v27, v18);
      else
        v23 = 0;
      CurrentPrcb = v30;
      v16 = (_QWORD *)(a1 + 8);
      *(_QWORD *)(v22 + 64) = 0LL;
      ++*(_BYTE *)(v18 + 17);
      if ( v23 )
      {
LABEL_19:
        v24 = *(_DWORD *)(a1 + 4) - 1;
        *(_DWORD *)(a1 + 4) = v24;
        if ( !v24 )
          break;
        v16 = (_QWORD *)(a1 + 8);
      }
    }
    else
    {
      if ( v20 == 2 )
      {
        *(_BYTE *)(v18 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v18 + 24), (_QWORD *)v18, a3);
        goto LABEL_19;
      }
      if ( v20 == 4 )
      {
        *(_BYTE *)(v18 + 17) = 5;
        *(_DWORD *)(a1 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v18 + 24), a1, v18, 0LL, 0);
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v18, 256LL, 0LL);
      }
      v16 = (_QWORD *)(a1 + 8);
    }
  }
  v7 = v28;
LABEL_21:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  v25 = a5;
  if ( (a5 & 1) != 0 )
  {
    v11 = 1;
    if ( (a5 & 4) == 0 )
      v11 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
    v11 = ~(unsigned __int8)(v25 >> 1) & 2 | 4;
  }
  KiExitDispatcher((__int64)CurrentPrcb, v11, 1u, v7, CurrentIrql);
  if ( a6 )
    *a6 = v13;
  return 0LL;
}
