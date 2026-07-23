/*
 * XREFs of ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0
 * Callers:
 *     ?KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404BE710 (-KiForceIdleStopDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404F75F0 (-KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiCheckPrcbAffinityEx @ 0x140308C80 (KiCheckPrcbAffinityEx.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     KiSendSoftwareInterrupt @ 0x14043EC90 (KiSendSoftwareInterrupt.c)
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline @ 0x1404BEEC8 (Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404EAE58 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiForceIdleUpdateSchedulerParkState(unsigned __int8 a1)
{
  __int64 v1; // rsi
  struct _KPRCB *CurrentPrcb; // r14
  int v3; // edi
  unsigned int i; // ebx
  unsigned __int16 Size; // ax
  unsigned __int16 v6; // cx
  wchar_t v7; // bx
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  unsigned __int16 Count; // bx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned __int64 Bitmap; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int j; // edi
  __int64 Prcb; // rbx
  struct _KPRCB *v20; // rdx
  char v21; // r14
  int v22; // ecx
  unsigned __int64 v23; // rdi
  unsigned __int16 k; // bx
  unsigned __int64 v25; // rdx
  struct _KPRCB *v26; // rax
  signed __int32 v27[8]; // [rsp+8h] [rbp-100h] BYREF
  _DWORD v28[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v31[264]; // [rsp+160h] [rbp+58h] BYREF

  v1 = a1;
  memset_0(&v29.8, 0, sizeof(v29.8));
  memset_0(v31, 0, 0x100uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v30 = 2097153LL;
  memset_0(v31, 0, 0x100uLL);
  if ( KiForceIdlePendingDpcCount )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      if ( KeRemoveQueueDpcEx((int *)(KiProcessorBlock[i] + 35560), 0) )
        _InterlockedDecrement(&KiForceIdlePendingDpcCount);
      else
        KeAddProcessorAffinityEx((unsigned __int16 *)&v30, i);
    }
    v3 = 0;
  }
  else
  {
    v3 = 1;
  }
  while ( KiForceIdlePendingDpcCount )
    _mm_pause();
  if ( !(_BYTE)v1 )
  {
    _InterlockedOr(v27, 0);
    v29.Size = 32;
    memset_0(&v29.8, 0, sizeof(v29.8));
    Size = v29.Size;
    v6 = 0;
    v7 = KiForceIdleUnparkRestoreMask[0];
    v29.Reserved = 0;
    if ( KiForceIdleUnparkRestoreMask[0] > v29.Size )
      v7 = v29.Size;
    v29.Count = v7;
    if ( v7 )
    {
      memmove(&v29.8, &unk_140E0AF18, 8LL * v7);
      Size = v29.Size;
      v6 = v7;
    }
    if ( v6 < Size )
    {
      do
      {
        v8 = v6++;
        v29.Bitmap[v8] = 0LL;
      }
      while ( v6 < v29.Size );
    }
    RtlOrAffinityEx(&v29, (struct _KAFFINITY_EX *)KiForceIdleSoftParkRestoreMask, (__int64)&v29);
    goto LABEL_25;
  }
  v29.Size = 32;
  memset_0(&v29.8, 0, sizeof(v29.8));
  v9 = 32;
  v10 = 0;
  Count = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  v29.Reserved = 0;
  if ( *(_WORD *)&stru_140FC11F0.WaitRegister.Flags > 0x20u )
    Count = 32;
  v29.Count = Count;
  if ( Count )
  {
    memmove(&v29.8, (char *)&stru_140FC11F0.116 + 4, 8LL * Count);
    v9 = v29.Size;
    v10 = Count;
    Count = v29.Count;
  }
  if ( v10 < v9 )
  {
    do
    {
      v12 = v10++;
      v29.Bitmap[v12] = 0LL;
    }
    while ( v10 < v29.Size );
LABEL_25:
    Count = v29.Count;
  }
  if ( !v3 )
  {
    RtlAndAffinityEx(&v29.Count, (unsigned __int16 *)&v30, (__int64)&v29);
    Count = v29.Count;
  }
  v13 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + CurrentPrcb->Number);
  Bitmap = v13 >> 6;
  if ( (unsigned int)Bitmap < Count && (Bitmap = v29.Bitmap[Bitmap] >> v13, (Bitmap & 1) != 0) )
  {
    v15 = 0LL;
    if ( Count )
    {
      Bitmap = (unsigned __int64)v29.Bitmap;
      v16 = Count;
      do
      {
        v15 = (unsigned int)__popcnt(*(_QWORD *)Bitmap) + (unsigned int)v15;
        Bitmap += 8LL;
        --v16;
      }
      while ( v16 );
    }
    KiForceIdlePendingDpcCount = v15 - 1;
  }
  else
  {
    v15 = 0LL;
    if ( Count )
    {
      Bitmap = (unsigned __int64)v29.Bitmap;
      v17 = Count;
      do
      {
        v15 = (unsigned int)__popcnt(*(_QWORD *)Bitmap) + (unsigned int)v15;
        Bitmap += 8LL;
        --v17;
      }
      while ( v17 );
    }
    KiForceIdlePendingDpcCount = v15;
  }
  if ( (unsigned int)Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline(v15, Bitmap) )
  {
    for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
    {
      Prcb = KeGetPrcb(j);
      if ( KiCheckPrcbAffinityEx(&v29, Prcb) )
      {
        if ( v20 == KeGetCurrentPrcb() )
          KiForceIdleParkUnparkProcessor((struct _KPRCB *)Prcb, v1);
        else
          KiInsertQueueDpc(Prcb + 35560, v1, 0LL, 0LL, 0);
      }
      else if ( !(_BYTE)v1 )
      {
        v21 = 0;
        v28[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(Prcb + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(v28);
          while ( *(_QWORD *)(Prcb + 48) );
        }
        if ( (*(_BYTE *)(Prcb + 35) & 1) == 0
          && (*(_DWORD *)(*(_QWORD *)(Prcb + 36488) + 8LL) | *(_DWORD *)(Prcb + 33752) || *(_QWORD *)(Prcb + 33840)) )
        {
          *(_BYTE *)(Prcb + 14523) = 1;
          v21 = 1;
        }
        _InterlockedAnd64((volatile signed __int64 *)(Prcb + 48), 0LL);
        if ( v21 )
        {
          v22 = *(_DWORD *)(Prcb + 36);
          if ( KeGetPcr()->Prcb.Number != v22 )
            KiSendSoftwareInterrupt(v22, 2);
        }
      }
    }
  }
  else
  {
    v23 = v29.Bitmap[0];
    for ( k = 0; ; v23 = v29.Bitmap[k] )
    {
      while ( v23 )
      {
        _BitScanForward64(&v25, v23);
        v23 &= ~(1LL << v25);
        v26 = (struct _KPRCB *)KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * k].Flink
                                         + (unsigned int)(unsigned __int8)v25));
        if ( v26 == KeGetCurrentPrcb() )
          KiForceIdleParkUnparkProcessor(v26, v1);
        else
          KiInsertQueueDpc((ULONG_PTR)&v26->ForceIdleDpc, v1, 0LL, 0LL, 0);
      }
      if ( ++k >= (unsigned int)v29.Count )
        break;
    }
  }
}
