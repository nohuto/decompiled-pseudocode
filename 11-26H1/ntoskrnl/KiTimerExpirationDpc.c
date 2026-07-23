/*
 * XREFs of KiTimerExpirationDpc @ 0x1405FDA30
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 *     KiTimerExpiration @ 0x1403B5048 (KiTimerExpiration.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiTimerExpirationDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KPRCB *v10; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // r8
  _QWORD v15[2]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-1A0h]

  v4 = (int)SystemArgument1;
  memset_0(v16, 0, 0x190uLL);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v15[0] = 0LL;
    v15[1] = 0LL;
    EtwTraceKernelEvent((int)v15, 1, 0x40020000u, 3926, 5245442);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = MEMORY[0xFFFFF78000000014];
  _disable();
  v6 = MEMORY[0xFFFFF78000000008];
  if ( KiSerializeTimerExpiration )
  {
    if ( CurrentPrcb->ClockOwner )
    {
      v7 = 33552LL;
      v8 = MEMORY[0xFFFFF78000000008] >> 18;
      v9 = 2LL;
      do
      {
        *(_DWORD *)(v7 + KiProcessorBlock[0]) = v8;
        v7 += 4LL;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    CurrentPrcb->TimerTable.TableState.LastTimerHand[0] = MEMORY[0xFFFFF78000000008] >> 18;
    CurrentPrcb->TimerTable.TableState.LastTimerHand[1] = v6 >> 18;
  }
  v10 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v12 = *SchedulerAssist;
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  _enable();
  KiTimerExpiration((__int64)CurrentPrcb, v4, v6, 1, (__int64)v16);
  CurrentPrcb->DpcData[0].ActiveDpc = 0LL;
  if ( CurrentPrcb->ClockOwner )
  {
    LOBYTE(v14) = 1;
    KiTimer2Expiration((struct _SINGLE_LIST_ENTRY *)CurrentPrcb, v6, v14, 1, (__int64)v16);
  }
}
