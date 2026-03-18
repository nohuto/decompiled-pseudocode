/*
 * XREFs of KiStopProfileTarget @ 0x14042CA60
 * Callers:
 *     KeStopProfile @ 0x1404AAC88 (KeStopProfile.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x14042D260 (KeCheckProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalStopProfileInterrupt @ 0x14057FDA0 (HalStopProfileInterrupt.c)
 */

ULONG_PTR __fastcall KiStopProfileTarget(_QWORD *Argument)
{
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // r15
  ULONG_PTR result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v10; // r13
  struct _LIST_ENTRY *v11; // rdi
  unsigned __int16 *v12; // r14
  unsigned __int16 v13; // bp
  unsigned __int64 v14; // r12
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int16 i; // cx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v21; // rax
  signed __int32 v22[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *Argument;
  v2 = Argument;
  v3 = (unsigned __int8)KiProfileIrql;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != KiProfileIrql )
    __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags )
  {
    LOBYTE(Argument) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Argument, v3);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 2, 0xFFFFFFFF) != 1 || !*(_BYTE *)(v1 + 610) )
    goto LABEL_6;
  v6 = v1 + 8;
  *(_BYTE *)(v1 + 610) = 0;
  v7 = *(_QWORD *)(v1 + 8);
  if ( v7 != v1 + 8 )
  {
    v8 = *(_QWORD **)(v1 + 16);
    if ( *(_QWORD *)(v7 + 8) != v6 || *v8 != v6 )
      goto LABEL_27;
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
  Blink = KiSupervisorXStateFeaturesLock.QueueListEntry.Blink;
  do
  {
    v10 = Blink;
    v11 = Blink;
    Blink = Blink->Flink;
  }
  while ( LODWORD(v10[1].Flink) != *(__int16 *)(v1 + 608) );
  v12 = (unsigned __int16 *)(v1 + 336);
  v13 = 0;
  v14 = *(_QWORD *)(v1 + 344);
LABEL_21:
  if ( v1 == -336 )
    v15 = v13 + 1;
  else
    v15 = *v12;
  while ( 1 )
  {
    if ( v14 )
    {
      _BitScanForward64(&v16, v14);
      v14 &= ~(1LL << v16);
      v17 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
            + 64 * v13
            + (unsigned __int8)v16);
      if ( (*((_DWORD *)&v10[18].Flink + v17))-- == 1 )
        KeAddProcessorAffinityEx((unsigned __int16 *)v2 + 8, v17);
      goto LABEL_21;
    }
    if ( ++v13 >= v15 )
      break;
    v14 = *(_QWORD *)&v12[4 * v13 + 4];
  }
  _InterlockedOr(v22, 0);
  RtlSubtractAffinityEx((struct _KAFFINITY_EX *)&v11[1].Blink, (struct _KAFFINITY_EX *)(v2 + 2), (__int64)&v11[1].Blink);
  for ( i = 0; i < LOWORD(v11[1].Blink); ++i )
  {
    if ( *((_QWORD *)&v11[2].Flink + i) )
      goto LABEL_37;
  }
  Flink = v11->Flink;
  v21 = v11->Blink;
  if ( v11->Flink->Blink != v11 || v21->Flink != v11 )
LABEL_27:
    __fastfail(3u);
  v21->Flink = Flink;
  Flink->Blink = v21;
  v2[35] = v11;
LABEL_37:
  *((_BYTE *)v2 + 288) = 1;
LABEL_6:
  _InterlockedDecrement((volatile signed __int32 *)v2 + 3);
  while ( *((int *)v2 + 3) > 0 )
    _mm_pause();
  if ( (unsigned int)KeCheckProcessorAffinityEx(v2 + 2, KeGetCurrentPrcb()->Number) )
    HalStopProfileInterrupt((unsigned int)*(__int16 *)(v1 + 608));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
