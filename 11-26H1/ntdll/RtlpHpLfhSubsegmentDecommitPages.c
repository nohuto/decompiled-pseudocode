/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x180064078
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x180063C80 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x180063BF8 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180063F20 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpTlLogGCScheduled @ 0x180064504 (RtlpHpTlLogGCScheduled.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpHpLfhSubsegmentDecommitPages(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // r14d
  unsigned int v5; // esi
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned int EmptyUnits; // eax
  unsigned int v16; // r11d
  unsigned int v17; // r15d
  char v18; // cl
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // ebx
  unsigned int v22; // [rsp+80h] [rbp+18h] BYREF
  int v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v4 = 0;
  v22 = 0;
  v5 = a3;
  if ( a3 < 0 )
  {
    v9 = 1;
    v5 = 1;
  }
  else
  {
    v8 = *(_QWORD *)a1;
    v9 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v10 = *(__int16 *)(v8 + 22);
      v11 = *(_QWORD *)(v10 + v8 + 8);
      v12 = *(_QWORD *)(v10 + v8 + 24) + *(_QWORD *)(v10 + v8 + 16);
      v13 = v11 >> *(_BYTE *)(v8 + 11);
      if ( v13 <= 8 )
        v13 = 8LL;
      v14 = v11 >> *(_BYTE *)(v8 + 12);
      if ( v14 <= 8 )
        v14 = 8LL;
      if ( v12 <= v13 )
        return;
      if ( Timer && !byte_1801CA908 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
        {
          TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
          if ( (RtlpHpHeapFeatures & 0x10) != 0 )
            RtlpHpTlLogGCScheduled();
        }
        if ( v12 <= v14 )
          return;
      }
    }
  }
  if ( v5 >= *(unsigned __int8 *)(a2 + 39) )
    return;
  do
  {
    EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v5, &v22);
    v5 = EmptyUnits;
    if ( EmptyUnits == -1 )
      break;
    v17 = v22;
    if ( v22 < v16 )
    {
      if ( !v9 )
        break;
      goto LABEL_25;
    }
    if ( v4 )
    {
      v18 = *(_BYTE *)(a2 + 38);
      v19 = EmptyUnits << 12 << v18;
      v20 = v19;
      v21 = v22 << 12 << v18;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
        *(_QWORD *)a1,
        v19 + a2,
        v21);
      RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v20, v21);
      if ( !v9 )
        goto LABEL_17;
LABEL_25:
      v5 += v17;
      continue;
    }
    v4 = 2;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
  }
  while ( v5 < *(unsigned __int8 *)(a2 + 39) );
  if ( !v4 )
    return;
LABEL_17:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 56));
}
