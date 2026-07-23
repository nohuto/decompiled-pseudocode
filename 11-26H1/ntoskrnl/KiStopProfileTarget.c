/*
 * XREFs of KiStopProfileTarget @ 0x140421130
 * Callers:
 *     KeStopProfile @ 0x1404A4318 (KeStopProfile.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalStopProfileInterrupt @ 0x1405822C0 (HalStopProfileInterrupt.c)
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
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  _QWORD *v11; // rdi
  unsigned __int16 *v12; // r14
  unsigned __int16 v13; // bp
  unsigned __int64 v14; // r12
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int16 i; // cx
  __int64 v20; // rcx
  _QWORD *v21; // rax
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
  v9 = (_QWORD *)qword_140F26B80;
  do
  {
    v10 = v9;
    v11 = v9;
    v9 = (_QWORD *)*v9;
  }
  while ( *((_DWORD *)v10 + 4) != *(__int16 *)(v1 + 608) );
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
      v17 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v13].Flink
            + (unsigned __int8)v16);
      if ( (*((_DWORD *)v10 + v17 + 72))-- == 1 )
        KeAddProcessorAffinityEx((unsigned __int16 *)v2 + 8, v17);
      goto LABEL_21;
    }
    if ( ++v13 >= v15 )
      break;
    v14 = *(_QWORD *)&v12[4 * v13 + 4];
  }
  _InterlockedOr(v22, 0);
  RtlSubtractAffinityEx((struct _KAFFINITY_EX *)(v11 + 3), (struct _KAFFINITY_EX *)(v2 + 2), (__int64)(v11 + 3));
  for ( i = 0; i < *((_WORD *)v11 + 12); ++i )
  {
    if ( v11[i + 4] )
      goto LABEL_37;
  }
  v20 = *v11;
  v21 = (_QWORD *)v11[1];
  if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v21 != v11 )
LABEL_27:
    __fastfail(3u);
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
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
