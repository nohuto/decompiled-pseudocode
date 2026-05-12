/*
 * XREFs of RaidAdapterResetBusNoLock @ 0x14006571C
 * Callers:
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     StorGetOutstandingIoCount @ 0x14005C75C (StorGetOutstandingIoCount.c)
 *     RaCallMiniportResetBus @ 0x140060048 (RaCallMiniportResetBus.c)
 *     RaidAdapterSetPauseTimer @ 0x140068E50 (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x14006DC84 (RaidResumeAndRestartAdapterQueues.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterResetBusNoLock(__int64 a1)
{
  int OutstandingIoCount; // r15d
  ULONGLONG UnbiasedInterruptTime; // rbx
  unsigned int v5; // esi
  ULONGLONG v6; // rax
  unsigned int v7; // ecx
  int v8; // r12d
  ULONGLONG v9; // r14
  __int64 v10; // r9
  __int64 v11; // rcx
  KIRQL v12; // bl
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // [rsp+30h] [rbp-89h] BYREF
  int v17; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-81h] BYREF
  int v19; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v20; // [rsp+40h] [rbp-79h] BYREF
  ULONGLONG v21; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+70h] [rbp-49h]
  __int64 v24; // [rsp+78h] [rbp-41h]
  int *v25; // [rsp+80h] [rbp-39h]
  __int64 v26; // [rsp+88h] [rbp-31h]
  char *v27; // [rsp+90h] [rbp-29h]
  __int64 v28; // [rsp+98h] [rbp-21h]
  int *v29; // [rsp+A0h] [rbp-19h]
  __int64 v30; // [rsp+A8h] [rbp-11h]
  ULONGLONG *v31; // [rsp+B0h] [rbp-9h]
  __int64 v32; // [rsp+B8h] [rbp-1h]
  int *v33; // [rsp+C0h] [rbp+7h]
  __int64 v34; // [rsp+C8h] [rbp+Fh]
  int *v35; // [rsp+D0h] [rbp+17h]
  __int64 v36; // [rsp+D8h] [rbp+1Fh]

  if ( KeGetCurrentIrql() >= 2u )
    return 3221225800LL;
  if ( !*(_BYTE *)(a1 + 456) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 324), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  *(_DWORD *)(a1 + 5152) = 0;
  OutstandingIoCount = StorGetOutstandingIoCount(a1);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v5 = RaCallMiniportResetBus(a1 + 376, 0);
  v6 = KeQueryUnbiasedInterruptTime();
  v7 = *(_DWORD *)(a1 + 600);
  v8 = *(_DWORD *)(a1 + 5152);
  v9 = v6 - UnbiasedInterruptTime;
  if ( v7 )
  {
    v10 = v7 / 0xF4240 + 1;
    if ( v7 == 1000000 * (v7 / 0xF4240) )
      v10 = v7 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4200, a1 + 4264, v10);
  }
  else
  {
    v12 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v12);
  }
  if ( (unsigned int)dword_140172178 > 5 )
  {
    if ( tlgKeywordOn(v11, 0x400000000000LL) )
    {
      v24 = 16LL;
      v23 = a1 + 5128;
      v17 = *(_DWORD *)(a1 + 56);
      v25 = &v17;
      v27 = &v16;
      v29 = (int *)&v18;
      v31 = &v21;
      v33 = &v19;
      v35 = &v20;
      v26 = 4LL;
      v16 = 0;
      v28 = 1LL;
      v18 = v5;
      v30 = 4LL;
      v21 = v9;
      v32 = 8LL;
      v19 = OutstandingIoCount;
      v34 = 4LL;
      v20 = v8;
      v36 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v13, (unsigned __int8 *)dword_14015FD91, v14, v15, 9u, &v22);
    }
  }
  *(_DWORD *)(a1 + 324) = 0;
  return v5;
}
