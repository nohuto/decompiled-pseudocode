/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x18006AE68
 * Callers:
 *     RtlStdLogStackTrace @ 0x18006AAE0 (RtlStdLogStackTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18006AD0C (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18006AD2C (RtlpStdLockRelease.c)
 *     RtlpStdGetSpaceForTrace @ 0x18006AFBC (RtlpStdGetSpaceForTrace.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpStdLogCapturedStackTrace(__int64 a1, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // rbp
  __int64 v7; // r14
  __int64 i; // rbx
  __int64 SpaceForTrace; // rax
  __int64 v10; // rcx
  __int16 v11; // cx

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v7 = 16LL * (a3 % *(_DWORD *)(a1 + 720));
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  RtlpStdLockAcquire((_RTL_SRWLOCK *)(v7 + a1 + 736));
  for ( i = *(_QWORD *)(v7 + a1 + 728); i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v4) == v4 )
    {
      goto LABEL_8;
    }
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace(a1, *(unsigned __int16 *)(a2 + 14));
  i = SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_10;
  }
  memmove((void *)(SpaceForTrace + 16), (const void *)(a2 + 16), v4);
  *(_WORD *)(i + 14) = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  v10 = 2LL * (a3 % *(_DWORD *)(a1 + 720));
  *(_QWORD *)i = *(_QWORD *)(a1 + 16LL * (a3 % *(_DWORD *)(a1 + 720)) + 728);
  *(_QWORD *)(a1 + 8 * v10 + 728) = i;
LABEL_8:
  v11 = *(_WORD *)(i + 8);
  if ( (v11 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v11 ^ (v11 ^ (v11 + 1)) & 0x7FF;
LABEL_10:
  RtlpStdLockRelease((_RTL_SRWLOCK *)(v7 + a1 + 736));
  return i;
}
