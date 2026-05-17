/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x18007C648
 * Callers:
 *     RtlStdLogStackTrace @ 0x18007C2C0 (RtlStdLogStackTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18007C4EC (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18007C50C (RtlpStdLockRelease.c)
 *     RtlpStdGetSpaceForTrace @ 0x18007C79C (RtlpStdGetSpaceForTrace.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpStdLogCapturedStackTrace(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v5; // edx
  SIZE_T v6; // rbp
  __int64 v9; // r14
  __int64 i; // rbx
  __int64 SpaceForTrace; // rax
  __int64 v12; // rcx
  __int16 v13; // cx

  v3 = *(unsigned __int16 *)(a2 + 14);
  v5 = a3 % *(_DWORD *)(a1 + 720);
  v6 = 8 * v3;
  v9 = 16LL * v5;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  RtlpStdLockAcquire((volatile signed __int64 *)(v9 + a1 + 736), v5);
  for ( i = *(_QWORD *)(v9 + a1 + 728); i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v6) == v6 )
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
  memmove((void *)(SpaceForTrace + 16), (const void *)(a2 + 16), v6);
  *(_WORD *)(i + 14) = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  v12 = 2LL * (a3 % *(_DWORD *)(a1 + 720));
  *(_QWORD *)i = *(_QWORD *)(a1 + 16LL * (a3 % *(_DWORD *)(a1 + 720)) + 728);
  *(_QWORD *)(a1 + 8 * v12 + 728) = i;
LABEL_8:
  v13 = *(_WORD *)(i + 8);
  if ( (v13 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v13 ^ (v13 ^ (v13 + 1)) & 0x7FF;
LABEL_10:
  RtlpStdLockRelease((volatile signed __int64 *)(v9 + a1 + 736));
  return i;
}
