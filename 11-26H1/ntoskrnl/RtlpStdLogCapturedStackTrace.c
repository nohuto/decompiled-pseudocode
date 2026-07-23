/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x14061C128
 * Callers:
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpStdGetSpaceForTrace @ 0x14061C068 (RtlpStdGetSpaceForTrace.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

KSPIN_LOCK __fastcall RtlpStdLogCapturedStackTrace(PKSPIN_LOCK SpinLock, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // rbp
  __int64 v6; // rdx
  __int64 v8; // r14
  KSPIN_LOCK i; // rbx
  _SLIST_ENTRY *SpaceForTrace; // rax
  __int64 v11; // rdx
  __int16 v12; // cx

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v6 = a3 % *((_DWORD *)SpinLock + 180);
  v8 = 3 * v6;
  _InterlockedAdd((volatile signed __int32 *)SpinLock + 44, 1u);
  LOBYTE(SpinLock[3 * (unsigned int)v6 + 93]) = KeAcquireSpinLockRaiseToDpc(&SpinLock[3 * (unsigned int)v6 + 92]);
  for ( i = SpinLock[v8 + 91]; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v4) == v4 )
    {
      goto LABEL_8;
    }
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace((volatile signed __int32 *)SpinLock, *(_WORD *)(a2 + 14));
  i = (KSPIN_LOCK)SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)SpinLock + 50, 1u);
    goto LABEL_11;
  }
  memmove(&SpaceForTrace[1], (const void *)(a2 + 16), v4);
  *(_WORD *)(i + 14) = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  v11 = 3LL * (a3 % *((_DWORD *)SpinLock + 180));
  *(_QWORD *)i = SpinLock[3 * (a3 % *((_DWORD *)SpinLock + 180)) + 91];
  SpinLock[v11 + 91] = i;
LABEL_8:
  v12 = *(_WORD *)(i + 8);
  if ( (v12 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v12 ^ (v12 ^ (v12 + 1)) & 0x7FF;
LABEL_11:
  KeReleaseSpinLock(&SpinLock[v8 + 92], SpinLock[v8 + 93]);
  return i;
}
