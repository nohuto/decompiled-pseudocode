/*
 * XREFs of KiInitializeUserApc @ 0x14043ED48
 * Callers:
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D5F50 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x1403D7680 (KeContextFromKframes.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     RtlpCopyExtendedContext @ 0x14040BA10 (RtlpCopyExtendedContext.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     KiSetupForInstrumentationReturn @ 0x140481CA8 (KiSetupForInstrumentationReturn.c)
 *     KePopulateContinuationContext @ 0x1404AFFC0 (KePopulateContinuationContext.c)
 *     KeCopyExceptionRecord @ 0x1404DF53C (KeCopyExceptionRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

struct _LIST_ENTRY *__fastcall KiInitializeUserApc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v9; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v11; // rbx
  char *v12; // r14
  int v13; // eax
  unsigned int v14; // r15d
  int v15; // edx
  unsigned __int64 v16; // rbx
  int MiscFlags; // ecx
  unsigned __int64 v18; // rax
  ULONG64 v19; // rbx
  ULONG v20; // r13d
  unsigned __int64 v21; // rax
  void *v22; // rsp
  void *v23; // rdx
  void *v24; // rsi
  PCONTEXT_EX v25; // r12
  __int64 v26; // rdx
  unsigned __int64 v27; // r13
  ULONG *v28; // r12
  struct _LIST_ENTRY *result; // rax
  _QWORD *v30; // r8
  const char *v31; // rax
  int v32; // r9d
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v34; // rax
  __int64 Flink_low; // rcx
  ULONG ContextLength; // [rsp+30h] [rbp+0h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  __int64 v38; // [rsp+40h] [rbp+10h]
  int v39; // [rsp+4Ch] [rbp+1Ch]
  __int64 v40; // [rsp+58h] [rbp+28h]
  _QWORD v41[2]; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp+48h]
  ULONG *p_ContextLength; // [rsp+80h] [rbp+50h]
  __int64 v44; // [rsp+88h] [rbp+58h]
  __int64 v45; // [rsp+90h] [rbp+60h]
  __int64 v46; // [rsp+98h] [rbp+68h]
  int v47[4]; // [rsp+B0h] [rbp+80h] BYREF
  _CONTEXT_EX Src; // [rsp+150h] [rbp+120h] BYREF

  v45 = a4;
  v41[0] = a3;
  v38 = a1;
  v40 = a2;
  v9 = a5;
  v44 = a5;
  v46 = a6;
  memset_0(v47, 0, 0x98uLL);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    v15 = 1048603;
    v16 = 0LL;
    v14 = a7;
    if ( (_bittest64(&KeFeatureBits, 0x17u) & ((a7 & 2) != 0)) != 0 )
    {
      v15 = 1048667;
      v16 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    MiscFlags = CurrentThread->MiscFlags;
    v18 = v16 & 0xFFFFFFFFFFFFF7FFuLL;
    v19 = v16 | 0x800;
    if ( (MiscFlags & 0x100000) == 0 )
      v19 = v18;
    v20 = v15 | 0x100040;
    if ( (MiscFlags & 0x100000) == 0 )
      v20 = v15;
    ContextLength = 0;
    RtlGetExtendedContextLength2(v20, &ContextLength, v19);
    v21 = ContextLength + 15LL;
    if ( v21 <= ContextLength )
      v21 = 0xFFFFFFFFFFFFFF0LL;
    v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
    p_ContextLength = &ContextLength;
    memset_0(&ContextLength, 0, ContextLength);
    ContextEx = 0LL;
    RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v20, &ContextEx, v19);
    KeContextFromKframes(a2, a1, (__int64)&ContextLength);
    v23 = *(void **)(a2 + 384);
    v24 = v23;
    ContextLength = v20 & 0x100040;
    if ( (v20 & 0x100040) == 0x100040 )
      v24 = (void *)(((unsigned __int64)v23 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL);
    v42 = ((unsigned __int64)v24 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = (char *)(v42 - 32);
    v11 = v42 - 1328;
    v25 = ContextEx;
    Src = *ContextEx;
    Src.All.Length = (_DWORD)v23 - (v42 - 1328);
    Src.XState.Offset = (_DWORD)v24 - (v42 - 96);
    ProbeForWrite((volatile void *)(v42 - 1328), (SIZE_T)v23 - v42 + 1328, 0x10u);
    RtlSetUserMemory(v12 - 32);
    RtlWriteULongToUser(v12 - 32, 1LL);
    v39 = 2;
    v26 = 2LL;
    if ( (a7 & 1) != 0 )
      v26 = 3LL;
    v39 = v26;
    RtlWriteULongToUser(v12 - 28, v26);
    if ( ContextLength == 1048640 )
      RtlCopyToUser(v24, (char *)v25 + v25->XState.Offset, 0x40uLL);
    RtlpCopyExtendedContext(0, (__int64)(v12 - 64), (__int64)&Src, v20, (__int64)ContextEx, 0LL);
    RtlCopyToUser(v12 - 64, &Src, 0x20uLL);
    v27 = v42;
    v28 = p_ContextLength;
    RtlWriteULong64ToUser(v42 + 24, *((_QWORD *)p_ContextLength + 19));
    RtlWriteULong64ToUser(v27, *((_QWORD *)v28 + 31));
    KePopulateContinuationContext(*((_QWORD *)v28 + 31));
    v9 = v44;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 208);
    v38 = *(_QWORD *)(a2 + 352);
    v12 = (char *)(v11 + 1296);
    ProbeForWrite((volatile void *)(v11 + 1296), 0x20uLL, 0x10u);
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v13 = KiUnwindUserSspForApcContextCopyBypass(v11);
      if ( v13 < 0 )
        RtlRaiseStatus(v13);
    }
    v14 = a7;
  }
  RtlSetUserMemory(v12);
  if ( (v14 & 4) != 0 )
  {
    RtlWriteULong64ToUser(v12, v9);
    RtlWriteULong64ToUser(v12 + 8, v11);
    v9 = (__int64)v12;
  }
  RtlWriteULong64ToUser(v11, v45);
  RtlWriteULong64ToUser(v11 + 8, v9);
  RtlWriteULong64ToUser(v11 + 16, v46);
  RtlWriteULong64ToUser(v11 + 24, v41[0]);
  RtlWriteULong64ToUser(v11 + 32, v14);
  *(_QWORD *)(a2 + 384) = v11;
  *(_QWORD *)(a2 + 360) = *(_QWORD *)&stru_140FC11F0.ReservedPreviousReadyTimeValue;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  result = (struct _LIST_ENTRY *)MEMORY[0xFFFFF780000003B0];
  if ( (struct _LIST_ENTRY *)(MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) >= stru_140E62450.MutantListHead.Blink )
  {
    __sidt(v41);
    v30 = *(_QWORD **)((char *)v41 + 2);
    if ( *(_QWORD *)((char *)v41 + 2) < (unsigned __int64)(*(_QWORD *)((char *)v41 + 2) + 848LL) )
    {
      v31 = *(const char **)((char *)v41 + 2);
      do
      {
        _mm_prefetch(v31, 0);
        v31 += 64;
      }
      while ( (unsigned __int64)v31 < *(_QWORD *)((char *)v41 + 2) + 848LL );
    }
    v32 = 848;
    Blink = stru_140E62450.ThreadListEntry.Blink;
    v34 = 106LL;
    Flink_low = LODWORD(stru_140E62450.MutantListHead.Flink);
    do
    {
      Blink = (struct _LIST_ENTRY *)__ROR8__((char *)Blink - *v30++, (char)stru_140E62450.MutantListHead.Flink);
      v32 -= 8;
      --v34;
    }
    while ( v34 );
    for ( ; v32; --v32 )
    {
      Blink = (struct _LIST_ENTRY *)__ROR8__(
                                      (char *)Blink - *(unsigned __int8 *)v30,
                                      (char)stru_140E62450.MutantListHead.Flink);
      v30 = (_QWORD *)((char *)v30 + 1);
    }
    if ( *(struct _LIST_ENTRY **)&stru_140E62450.AbWaitEntryCount != Blink )
    {
      if ( stru_140E62450.SchedulerApc.SystemArgument2 )
        goto LABEL_37;
      ContextLength = 603979780;
      stru_140E62450.SchedulerApc.SystemArgument2 = (PVOID)(unsigned int)__ROL4__(603979780, 166);
      *(_OWORD *)&stru_140E62450.SchedulerApcFill5[80] = 0LL;
      stru_140E62450.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)269;
      stru_140E62450.SuspendEvent.Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)((char *)v41 + 2);
    }
    if ( !stru_140E62450.SchedulerApc.SystemArgument2 )
    {
LABEL_40:
      LOBYTE(Flink_low) = 1;
      result = (struct _LIST_ENTRY *)(KiQueryUnbiasedInterruptTime(Flink_low)
                                    + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                                    + 288000000000LL);
      stru_140E62450.MutantListHead.Blink = result;
      return result;
    }
LABEL_37:
    if ( stru_140E62450.SchedulerApc.Reserved[0] != KiSchedulerDpc )
    {
      *(_DWORD *)&stru_140E62450.SchedulerApcFill5[8] = 275;
      stru_140E62450.SchedulerApc.Reserved[0] = KiSchedulerDpc;
      stru_140E62450.SchedulerApc.Reserved[1] = &stru_140E62450.SchedulerApcFill5[8];
      stru_140E62450.SchedulerApc.SystemArgument1 = 0LL;
      stru_140E62450.SchedulerApc.ApcListEntry.Blink = 0LL;
    }
    stru_140E62450.ThreadListEntry.Flink = (struct _LIST_ENTRY *)1107776;
    KiInsertQueueDpc((ULONG_PTR)&stru_140E62450.SchedulerApc.Thread, 0LL, 0LL, 0LL, 0);
    goto LABEL_40;
  }
  return result;
}
