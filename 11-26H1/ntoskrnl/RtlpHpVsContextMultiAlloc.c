/*
 * XREFs of RtlpHpVsContextMultiAlloc @ 0x1404610A8
 * Callers:
 *     ExHeapLookasideReplenish @ 0x140461000 (ExHeapLookasideReplenish.c)
 * Callees:
 *     RtlpHpVsSlotAllocate @ 0x14024BEE0 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14027DED0 (RtlpHpAcquireQueuedLockExclusive.c)
 */

__int64 __fastcall RtlpHpVsContextMultiAlloc(
        _BYTE *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  struct _KLOCK_ENTRIES *v7; // r9
  unsigned int v8; // r13d
  __int64 v11; // rdx
  __int64 v12; // r14
  _QWORD *v13; // rbp
  _QWORD *v14; // rdi
  unsigned int i; // esi
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int16 v21; // ax
  __int64 result; // rax
  __int128 v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]
  unsigned int v25; // [rsp+80h] [rbp+8h]

  v7 = (struct _KLOCK_ENTRIES *)((a2 + 15) >> 4);
  LOWORD(v25) = 0;
  v8 = (_DWORD)v7 + (a1[4] & 1) + 1;
  HIWORD(v25) = (_WORD)v7 + (a1[4] & 1) + 1;
  v11 = 16LL * *(unsigned __int16 *)a1 + (unsigned __int8)(a1[2] & KeGetCurrentThread()[1].SchedulerApcFill3[45]);
  v23 = 0LL;
  v24 = 0LL;
  v12 = (__int64)&a1[64 * (unsigned __int64)*(unsigned __int16 *)&a1[4 * v11]];
  if ( (a1[5] & 1) == 0 )
    RtlpHpAcquireQueuedLockExclusive((int *)(v12 + 8), (unsigned __int8)a1[3], (__int64)&v23, v7);
  v13 = 0LL;
  v14 = 0LL;
  for ( i = 0; i < a3; ++i )
  {
    v16 = RtlpHpVsSlotAllocate((__int64)a1, v12, v8, v25, (__int64)&v23);
    if ( !v16 )
      goto LABEL_18;
    v17 = v16 + 2;
    v18 = 16 * (WORD1(v16) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*v16)) - 16;
    if ( (a1[4] & 1) != 0 && ((unsigned __int64)(v16 + 4) & 0xFFF) == 0 )
    {
      v17 = v16 + 4;
      v18 = 16 * (WORD1(v16) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*v16)) - 32;
    }
    v19 = v18;
    if ( a2 < v18 )
    {
      *((_DWORD *)v16 + 2) |= 0x100u;
      v20 = v18 - a2;
      *((_BYTE *)v17 + v19 - 1) = 0;
      v21 = *(_WORD *)((char *)v17 + v19 - 2);
      if ( v20 == 1 )
        *(_WORD *)((char *)v17 + v19 - 2) = v21 | 0x8000;
      else
        *(_WORD *)((char *)v17 + v19 - 2) = v21 ^ (v21 ^ v20) & 0x1FFF;
    }
    *v17 = v13;
    v13 = v17;
    if ( !v14 )
      v14 = v17;
  }
  if ( (a1[5] & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive((unsigned __int8)a1[3], (__int64)&v23);
LABEL_18:
  result = i;
  *a5 = v13;
  *a6 = v14;
  return result;
}
