/*
 * XREFs of HalRequestIpiSpecifyVector @ 0x1402F95B0
 * Callers:
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1402F8398 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalRequestClockInterrupt @ 0x1402F9510 (HalRequestClockInterrupt.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HalpReboot @ 0x140581E74 (HalpReboot.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PoInitiateProcessorWake @ 0x140603F50 (PoInitiateProcessorWake.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalRequestIpiSpecifyVector(int a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 CurrentIrql; // r14
  unsigned int Number; // ebx
  unsigned __int64 v11; // rbx
  char v12; // r14
  unsigned int v13; // r12d
  char v14; // r15
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int16 i; // cx
  unsigned __int16 Size; // ax
  unsigned __int16 v20; // bx
  unsigned __int16 v21; // r14
  __int64 v22; // rax
  int v23; // esi
  bool v24; // zf
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  __int128 v28; // [rsp+28h] [rbp-D8h] BYREF
  int v29; // [rsp+38h] [rbp-C8h]
  __int64 v30; // [rsp+40h] [rbp-C0h]
  struct _KAFFINITY_EX v31; // [rsp+50h] [rbp-B0h] BYREF

  v3 = a3;
  v29 = 0;
  v28 = 0LL;
  memset_0(&v31.8, 0, sizeof(v31.8));
  *(_QWORD *)&v31.Count = 2097153LL;
  v6 = 0;
  memset_0(&v31.8, 0, sizeof(v31.8));
  if ( a1 == 2 )
    goto LABEL_2;
  if ( !a1 )
  {
    if ( a2 )
    {
      v7 = *a2;
      for ( i = 0; ; ++i )
      {
        if ( i >= (unsigned __int16)v7 )
          return 3221225485LL;
        if ( *(_QWORD *)&a2[4 * i + 4] )
          break;
      }
      Size = v31.Size;
      v20 = 0;
      v31.Reserved = 0;
      v21 = v31.Size;
      if ( (unsigned __int16)v7 <= v31.Size )
        v21 = v7;
      v31.Count = v21;
      if ( v21 )
      {
        memmove(&v31.8, a2 + 4, 8LL * v21);
        do
          ++v20;
        while ( v20 < v21 );
        Size = v31.Size;
      }
      if ( v20 < Size )
      {
        do
        {
          v22 = v20++;
          v31.Bitmap[v22] = 0LL;
        }
        while ( v20 < v31.Size );
      }
      goto LABEL_2;
    }
    return 3221225485LL;
  }
  if ( a1 != 1 )
    return 3221225485LL;
LABEL_2:
  CurrentIrql = KeGetCurrentIrql();
  v30 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 15;
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, v7);
  }
  if ( v3 != 210 && v3 != 47 && v3 != 31 )
  {
LABEL_9:
    if ( a1 )
    {
      v23 = a1 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
          LODWORD(v28) = 3;
      }
      else
      {
        LODWORD(v28) = 4;
      }
    }
    else
    {
      LODWORD(v28) = 2;
      *((_QWORD *)&v28 + 1) = &v31;
    }
    v6 = HalpInterruptSendIpi((unsigned int *)&v28, v3);
    goto LABEL_12;
  }
  Number = KeGetPcr()->Prcb.Number;
  v25 = Number;
  if ( a1 == 1 )
  {
    RtlpCopyAffinityEx(&v31, v31.Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
    KeRemoveProcessorAffinityEx(&v31, Number);
  }
  else if ( a1 == 2 )
  {
    RtlpCopyAffinityEx(&v31, v31.Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
  }
  v11 = v31.Bitmap[0];
  v12 = 0;
  v13 = v25;
  v14 = 0;
  LOWORD(v15) = 0;
  while ( 1 )
  {
    while ( v11 )
    {
      _BitScanForward64(&v16, v11);
      v11 &= ~(1LL << v16);
      v17 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v15].Flink
            + (unsigned __int8)v16);
      v26 = v17;
      if ( (_DWORD)v17 == v13 )
        goto LABEL_44;
      if ( (*(_DWORD *)(*((_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink + v17) + 228LL) & 1) != 0 )
      {
        if ( (unsigned __int8)PoInitiateProcessorWake((unsigned int)v17) )
        {
LABEL_44:
          v14 = 1;
        }
        else
        {
          KeRemoveProcessorAffinityEx(&v31, v26);
          v12 = 1;
        }
      }
      else
      {
        v14 = 1;
      }
    }
    v15 = (unsigned __int16)(v15 + 1);
    if ( (unsigned int)v15 >= v31.Count )
      break;
    v11 = v31.Bitmap[v15];
  }
  v24 = v12 == 0;
  LOBYTE(CurrentIrql) = v30;
  v3 = a3;
  if ( !v24 )
    a1 = 0;
  if ( v14 )
    goto LABEL_9;
LABEL_12:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8((unsigned __int8)CurrentIrql);
  return v6;
}
