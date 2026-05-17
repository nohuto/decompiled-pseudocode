/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x1800966D8
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1800962E0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x180096258 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180096580 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpTlLogGCScheduled @ 0x180096B64 (RtlpHpTlLogGCScheduled.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentDecommitPages(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // r14d
  unsigned int v5; // esi
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
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
      result = v11 >> *(_BYTE *)(v8 + 11);
      if ( result <= 8 )
        result = 8LL;
      v14 = v11 >> *(_BYTE *)(v8 + 12);
      if ( v14 <= 8 )
        v14 = 8LL;
      if ( v12 <= result )
        return result;
      if ( qword_1801C7268 && !byte_1801CB8C8 )
      {
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0);
        if ( !(_DWORD)result )
        {
          result = TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
          if ( (RtlpHpHeapFeatures & 0x10) != 0 )
            result = RtlpHpTlLogGCScheduled();
        }
        if ( v12 <= v14 )
          return result;
      }
    }
  }
  result = *(unsigned __int8 *)(a2 + 39);
  if ( v5 >= (unsigned int)result )
    return result;
  do
  {
    result = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v5, &v22);
    v5 = result;
    if ( (_DWORD)result == -1 )
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
      v19 = (unsigned int)((_DWORD)result << 12 << v18);
      v20 = v19;
      v21 = v22 << 12 << v18;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
        *(_QWORD *)a1,
        v19 + a2,
        v21);
      RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v20, v21);
      if ( !v9 )
        return (unsigned __int64)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 56));
LABEL_25:
      v5 += v17;
      goto LABEL_22;
    }
    v4 = 2;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 56), v15);
LABEL_22:
    result = *(unsigned __int8 *)(a2 + 39);
  }
  while ( v5 < (unsigned int)result );
  if ( !v4 )
    return result;
  return (unsigned __int64)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 56));
}
