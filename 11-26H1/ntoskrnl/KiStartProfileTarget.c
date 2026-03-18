/*
 * XREFs of KiStartProfileTarget @ 0x1404CEFB0
 * Callers:
 *     KeStartProfile @ 0x1405F32A8 (KeStartProfile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x14042C030 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x14042D260 (KeCheckProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

ULONG_PTR __fastcall KiStartProfileTarget(_QWORD *Argument)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  ULONG_PTR result; // rax
  __int64 v6; // rcx
  _KPROCESS ***v7; // rax
  _KPROCESS ****v8; // rdx
  __int64 v9; // rcx
  _KAFFINITY_EX *UserAffinity; // rcx
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v14; // r14
  int v15; // esi
  __int64 Number; // r15
  unsigned int v17; // r12d
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v1 = *Argument;
  v2 = (unsigned __int8)KiProfileIrql;
  v3 = Argument;
  v20 = 0;
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != KiProfileIrql )
    __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(Argument) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Argument, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) != 1 )
    goto LABEL_6;
  if ( *(_BYTE *)(v1 + 610) )
  {
    *((_BYTE *)v3 + 304) = 0;
    goto LABEL_6;
  }
  v6 = *(_QWORD *)(v1 + 24);
  v7 = (_KPROCESS ***)(v1 + 8);
  *(_BYTE *)(v1 + 610) = 1;
  if ( v6 )
  {
    v8 = *(_KPROCESS *****)(v6 + 32);
    v9 = v6 + 24;
    if ( *v8 != (_KPROCESS ***)v9 )
      goto LABEL_27;
    *v7 = (_KPROCESS **)v9;
    *(_QWORD *)(v1 + 16) = v8;
    *v8 = v7;
    *(_QWORD *)(v9 + 8) = v7;
  }
  else
  {
    UserAffinity = KiSupervisorXStateFeaturesLock.UserAffinity;
    if ( *(struct _KTHREAD **)KiSupervisorXStateFeaturesLock.UserAffinity != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.Process )
      goto LABEL_27;
    *v7 = &KiSupervisorXStateFeaturesLock.Process;
    *(_QWORD *)(v1 + 16) = UserAffinity;
    *(_QWORD *)&UserAffinity->Count = v7;
    KiSupervisorXStateFeaturesLock.UserAffinity = (_KAFFINITY_EX *)(v1 + 8);
  }
  for ( i = KiSupervisorXStateFeaturesLock.QueueListEntry.Blink;
        i != (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.QueueListEntry.Blink;
        i = i->Flink )
  {
    if ( LODWORD(i[1].Flink) == *(__int16 *)(v1 + 608) )
      goto LABEL_26;
  }
  i = (struct _LIST_ENTRY *)v3[36];
  v3[36] = 0LL;
  LODWORD(i[1].Flink) = *(__int16 *)(v1 + 608);
  i[1].Blink = (struct _LIST_ENTRY *)2097184;
  memset_0(&i[2], 0, 0x100uLL);
  Blink = KiSupervisorXStateFeaturesLock.QueueListEntry.Blink;
  if ( (struct _LIST_ENTRY **)KiSupervisorXStateFeaturesLock.QueueListEntry.Blink->Blink != &KiSupervisorXStateFeaturesLock.QueueListEntry.Blink )
LABEL_27:
    __fastfail(3u);
  i->Flink = KiSupervisorXStateFeaturesLock.QueueListEntry.Blink;
  i->Blink = (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.QueueListEntry.Blink;
  Blink->Blink = i;
  KiSupervisorXStateFeaturesLock.QueueListEntry.Blink = i;
LABEL_26:
  v3[37] = i;
  RtlSubtractAffinityEx((struct _KAFFINITY_EX *)(v1 + 72), (struct _KAFFINITY_EX *)&i[1].Blink, (__int64)(v3 + 3));
  _InterlockedOr(v18, 0);
  *(_QWORD *)(v1 + 336) = 2097184LL;
  memset_0((void *)(v1 + 344), 0, 0x100uLL);
  *((_BYTE *)v3 + 304) = 1;
LABEL_6:
  _InterlockedDecrement((volatile signed __int32 *)v3 + 3);
  while ( *((int *)v3 + 3) > 0 )
    _mm_pause();
  if ( *((_BYTE *)v3 + 304) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = v3[37];
    v15 = 0;
    Number = CurrentPrcb->Number;
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v3 + 12, CurrentPrcb->Number) )
    {
      v19 = &v21;
      v20 = 1718767691;
      v15 = guard_dispatch_icall_no_overrides((unsigned int)*(__int16 *)(v1 + 608), &v20);
      if ( v15 < 0 )
      {
LABEL_33:
        if ( v15 == -1073741637 )
          _InterlockedOr((volatile signed __int32 *)v3 + 4, 2u);
        else
          _InterlockedOr((volatile signed __int32 *)v3 + 4, 1u);
        goto LABEL_9;
      }
      v21 = _InterlockedExchange64((volatile __int64 *)(v1 + 600), v21);
    }
    v17 = CurrentPrcb->Number;
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v1 + 72), v17) )
    {
      KeInterlockedSetProcessorAffinityEx(v1 + 336, v17);
      KeInterlockedSetProcessorAffinityEx(v14 + 24, CurrentPrcb->Number);
      ++*(_DWORD *)(v14 + 4 * Number + 288);
      goto LABEL_9;
    }
    goto LABEL_33;
  }
LABEL_9:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
